<!DOCTYPE HTML>
<html>
    <head>
        <title>Numeri Casuali</title>
        <link href = "style.css" rel = "stylesheet">
    </head>
    <body>
        <h2>BLACKJACK</h2>
        <div>
        <?php
        echo "<b>Banco</b>"; 
        $somma1 = 0;
        $somma_temp1 = 0; 
        $i = 0; 
        echo "<table border = 1px><tr>"; 
        do {
            $i++; 
            $numero_casuale = rand(2,11); 
            echo "<td>$numero_casuale</td>"; 
            $somma1 = $somma1 + $numero_casuale;
            if ($somma1 > 21){
                $somma_temp1 = $somma1 - $numero_casuale; 
            } 
        } while($somma1 < 21 ); 
        $i--; 
        echo "</tr></table>"; 
        echo "<p> La somma è: $somma_temp1 </p>"; 
        echo "<p> Carte prima di sballare : $i, carta che ti ha fatto sballare: $numero_casuale</p>"; 
        echo "</div>"; 
        
        echo "<div>"; 
        $somma2 = 0;
        $somma_temp2 = 0; 
        $i = 0; 
        echo "<b>Giocatore</b>"; 
        echo "<table border = 1px><tr>"; 
        do {
            $i++; 
            $numero_casuale = rand(2,11); 
            echo "<td>$numero_casuale</td>"; 
            $somma2 = $somma2 + $numero_casuale;
            if ($somma2 > 21){
                $somma_temp2 = $somma2 - $numero_casuale; 
            } 
        } while($somma2 < 21 );
        
        $i--; 
        echo "</tr></table>"; 
        echo "<p> La somma è: $somma_temp2 </p>"; 
        echo "<p> Carte prima di sballare : $i, carta che ti ha fatto sballare: $numero_casuale</p>"; 
        
        if ($somma_temp1 > $somma_temp2){
            echo "<p> Ha vinto <b>Il Banco.</b></p>"; 
        } else {
            echo "<p> Ha vinto <b>Il Giocatore.</b></p>"; 
        }

        ?>
        </div>
    </body>
</html>