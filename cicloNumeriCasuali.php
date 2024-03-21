<!DOCTYPE HTML>
<html>
    <head>
        <title>Numeri Casuali</title>
    </head>
    <body>
        <p>Pagina web per la generazione di numeri casuali</p>
        <?php
        $somma = 0;
        $i = 0; 
        echo "<table border = 1px><tr>"; 
        while($somma < 90){
            $i++; 
            $numero_casuale = rand(1,21); 
            echo "<td>il $i ° numero e'"."$numero_casuale</td>"; 
            $somma = $somma + $numero_casuale; 
            
        }
            echo "</tr></table>"; 
            echo "<p> La somma è: $somma </p>"; 
            echo "<p> Abbiamo generato : $i numeri </p>"; 
        ?>
    </body>
</html>