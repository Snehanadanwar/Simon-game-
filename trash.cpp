<!DOCTYPE html>
<html lang="en" dir="ltr">

<head>
  <meta charset="utf-8">
  <title>Simon</title>
  <link rel="stylesheet" href="styles.css">
  <link href="https://fonts.googleapis.com/css?family=Press+Start+2P" rel="stylesheet">
</head>

<body>
  <h1 id="level-title">Press A Key to Start</h1>
  <div class="container">
    <div class="row">

      <div type="button" id="green" class="btn green">

      </div>

      <div type="button" id="red" class="btn red">

      </div>
    </div>

    <div class="row">

      <div type="button" id="yellow" class="btn yellow">

      </div>
      <div type="button" id="blue" class="btn blue">

      </div>

    </div>

  </div>


</body>

</html>





body {
  text-align: center;
  background-color: #011F3F;
}

#level-title {
  font-family: 'Press Start 2P', cursive;
  font-size: 3rem;
  margin:  5%;
  color: #FEF2BF;
}

.container {
  display: block;
  width: 50%;
  margin: auto;

}

.btn {
  margin: 25px;
  display: inline-block;
  height: 200px;
  width: 200px;
  border: 10px solid black;
  border-radius: 20%;
}

.game-over {
  background-color: red;
  opacity: 0.8;
}

.red {
  background-color: red;
}

.green {
  background-color: green;
}

.blue {
  background-color: blue;
}

.yellow {
  background-color: yellow;
}

.pressed {
  box-shadow: 0 0 20px white;
  background-color: grey;
}
