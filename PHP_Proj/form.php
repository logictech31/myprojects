<!--@Author: 1. Amaan Shaikh (Frontend)
             2. Hrushikesh Pandit (Backend)
-->
<?php session_start(); ?>
<html>
  <head>
  <title>Touche Restaurant | Form</title>

  <meta charset="utf-8">
  <link rel="stylesheet" href="css/reset.css" type="text/css" media="all">
  <link rel="stylesheet" href="css/layout.css" type="text/css" media="all">
  <link rel="stylesheet" href="css/style.css" type="text/css" media="all">

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
                  <div class="card-body">
                    </div>
                    <h3>Customer Information</h3><br>
                    <form>
                      <h5>Enter first name:</h5>
                      <input type="text" class="txtfieldform" name="F_name">
                      <h5>Enter last name:</h5>
                      <input type="text" class="txtfieldform" name="L_name">
                      <h5>Enter State:</h5>
                      <input type="text" class="txtfieldform" name="state">
                      <h5>Enter City:</h5>
                      <input type="text" class="txtfieldform" name="city">
                      <h5>Enter Building:</h5>
                      <input type="text" class="txtfieldform" name="build"><br><br>
                      <input type="Submit" class="btn" value="Submit" onclick="window.open('bill.php')">
                    </form>
                        <div>
                        </div>
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