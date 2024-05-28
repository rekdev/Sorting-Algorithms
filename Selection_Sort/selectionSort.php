<?php
function selectionSort(array $arr): array
{
    $n = count($arr);

    for ($i = 0; $i < $n; $i++) {
        $min = $i;

        for ($j = $min + 1; $j < $n; $j++) {
            if ($arr[$j] < $arr[$min]) {
                $min = $j;
            }
        }

        $temp = $arr[$i];
        $arr[$i] = $arr[$min];
        $arr[$min] = $temp;
    }

    return $arr;
}

$arr = [8, 10, 7, 1, 4, 6, 2, 5, 9, 3];
$sortedArr = selectionSort($arr);

print_r($sortedArr);
