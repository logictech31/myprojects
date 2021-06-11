<!--@Author: 1. Amaan Shaikh (Frontend)
             2. Hrushikesh Pandit (Backend)
-->
<html>
  <head>
  <title>Touche Restaurant | Bill Processing</title>

  <meta charset="utf-8">
  <link rel="stylesheet" href="css/reset.css" type="text/css" media="all">
  <link rel="stylesheet" href="css/layout.css" type="text/css" media="all">
  <link rel="stylesheet" href="css/style.css" type="text/css" media="all">
  <link rel="stylesheet" href="css/billingPage.css" type="text/css" media="all">

  <script src="js/jquery-1.6.js" ></script>
  <script src="js/cufon-yui.js"></script>
  <script src="js/cufon-replace.js"></script>
  <script src="js/Forum_400.font.js"></script>
  <script src="js/jquery.easing.1.3.js"></script>
  <script src="js/tms-0.3.js"></script>
  <script src="js/tms_presets.js"></script>
  <script src="js/script.js"></script>
  <script src="js/atooltip.jquery.js"></script> 
  </head>
  <body id="page1">
  <div class="body6">
    <div class="body1">
      <div class="body5">
        <div class="main">
          <div class="row">
            <section class="col1 pad_left1">
            <img src="images\logo.png" height="160" width="200">
          </section>
            <nav>
                <ul id="top_nav">
                  <br><br>
                <li><a href="index.php"><img src="images/icon_1.gif" alt=""></a></li>
                <li><a href="#"><img src="images/icon_2.gif" alt=""></a></li>
                <li class="end"><a href="https://mail.google.com/mail/u/0/?fs=1&tf=cm&to=hrushikeshbusiness@gmail.com&cc=amaan.sk03@gmail.com"><img src="images/icon_3.gif" alt=""></a></li>
              </ul>
            </nav>
            <header>
            <nav>
              <ul id="menu">
                <li class="active"><a href="index.php">Restaurant</a></li>
                <li><a href="menu.php">Menu</a></li>
                <li><a href="https://mail.google.com/mail/u/0/?fs=1&tf=cm&to=hrushikeshbusiness@gmail.com&cc=amaan.sk03@gmail.com">Contact us</a></li>
              </ul>
            </nav>
          </header>
            <div class="slider_bg">
                <div class="slider">
                  <div>
                        <div>
                            <div>
                                <div>
                                    <style type="text/css">
    table, th, td {
  border: 1px solid black;
  border-collapse: collapse;
  font-size: 30px;
}
</style>
<?php

            $host = "localhost";
            $user = "root";
            $db = "phpmyadmin";

            $link = new mysqli($host, $user, "", $db);

            if($link->connect_error) {
                echo "Error Connecting to the database!";
            }

    $sql = "SELECT * FROM order_details_customer";
    $result = $link->query($sql);

echo "<table>
  <tr>
  <th>
    Dish Code
  </th>
  <th>
    Dish Name
  </th>
  <th>
    Quantity
  </th>
  <th>
    Price
  </th>";


    while ($row = $result->fetch_assoc()) {
        echo "  <tr>
        <td>
            ".$row['Dish_Code']."
        </td>
        <td>
            ".$row['Dish_Name']."
        </td>
        <td>
            ".$row['Quantity']."
        </td>
        <td>
            ".$row['Price']."
        </td>
    </tr>";
    }
    echo "</table>";

    $sql = "SELECT SUM(Price) FROM order_details_customer";
    $result = $link->query($sql);
    // Fetch a single row from the result and then access column index 0 or using an associative key. 
    // Use the null-coalescing operator in case no rows are present in the result.
    $finalPrice = $result->fetch_array()[0] ?? '';
    $Final_Price = number_format($finalPrice, 2);
    echo "<br>Total Amount: £".$Final_Price;
?>
                                </div>
                            </div>
                        </div>
                    </div>
                    <div>
                    </div>
                </div>
            </div>
        </div>
    </div>
  </ul>
</div></div></div></div></div></div></div></div></div>

        <!-- footer -->

        <footer>
          <div class="wrapper">
            <section class="col1 pad_left1">
              <h3>Reach out to us: </h3>
              <h3><a href="https://mail.google.com/mail/u/0/?fs=1&tf=cm&to=hrushikeshbusiness@gmail.com&cc=amaan.sk03@gmail.com">Click here to contact us</a></h3><br>
            <section class="col2 pad_left1">
              <h3>Toll Free: <span>020-525257578</span></h3>
              Copyright &copy; <a href="#">Touche Restaurant</a> All Rights Reserved<br>
            </section>
          </div>

          <!-- {%FOOTER_LINK} -->

        </footer>

        <!-- /footer -->

      </div>
    </div>
  </div>
  </body>
</html>