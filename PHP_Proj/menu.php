<!--@Author: 1. Amaan Shaikh (Frontend)
             2. Hrushikesh Pandit (Backend)
-->
<html>
  <head>
  <title>Touche Restaurant | Menu</title>
  <meta charset="utf-8">
  <link rel="stylesheet" href="css/reset.css" type="text/css" media="all">
  <link rel="stylesheet" href="css/layout.css" type="text/css" media="all">
  <link rel="stylesheet" href="css/style.css" type="text/css" media="all">

  <script src="js/jquery-1.6.js" ></script>
  <script src="js/cufon-yui.js"></script>
  <script src="js/cufon-replace.js"></script>
  <script src="js/Forum_400.font.js"></script>
  <script src="js/atooltip.jquery.js"></script>

  </head>

  <body id="page1">
  <div class="body6">
    <div class="body1">
      <div class="body5">
        <div class="main">
          
          <!-- header -->

          <section class="col1 pad_left1">
            <img src="images\logo.png" height="160" width="200">
          </section>
            <nav>
                <ul id="top_nav">
                  <br><br>
                <li><a href="index.php"><img src="images/icon_1.gif" alt=""></a></li>
                <li><a href="#"><img src="images/icon_2.gif" alt=""></a></li>
                <li class="end"><a href="contacts.php"><img src="images/icon_3.gif" alt=""></a></li>
              </ul>
            </nav>
          <header>
            <nav>
              <ul id="menu">
                <li><a href="index.php">Restaurant</a></li>
                <li class="active"><a href="menu.php">Menu</a></li>
                <li><a href="https://mail.google.com/mail/u/0/?fs=1&tf=cm&to=hrushikeshbusiness@gmail.com&cc=amaan.sk03@gmail.com">Contact us</a></li>
              </ul>
            </nav>
          </header>

        <!-- /header -->
        
        <!-- content -->
        <article id="content">
          <div class="wrap">
            <section class="cols">
              &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;
              <img src="images\Menu.jpg">
              <br><br><br><br><br>
              <?php
              // we have set the order number to 1 just for the purpose of simplifying
                if(!isset($_COOKIE['order_num'])) {
                  setcookie('order_num', 1, time() + (86400 * 30), "/");
                }
              ?>
              <div><strong style="font-size:30px">Order Here:</strong></div>
              <br><br>
              <form method="post">
                <h3>Enter Dish Name:<br>
                <!--<input type="Text" name="dish_code" class="txtfieldform" size="3" 
                maxlength="3" required>-->
                <select name="dish_code" class="txtfieldform">
                  <option value="S1">Caprese Garlic Bread</option>
                  <option value="S2">Quinoa Tomato Salad Bites</option>
                  <option value="V1">Trentino</option>
                  <option value="V2">Lombardia</option>
                  <option value="NV1">White Sauce Pasta Chicken</option>
                  <option value="NV2">Spaghetti Bolognese</option>
                  <option value="De1">Tirimisu</option>
                  <option value="De2">Torta Barozzi</option>
                  <option value="Dr1">Aperitivo</option>
                  <option value="Dr2">Amaro</option>
                </select>
                <br><br>Enter quantity:<br>
                <input type="Number" name="dish_quantity" class="txtfieldform" size="2" maxlength="2" 
                min="1" max="10" required><br><br>
                <input type="submit" class="btn" name="bill"
                value="Process Bill" onclick="window.open('bill.php')"/>
                <input type="submit" class="btn" name="dish_add" value="Add Dish"/>
              </form>
                </h3>
            </div>
            <?php include 'Insert_Order_Backend.php' ?>
            </section>
        </article>
        <div class="body3">
    <div class="body4">
      <div class="main">

        <!-- footer -->

        <footer>
          <div class="wrapper">
            <section class="col1 pad_left1">
              <h3>Reach out to us: </h3>
              <h3><a href="https://mail.google.com/mail/u/0/?fs=1&tf=cm&to=hrushikeshbusiness@gmail.com&cc=amaan.sk03@gmail.com">Click here to contact us</a></h3><br>
            <section class="col2 pad_left1">
              <center><h3>Toll Free: <span>020-525257578</span></h3>
              Copyright &copy; <a href="#">Touche Restaurant</a><br>All Rights Reserved<br>
            </section></center>
          </div>

          <!-- {%FOOTER_LINK} -->

        </footer>

        <!-- /footer -->

      </div>
    </div>
  </div>
  </body>
</html>
