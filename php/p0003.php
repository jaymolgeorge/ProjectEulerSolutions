//Answer: 6857

<?php

function smallest_prime_factor($num) {
    for ($i = 2; $i < intval(sqrt($num)) + 1; $i++) {
        if ($num % $i == 0)
           return $i;
    }
    return $num;
}

$num = 600851475143;
while (true) {
    $p = smallest_prime_factor($num);
    if ($p < $num) {
      $num = floor($num / $p);
    }
    else {
        echo "$num";
        break;
    }
}

?>
