$fn=30;
y_dim = 25;
x_dim = 25;

clearance = 1;
wall_thickness=1;

difference(){
cube([x_dim+6, y_dim+6, 10], center=true);
    translate([0,0,wall_thickness])
cube([x_dim, y_dim, 10], center=true);
    translate([3.5,0,0])
    cylinder(d=10, 50, center=true);
}
