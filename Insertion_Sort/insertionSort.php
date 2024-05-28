<?php
function insertionSort(array $arr): array
{
    $n = count($arr);

    for ($i = 1; $i < $n; $i++) {
        $key = $arr[$i];
        $j = $i;

        while ($j > 0 and $arr[$j - 1] > $key) {
            $arr[$j] = $arr[$j - 1];
            $j--;
        }

        $arr[$j] = $key;
    }

    return $arr;
}

$arr = [8, 10, 7, 1, 4, 6, 2, 5, 9, 3];
$sortedArr = insertionSort($arr);

print_r($sortedArr);
