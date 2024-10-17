<?php
    define("PI", 3.14); 
    $nome1 = "MATTEO";
    $nome2 = "FILIPPO";
    $nome3 = "SIMONE";
    $nome4 = "CRISTIAN";
    $nome5 = "LUCA";
    
    for($i = 1; $i<6;  $i++){
        $temp = "nome".$i; 
        $nuova = $$temp; 
        echo $nuova;
        echo PI; 
        echo "</br>";
          
    }

?>