<!DOCTYPE html>
<html>
    <head>
        <title>Shop Clothes: Area Riservata</title>
    </head>
    <body>
            <div>
                 <?php echo "<h3> Benvenuto nella tua area riservata!</h3>" ?>
            </div>
            <div>
                <h4>Utenti registrati</h4>
                <table>
                    <tr> 
                        <th>email</th>
                        <th>eta</th> 
                        </tr>
                <?php 
                    require_once('db_connect.php'); 
                    $query = "select utenti.mail, utenti.anni from utenti"; 
                    $result = mysqli_query($conn,$query); 
                    foreach($result as $row) {
                        echo "<tr> \n"; 
                        echo "<td>" . $row['mail'] . "</td> \n"; 
                        echo "<td>". $row['anni'] . "</th> \n"; 
                        echo "</tr> \n"; 
                    }
                ?>
                </table>
            </div>
    </body>
</html>