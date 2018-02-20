var song1;
var song2; 
var song3; 

function preload()
{
  song1=loadSound(); 
  song2=loadSound(); 
  song3=loadSound(); 

}

function mousePressed()
{
   
  
}
function setup() 
{ 
  createCanvas(400, 400);
} 

function draw()
{ 
c = color(175, 100, 220);  // Define color 'c' blue
  background(220);
  stroke(0,0,0); 
  fill('blue');
  push(); 
  rect(80,100,80,200);
  pop(); 
  rect(160,100,80,200);
  rect(240,100,80,200);
  fill("#FFFFFF"); 

  triangle(140, 160,90,200,140,240); 
  ellipse(200,200,60); 
  triangle(260, 160,250,200,320,240); 
 
  
}