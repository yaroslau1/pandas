<%--
  Created by IntelliJ IDEA.
  User: ирина
  Date: 05.02.2019
  Time: 12:07
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<html>
  <head>
    <title>$Title$</title>
  </head>


  <form  action="/sending" method="post" >
    <br><label>Your name</label>
    <input type="text" name="name" value="Input your name"></br>
  <br><label>Your surname</label>
    <input type="text" name="surname" value="Input your surname"></br>
  <br><input type="submit" name="send" value="send"></br>
  </form>
  <form action="/testing" method="post">
    <input type="submit" name="tests" value="test">
  </form>
  </body>

    ${user}
</html>
