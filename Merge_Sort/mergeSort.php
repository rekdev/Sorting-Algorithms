<?php
function merge(array $arr, array $left, array $right): array
{
    $leftCount = count($left);
    $rightCount = count($right);

    $i = $j = $k = 0;

    while ($i < $leftCount and $j < $rightCount) {
        if ($left[$i] <= $right[$j]) {
            $arr[$k] = $left[$i];
            $i++;
        } else {
            $arr[$k] = $right[$j];
            $j++;
        }

        $k++;
    }

    while ($i < $leftCount) {
        $arr[$k] = $left[$i];
        $i++;
        $k++;
    }

    while ($j < $rightCount) {
        $arr[$k] = $right[$j];
        $j++;
        $k++;
    }

    return $arr;
}

function mergeSort(array $arr): array
{
    $n = count($arr);

    if ($n > 1) {
        $mid = intdiv($n, 2);

        $left = array_slice($arr, 0, $mid);
        $right = array_slice($arr, $mid, $n);

        $left = mergeSort($left);
        $right = mergeSort($right);

        return merge($arr, $left, $right);
    } else
        return $arr;
}

$arr = [8, 10, 7, 1, 4, 6, 2, 5, 9, 3];
$sortedArr = mergeSort($arr);

print_r($sortedArr);

