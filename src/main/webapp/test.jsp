<%--
  Created by IntelliJ IDEA.
  User: ирина
  Date: 06.02.2019
  Time: 11:34
  To change this template use File | Settings | File Templates.
--%>
<%@ page contentType="text/html;charset=UTF-8" language="java" %>
<p>
<head>
    <title>Title</title>
</head>

<form action="/result" method="post">
    <label>Выберите верный ответ: оператором выбора является:</label>
    <p><input type="radio" name="choise" value="if">if
    <input type="radio" name="choise" value="for">for
    <input type="radio" name="choise" value="switch">switch
    <input type="radio" name="choise" value="while">while</p>
<p><label>Выберите верный ответ: оператором условия является:</label></p>
    <p></p><input type="radio" name="mychoise" value="if">if
    <input type="radio" name="mychoise" value="for">for
    <input type="radio" name="mychoise" value="switch">switch
<input type="radio" name="mychoise" value="while">while</p>
<p><input type="submit" name="sendTest" value="send test"></p>


</form>
</body>
</html>
