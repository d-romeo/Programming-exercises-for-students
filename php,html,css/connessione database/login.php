<html>
<body>
<?php
    session_start();
    $email=$_POST['email'];
    $password=$_POST['password'];
    print("controllo $email $password <br>");

    $conn=mysqli_connect("localhost","nome_db","ps");
    $ok=mysqli_select_db($conn,"nome_db");

    $comandosql="select * from utenti where utenti.username='$email' and utenti.password='$password'";
    $riga=mysqli_query($conn,$comandosql);

    if (mysqli_num_rows($riga)>0){
	    print("Entra <a href='areariservata.php'> Area riservata</a>");
	    $_SESSION['login'] = $email;
    }
    else
    {
	    print("Login errato");
    }
?>
</body>
</html>