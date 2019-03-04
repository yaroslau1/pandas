package com.work.myServlet;


import com.sun.net.httpserver.HttpContext;
import com.sun.net.httpserver.HttpHandler;
import com.sun.net.httpserver.HttpServer;
import com.work.dao.IUsers;
import com.work.dao.UsersRealizationDao;
import com.work.usersEntity.UsersEntity;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.context.ApplicationContext;
import org.springframework.context.support.ClassPathXmlApplicationContext;
import org.springframework.http.HttpRequest;
import org.springframework.http.server.ServerHttpRequest;
import org.springframework.http.server.ServerHttpResponse;
import org.springframework.stereotype.Controller;
import org.springframework.ui.ModelMap;
import org.springframework.web.bind.annotation.*;
import org.springframework.ui.Model;
import org.springframework.web.context.support.WebApplicationContextUtils;

import javax.servlet.ServletConfig;
import javax.servlet.ServletException;
import javax.servlet.ServletOutputStream;
import javax.servlet.http.HttpServlet;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.Executor;

@Controller

public class ServletInAction   {

    @Autowired
    IUsers userDao;

    @GetMapping("/index")
    public String index(ModelMap modelMap){
        modelMap.addAttribute("user", userDao.findById(1));
        return "index";
    }

    @RequestMapping(value = "/sending", method = RequestMethod.POST)
    public String send(@RequestParam("name") String name,
                       @RequestParam("surname") String surname,
                       Model model) {
        model.addAttribute("name", name);
        model.addAttribute("surname", surname);
        return "hello";

    }

    @RequestMapping(value = "/testing", method = RequestMethod.POST)
    public String getTest() {
        return "test";
    }

    @RequestMapping(value = "/result", method = RequestMethod.POST)
    public String getResult(@RequestParam("choise") String choise,
                            @RequestParam("mychoise") String mychoise,
                            Model model) {
        //ApplicationContext context = new ClassPathXmlApplicationContext("applicationContext.xml");
        //UsersEntity usersEntity = (UsersEntity) context.getBean("usersEntity");
        //usersEntity.setIdUsers(1);
        //System.out.println(usersEntity.getIdUsers());








        System.out.println("hello");
        if (choise.equals("switch")) {

            model.addAttribute("choise", 1);
        } else {
            model.addAttribute("choise", 0);
        }

        if (mychoise.equals("if")) {
            model.addAttribute("mychoise", 1);
        } else {
            model.addAttribute("mychoise", 0);
        }
        return "result";
    }
}
