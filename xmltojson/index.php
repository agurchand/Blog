<?php 

$xml = simplexml_load_file('strings.xml');

$arr = [];
$keys = ['english', 'hindi', 'audio'];
$i = 0;

foreach ($xml->{'string-array'} as $stringarr) {
    foreach ((array)$stringarr->item as $item) {
        $arr[$keys[$i]][] = $item;
    }
    $i++;
}

$jsonarr = [];
for ($j = 0; $j < count($arr['english']); $j++) {
    $jsonarr[$j]['id'] = $j + 1;
    $jsonarr[$j]['english'] = $arr['english'][$j];
    $jsonarr[$j]['hindi'] = $arr['hindi'][$j];
    $jsonarr[$j]['audio'] = $arr['audio'][$j];
}

print json_encode($jsonarr);


?>
