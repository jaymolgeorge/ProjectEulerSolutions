<?php
$efib1 = 0;
$efib2 = 2;
$sum = $efib1 + $efib2;
$limit = 4000000;
while($efib2 < $limit) {
  $efib3 = 4 * $efib2 + $efib1;
  if ($efib3 > $limit) break;
  $sum += $efib3;
  $efib1 = $efib2;
  $efib2 = $efib3;
}
echo "$sum";

// answer: 4613732

?>
