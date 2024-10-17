<html>
    <body>
        <?php
        session_start(); 
        
        $username = $_POST['nomeutente']; 
        $password = $_POST['password']; 

        $conn = mysqli_connect("localhost", "root","", "sito"); 
        $check=mysqli_select_db($conn,"sito");
    

        $query ="select * from utenti where utenti.username='$username' and utenti.password='$password'";
        $riga=mysqli_query($conn,$query);

        if (mysqli_num_rows($riga)>0){
	        echo "<a href='area_riservata.php'> Area riservata</a>";
	        $_SESSION['login'] = $username;
        } else {
             print("Login errato");
        }
        session_abort(); 
        ?>
    </body>
</html>