<!DOCTYPE html>
<html>
    <head>
        <title>Shop Clothes: Area Riservata</title>
    </head>
    <body>
        <?php
        session_start(); 
        $conn = mysqli_connect("localhost", "root","", "sito"); 
        $check=mysqli_select_db($conn,"sito");

        $username = $_POST['nomeutente']; 
        $password1 = $_POST['password1']; 
        $password2 = $_POST['password2']; 
        $mail = $_POST['mail']; 
        $eta = $_POST['eta']; 

        if ($password1 != $password2){
            echo $password1 ." ". $password2 ."non coincidono"; 
        } else {
            $query = "insert into utenti (mail, username, password, anni) values ('$mail', '$username', '$password1','$eta')"; 
            
            try {
                $check_query=mysqli_query($conn,$query);
                echo "utente inserito con successo"; 
            } catch (Exception $e){
                echo "utente non inserito poichè già esistente"; 
            }
        }
        
        ?>
        <button type="button" onclick="history.go(-1);return true;">Home</button> 
    </body>
</html>