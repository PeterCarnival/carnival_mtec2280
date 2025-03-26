
void setup(){
size(800, 400);


}


void draw() {
background(255, 192, 203);
fill(255,0,0);
triangle(120, 300, 232, 80, 344, 300);
square(60, 50, 110);
circle(400, 185, 150);

float value = 75;
float m = map(value, 0, 100, 0, width);
ellipse(m, 200, 50, 50);
}
