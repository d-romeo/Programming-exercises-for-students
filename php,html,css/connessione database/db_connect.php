<?php
    session_start(); 
    $config = ['db_host' => 'localhost', 
                'db_name' => 'sito',
                'db_user' => 'root',
                'db_password' => '', 
            ];  

    try {
        $conn = mysqli_connect($config['db_host'], $config['db_user'], $config['db_password'], $config['db_name']); 
        $check=mysqli_select_db($conn,$config['db_name']);
    } catch (Exception $e){
            echo "connessione non effettuata" . $e; 
    } 
?>