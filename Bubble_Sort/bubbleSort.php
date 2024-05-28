<?php
function bubbleSort(array $arr): array
{
    $n = count($arr);

    for ($i = 0; $i < $n - 1; $i++) {
        $swapped = false;

        for ($j = 0; $j < $n - $i - 1; $j++) {
            if ($arr[$j] > $arr[$j + 1]) {
                $temp = $arr[$j];
                $arr[$j] = $arr[$j + 1];
                $arr[$j + 1] = $temp;

                $swapped = true;
            }
        }

        if (!$swapped)
            break;
    }

    return $arr;
}

$arr = [8, 10, 7, 1, 4, 6, 2, 5, 9, 3];
$sortedArr = bubbleSort($arr);

print_r($sortedArr);
