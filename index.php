<?php

$mysqli = new mysqli("localhost","root","","mydb");

// Check connection
if ($mysqli->connect_errno) {
  echo "Failed to connect: " . $mysqli->connect_error;
  exit();
}

echo "<table border=1>";
echo "<tr><th>User Id</th><th>Fullname</th><th>City</th>";
// query a table
if ($result = $mysqli->query("SELECT * FROM users")) {
  while ($row = $result->fetch_assoc() ){
    echo "<tr><td>$row[user_id]</td><td>$row[fullname]</td><td>$row[city]</td></tr>";
  }
  $result -> free_result();
}

echo "</table>";

$mysqli->close();

?>