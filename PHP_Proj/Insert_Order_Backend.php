<!--@Author: 1. Amaan Shaikh (Frontend)
             2. Hrushikesh Pandit (Backend)
-->
<?php
	function insert_Dish_Order() {
		if(isset($_POST['dish_add'])) {
			$order_num = $_COOKIE['order_num'];
			$host = "localhost";
			$user = "root";
			$db = "phpmyadmin";

			$dish_quantity = $_POST['dish_quantity'];
			$dish_code = $_POST['dish_code'];

			$link = new mysqli($host, $user, "", $db);

			if($link->connect_error) {
				echo "Error Connecting to the database!";
			}

			$sql = "INSERT INTO customer_order(order_num, dishCode, dish_quantity) 
			VALUES($order_num, '$dish_code', $dish_quantity)";

			if($link->query($sql) === TRUE) {
				echo "Added Dish ".$dish_code;
			}
		}
	}
insert_Dish_Order();
?>