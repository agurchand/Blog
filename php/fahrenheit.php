 <?php
//after hit the enter button
if($_POST){
   //method="post" so we have to use $_POST
   //get the value from input field
   $fahrenheit = $_POST['fahrenheit'];
   //fahrenheit to celsius formula
   $celsius = ($fahrenheit - 32)*5/9;
}
?>
<!DOCTYPE html>
<html>
   <head>
       <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
       <title>Convert Fahrenheit to Celsius in PHP</title>
   </head>
   <body>
       <h3>Convert Fahrenheit to Celsius in PHP</h3>
       <form action="" method="post">
       Fahrenheit: <input type="text" name="fahrenheit" /><br /><br />
       <?php 
       //print the celsius after hit the enter button and the calculation
       if(isset($celsius)){
           echo "Celsius = ".$celsius;
       }
       ?>
      </form>
   </body>
</html>
