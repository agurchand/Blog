<?php

$mysqli = new mysqli("localhost","root","","mydb");

// Check connection
if ($mysqli->connect_errno) {
  echo "Failed to connect: " . $mysqli->connect_error;
  exit();
}

//fetch the results and display in a html table
echo "<table border='1'><tr><th>ID</th><th>User Name</th><th>City</th></tr>";
// query a table
$city = $_POST['city'];
if ($city != '') {
	if ($result = $mysqli->query("SELECT * FROM users where city='$city'")) {
		while ($row = $result->fetch_assoc() ){
			echo "<tr><td>$row[user_id]</td><td>$row[fullname]</td><td>$row[city]</td>";
		}
		$result -> free_result();
	}
	echo "</table>";
}
$mysqli->close();

?>