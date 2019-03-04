<%--
  Created by IntelliJ IDEA.
  User: ирина
  Date: 06.02.2019
  Time: 11:40
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<html>
<head>
    <title>Title</title>
</head>
<body>
<c:if test="${choise==1}">
    <p>1-ый вопрос - верный ответ</p>
</c:if>
<c:if test="${choise==0}">
    <p>1-ый вопрос - неверный ответ</p>
    <p>подробнее прочитать про операторы выбора можно <a
            href="http://developer.alexanderklimov.ru/android/java/switch.php">здесь</a></p>
</c:if>
<c:if test="${mychoise==1}">
    <p>2-ой вопрос - верный ответ</p>
</c:if>
<c:if test="${mychoise==0}">
    <p>2-ой вопрос - неверный ответ</p>
    <p>прочитать подробнее про операторы условия вы можете <a
            href="http://developer.alexanderklimov.ru/android/java/if.php">здесь</a></p>
</c:if>
</body>
</html>