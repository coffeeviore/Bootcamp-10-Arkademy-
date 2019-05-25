<?php

  
  $object = (object) [
    "Name" => "Novira",
    "Address" => "Medan",
	"Hobbies"=>[
				 "Nyanyi",
				 "Berenang"
				],
	"Is_married"=>"false",
	"School"=>[
     "Highschool" => "SMAN 1 Medan",
     "University" => "USU"
	],
	"Skills"=> [
    [ "name"=>"Cooking", "score"=>"80" ],
    [ "name"=>"Dancing", "score"=>"88"] 
    
	]
  ];
  
  echo json_encode($object);
?>