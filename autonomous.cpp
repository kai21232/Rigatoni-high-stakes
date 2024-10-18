#include "autonomous.hpp"


//4.75 inches per milisecond
//6.2 Inches per milisecond
//3.1(s) x 4.75

void  blueright5Ring() {
   // chassis->startOdom({-59.53,36}, 66_deg);
	
	/*chassis->turnToAngle(-180_deg, 1_s);
	pros::delay(100);*/
	chassis->startOdom({ -58.39, 37.7}, -90_deg);

	chassis->settings.reversed = true;
	chassis->followNewPath({{
			{ -58.39,37.7},
			{-41.67,41.1},
			{-22.39,20.41}
			
	}});
	pros::delay(800);
	
	clamp.toggle();
	pros::delay(500);	

	Tintake.setNormalizedVelocity(-3000);
	Bintake.setNormalizedVelocity(3000);
	pros::delay(500);

	clamp.toggle();

	chassis->turnToAngle(0_deg, 1.0_s);
	pros::delay(500);

	chassis->settings.reversed = false;

	chassis->followNewPath({{
			 
			{-24.09,20.98},
			{ -22.68,43.91}
	}});

	pros::delay(100);

	
	Tintake.setNormalizedVelocity(0);
	Bintake.setNormalizedVelocity(0);

	

	chassis->settings.reversed = true;

	chassis->followNewPath({{
	{ -22.68,43.91},
	{ -23.53,37.13},
	{ -5.1,44.94}
	}});
	pros::delay(100);

	clamp.toggle();

	chassis->settings.reversed = false;

	Tintake.setNormalizedVelocity(-12000);
	Bintake.setNormalizedVelocity(12000);
	Pintake.toggle();

	chassis->followNewPath({{
	{ -3.69, 46.77},
	{-51.59,-1.7},
	{-6.24,0.57}
	}});








	(chassis->getModel())->stop();


	/**/
	//pros::delay(100);

	/*chassis->turnToAngle(-90_deg, 1_s);
	pros::delay(100);
/*
	chassis->settings.kP = 3.8;
	chassis->getModel()->arcade(-1, 0);
	pros::delay(500);
	chassis->getModel()->arcade(1, 0);
	pros::delay(500);
	//chassis->driveDistance(-12_in, 1_s);

	(chassis->getModel())->stop();*/
	
	//(chassis->getModel())->stop();

    chassis->stopOdom();
	}

void redleft5Ring() {
    	
	chassis->startOdom({57.83, -39.97}, 90_deg);


	
	chassis->settings.reversed = true;
	chassis->followNewPath({{
			{57.83, -39.97},
			{35.43,-34.3},
			{20.69,-20.69}
			
	}});

	/*
	chassis->settings.reversed = true;
	chassis->followNewPath({{
			{ -58.39,37.7},
			{-41.67,41.1},
			{-22.39,20.41}
			
	}});*/
	pros::delay(100);
	
	clamp.toggle();
	pros::delay(500);	

	Tintake.setNormalizedVelocity(-12000);
	Bintake.setNormalizedVelocity(12000);

	chassis->settings.reversed = false;
	


	chassis->followNewPath({{
			{20.69,-20.69},
			//{5.67,-27.5},
			{23.81,-38.27},
			{6.52,-39.97},
			{6.52,-46.2},
			{6.52,-53.01},
			
	}});	

		chassis->settings.reversed = true;
		chassis->followNewPath({{
		{23.53,-47.62},
		{7.09,-28.06},
		{22.68,-23.24}
					
	}});	

		chassis->settings.reversed = false;
		chassis->followNewPath({{
		{22.68,-23.24},
		{22.39,-41.67}		
	}});		


	//chassis->turnToAngle(-45_deg, 1.0_s);

	/*
	(chassis->getModel())->arcade(-.50, 0);
	pros::delay(1080);
	(chassis->getModel())->arcade(0, 0);
	pros::delay(1000);
	clamp.toggle();
	pros::delay(500);
	chassis->turnToAngle(110_deg, 1.0_s);
	pros::delay(1000);
	Tintake.setNormalizedVelocity(-12000);
	Bintake.setNormalizedVelocity(12000);
	(chassis->getModel())->arcade(.5, 0);
	pros::delay(420);	
	(chassis->getModel())->arcade(0, 0);
	pros::delay(1000);
	(chassis->getModel())->arcade(-.5, 0);
	pros::delay(220);

	chassis->turnToAngle(94_deg, 1.0_s);
	pros::delay(1000);

	(chassis->getModel())->arcade(.5, 0);
	pros::delay(320);
	
	(chassis->getModel())->arcade(0, 0);
	pros::delay(1000);
	(chassis->getModel())->arcade(-1, 0);
	pros::delay(515);


	
	
	chassis->turnToAngle(64_deg, 500_ms);
	pros::delay(500);
	(chassis->getModel())->arcade(.50, 0);
	pros::delay(260);
	(chassis->getModel())->arcade(-1, 0);
	pros::delay(240);
	chassis->turnToAngle(332_deg, 1.0_s);
	pros::delay(500);
	
	(chassis->getModel())->arcade(1, 0);
	pros::delay(235);

	chassis->turnToAngle(70_deg, 1.0_s);
	pros::delay(530);

	(chassis->getModel())->arcade(1, 0);
	pros::delay(490);

	(chassis->getModel())->arcade(-1, 0);
	pros::delay(50);


	chassis->turnToAngle(270_deg, 1.0_s);
	pros::delay(530);

	Pintake.toggle();
	deflecter.toggle();
	

	(chassis->getModel())->arcade(.5, 0);
	pros::delay(1850);
	Pintake.toggle();
	Parm.toggle();

	(chassis->getModel())->arcade(0, 0);
	pros::delay(200);

	(chassis->getModel())->arcade(-.25, 0);
	pros::delay(350);

	
	chassis->turnToAngle(290_deg, 1.0_s);
	pros::delay(500);
	
	(chassis->getModel())->arcade(-1, 0);
	pros::delay(120);
	
	flap.toggle();
	chassis->turnToAngle(-310_deg, 1.0_s);
	pros::delay(500);



	chassis->turnToAngle(335_deg, 1.0_s);
	pros::delay(500);
	flap.toggle();


	(chassis->getModel())->arcade(1, 0);
	pros::delay(100);
	
	chassis->turnToAngle(348_deg, 1.0_s);
	pros::delay(500);



	lift.setNormalizedVelocity(12000);
	Tintake.setNormalizedVelocity(12000);
	pros::delay(2000);
	(chassis->getModel())->arcade(.25, 0);
	pros::delay(900);
	Bintake.setNormalizedVelocity(12000);

	(chassis->getModel())->arcade(-.5, 0);
	pros::delay(80);
	(chassis->getModel())->arcade(0, 0);
	pros::delay(2000);
	lift.setNormalizedVelocity(-500);
	Tintake.setNormalizedVelocity(-500);
	Bintake.setNormalizedVelocity(0);
	pros::delay(4000);

	(chassis->getModel())->arcade(-.5, 0);
	pros::delay(100);
	chassis->turnToAngle(170_deg, 1.0_s);
	pros::delay(500);
	(chassis->getModel())->arcade(1, 0);
	pros::delay(300);
	*/

	/*
	chassis->turnToAngle(130_deg, 1.0_s);
	pros::delay(1000);*/

	/*(chassis->getModel())->arcade(-0.5, 0);
	pros::delay(200);
	(chassis->getModel())->arcade(0, 0);
	primary.rollerFlip();
	(chassis->getModel())->arcade(0.25, 0);
	pros::delay(150);
	(chassis->getModel())->stop();
	primary.setNormalizedVelocity(1);
	
	chassis->settings.kV = 3.8;
	chassis->followNewPath({{
		{-38.27, -67.32},
        {-43.94, -52.3}
	}});
	fw.moveVelocity({2800, 0.9});

	chassis->settings.reversed = true;
	chassis->followNewPath({{
		{-44.79, -51.45},
        {-29.48, -45.21}
	}});

	chassis->turnToAngle(-18_deg, 1.5_s);
	pros::delay(1500);
	primary.staggeredIndex(3, 500_ms);
	pros::delay(100);
	fw.moveVelocity(2600, 0.8);

	chassis->getModel()->arcade(-0.5, 0);
	pros::delay(150);
	chassis->getModel()->stop();

	chassis->turnToAngle(45_deg, 750_ms);

	chassis->settings.reversed = false;
	chassis->settings.useRateLimiter = false;
	chassis->settings.maxAcceleration = 400;
	chassis->followNewPath({{
		{-29.48, -45.21},
        {-21.54, -43.23},
        {-15.59, -38.98}
	}});

	primary.setNormalizedVelocity(1);

	chassis->settings.useRateLimiter = true;
	chassis->settings.maxAcceleration = 200;
	chassis->settings.maxVelocity = 40;
	chassis->followNewPath({{
		{-16.44, -42.66},
        {-11.06, -33.59},
        {-6.52, -19.7}
	}});

	chassis->turnToAngle(-44_deg, 1_s);
	primary.staggeredIndex(3, 500_ms);

    fw.moveVelocity(0);*/
	(chassis->getModel())->stop();
    chassis->stopOdom();
}


void blueleft3Ring() {

	chassis->startOdom({-36.875, -58.375}, 0_deg);
	
	
	(chassis->getModel())->arcade(-.50, 0);
	pros::delay(1100);
	(chassis->getModel())->arcade(0, 0);
	pros::delay(1000);
	clamp.toggle();
	pros::delay(500);
	Tintake.setNormalizedVelocity(-12000);
	Bintake.setNormalizedVelocity(12000);
	pros::delay(2000);
	clamp.toggle();
	(chassis->getModel())->arcade(1, 0);
	pros::delay(100);
	
	chassis->turnToAngle(66_deg, 1.0_s);
	pros::delay(1000);
	

	(chassis->getModel())->arcade(1, 0);
	pros::delay(440);
	(chassis->getModel())->arcade(0, 0);
	pros::delay(300);
	Tintake.setNormalizedVelocity(0);
	Bintake.setNormalizedVelocity(0);
	/*(chassis->getModel())->arcade(0, 0);
	pros::delay(1000);*/
	//pros::delay(1000);
	
	(chassis->getModel())->arcade(-1, 0);
	pros::delay(560);
	chassis->turnToAngle(300_deg, 1.0_s);
	pros::delay(1000);	

	(chassis->getModel())->arcade(-.50, 0);
	pros::delay(720);
	
	(chassis->getModel())->arcade(0, 0);
	pros::delay(1000);
	clamp.toggle();
	pros::delay(500);
	Tintake.setNormalizedVelocity(-12000);
	Bintake.setNormalizedVelocity(12000);
	/*chassis->turnToAngle(330_deg, 1.0_s);
	pros::delay(2000);
/
	(chassis->getModel())->arcade(1, 0);
	pros::delay(260);*/

	chassis->turnToAngle(285_deg, 1.0_s);
	pros::delay(1000);
	Pintake.toggle();
	
	(chassis->getModel())->arcade(.5, 0);
	pros::delay(1900);

	
	(chassis->getModel())->arcade(-1, 0);
	pros::delay(250);


	
	Pintake.toggle();
	(chassis->getModel())->arcade(0, 0);
	pros::delay(1000);

	
	chassis->turnToAngle(156_deg, 1.0_s);
	pros::delay(1000);
	(chassis->getModel())->arcade(1, 0);
	pros::delay(200);
	Tintake.setNormalizedVelocity(0);
	Bintake.setNormalizedVelocity(0);
	
	(chassis->getModel())->stop();
    chassis->stopOdom();
}

   /*/ chassis->startOdom({-36.875, -58.375}, 0_deg);

	(chassis->getModel())->arcade(-0.5, 0);
	pros::delay(200);
	(chassis->getModel())->arcade(0, 0);
	primary.rollerFlip();
	(chassis->getModel())->arcade(0.25, 0);
	pros::delay(150);
	(chassis->getModel())->stop();
	primary.setNormalizedVelocity(1);
	
	chassis->settings.kV = 3.8;
	chassis->followNewPath({{
		{-38.27, -67.32},
        {-43.94, -52.3}
	}});
	fw.moveVelocity({2700, 0.7});

	chassis->settings.reversed = true;
	chassis->followNewPath({{
		{-44.79, -51.45},
        {-29.48, -45.21}
	}});

	chassis->turnToAngle(-18_deg, 1.5_s);
	(chassis->getModel())->arcade(0.25, 0);
	pros::delay(600);
	chassis->getModel()->stop();
	pros::delay(2400);
	primary.staggeredIndex(3, 1000_ms);
	fw.moveVelocity(0);

    chassis->stopOdom();*/



void redright3Ring() {
	
	chassis->startOdom({-36.875, -58.375}, 0_deg);
	
	
	
	
	(chassis->getModel())->arcade(-.50, 0);
	pros::delay(1100);
	(chassis->getModel())->arcade(0, 0);
	pros::delay(1000);
	clamp.toggle();
	pros::delay(500);
	Tintake.setNormalizedVelocity(-12000);
	Bintake.setNormalizedVelocity(12000);
	pros::delay(2000);
	clamp.toggle();
	(chassis->getModel())->arcade(1, 0);
	pros::delay(100);
	
	chassis->turnToAngle(-66_deg, 1.0_s);
	pros::delay(1000);
	

	(chassis->getModel())->arcade(1, 0);
	pros::delay(440);
	(chassis->getModel())->arcade(0, 0);
	pros::delay(300);
	Tintake.setNormalizedVelocity(0);
	Bintake.setNormalizedVelocity(0);
	/*(chassis->getModel())->arcade(0, 0);
	pros::delay(1000);*/
	//pros::delay(1000);
	
	(chassis->getModel())->arcade(-1, 0);
	pros::delay(560);
	chassis->turnToAngle(-300_deg, 1.0_s);
	pros::delay(1000);	

	(chassis->getModel())->arcade(-.50, 0);
	pros::delay(720);
	
	(chassis->getModel())->arcade(0, 0);
	pros::delay(1000);
	clamp.toggle();
	pros::delay(500);
	Tintake.setNormalizedVelocity(-12000);
	Bintake.setNormalizedVelocity(12000);
	/*chassis->turnToAngle(330_deg, 1.0_s);
	pros::delay(2000);
/
	(chassis->getModel())->arcade(1, 0);
	pros::delay(260);*/

	chassis->turnToAngle(-285_deg, 1.0_s);
	pros::delay(1000);
	Pintake.toggle();
	
	(chassis->getModel())->arcade(.5, 0);
	pros::delay(1850);

	
	(chassis->getModel())->arcade(-1, 0);
	pros::delay(250);


	
	Pintake.toggle();
	(chassis->getModel())->arcade(0, 0);
	pros::delay(1000);

	
	chassis->turnToAngle(-156_deg, 1.0_s);
	pros::delay(1000);
	(chassis->getModel())->arcade(1, 0);
	pros::delay(200);
	Tintake.setNormalizedVelocity(0);
	Bintake.setNormalizedVelocity(0);
	
	(chassis->getModel())->stop();
    chassis->stopOdom();
	
	/*
	(chassis->getModel())->arcade(-.50, 0);
	pros::delay(1100);
	(chassis->getModel())->arcade(0, 0);
	pros::delay(1000);
	clamp.toggle();
	pros::delay(500);
	Tintake.setNormalizedVelocity(-12000);
	Bintake.setNormalizedVelocity(12000);
	pros::delay(2000);
	clamp.toggle();
	(chassis->getModel())->arcade(1, 0);
	pros::delay(100);
	
	chassis->turnToAngle(-66_deg, 1.0_s);
	pros::delay(1000);
	

	(chassis->getModel())->arcade(1, 0);
	pros::delay(440);
	(chassis->getModel())->arcade(0, 0);
	pros::delay(300);
	Tintake.setNormalizedVelocity(0);
	Bintake.setNormalizedVelocity(0);
	/*(chassis->getModel())->arcade(0, 0);
	pros::delay(1000);*/
	//pros::delay(1000);
	
	/*	
	(chassis->getModel())->arcade(-1, 0);
	pros::delay(560);
	chassis->turnToAngle(-300_deg, 1.0_s);
	pros::delay(1000);	

	(chassis->getModel())->arcade(-.50, 0);
	pros::delay(710);
	
	(chassis->getModel())->arcade(0, 0);
	pros::delay(1000);
	clamp.toggle();
	pros::delay(500);
	Tintake.setNormalizedVelocity(-12000);
	Bintake.setNormalizedVelocity(12000);
	/*chassis->turnToAngle(330_deg, 1.0_s);
	pros::delay(2000);
/
	(chassis->getModel())->arcade(1, 0);
	pros::delay(260);*/

	/*
	chassis->turnToAngle(-285_deg, 1.0_s);
	pros::delay(1000);
	Pintake.toggle();
	
	(chassis->getModel())->arcade(.5, 0);
	pros::delay(1900);

	
	(chassis->getModel())->arcade(-1, 0);
	pros::delay(200);


	
	Pintake.toggle();
	(chassis->getModel())->arcade(0, 0);
	pros::delay(1000);

	
	chassis->turnToAngle(-156_deg, 1.0_s);
	pros::delay(1000);

	(chassis->getModel())->arcade(1, 0);
	pros::delay(220);

	
	(chassis->getModel())->stop();
    chassis->stopOdom();*/
	
    /*(chassis->getModel())->arcade(-0.5, 0);
	pros::delay(200);
	(chassis->getModel())->arcade(0, 0);
	primary.rollerFlip2();*/
}



void blueright6Ring() {
    /*chassis->startOdom({55.9375, 6.25}, -90_deg);
	chassis->turnToAngle(-180_deg, 1_s);
	pros::delay(100);

	chassis->settings.reversed = true;
	chassis->followNewPath({{
		{55.94, 6.25},
        {54.99, 35.57}
	}});
	pros::delay(100);

	chassis->turnToAngle(-90_deg, 1_s);
	pros::delay(100);

	chassis->getModel()->arcade(-0.5, 0);
	pros::delay(200);
	chassis->getModel()->stop();
	primary.rollerFlip();
	(chassis->getModel())->stop();

    chassis->stopOdom();*/
}

void redleft6Ring(){

	 /*chassis->startOdom({-36.875, -58.375}, 0_deg);



	chassis->getModel()->stop();
	chassis->stopOdom();*/
}


void fullWP() {
    /*chassis->startOdom({-36.875, -58.375}, 0_deg);
	fw.moveVelocity(2600, 0.82);

	(chassis->getModel())->arcade(-0.5, 0);
	pros::delay(100);
	(chassis->getModel())->arcade(0, 0);
	primary.rollerFlip2();
	chassis->getModel()->stop();

	chassis->settings.maxAcceleration = 300;
	chassis->settings.lookaheadDistance = 15;
	chassis->settings.kV = 3.5;
	chassis->followNewPath({{
		{-41.67, -65.91},
        {-33.73, -46.91},
        {-18.71, -41.53}
	}});

	primary.setNormalizedVelocity(1);

	chassis->settings.maxAcceleration = 200;
	chassis->settings.maxVelocity = 50;
	chassis->settings.k = 5.0;
	chassis->settings.lookaheadDistance = 10;
	chassis->followNewPath({{
		{-17.29, -36.71},
        {4.25, -49.46},
        {9.92, -38.41},
        {-4.25, -18.57}
	}});

	chassis->turnToAngle(-46_deg, 500_ms);
	primary.staggeredIndex(3, 300_ms);

	fw.moveVelocity(2800, 0.87);
	chassis->turnToAngle(70_deg, 400_ms);
	primary.setNormalizedVelocity(1);

	chassis->settings.k = 4.0;
	chassis->settings.maxVelocity = 200;
	chassis->settings.maxAcceleration = 150;
	chassis->settings.lookaheadDistance = 15;
	chassis->followNewPath({{
		{-4.25, -18.57},
        {8.79, -6.09},
        {31.75, 6.94},
        {33.45, 16.87}
	}});

	chassis->turnToAngle(-76_deg, 750_ms);
	primary.staggeredIndex(3, 300_ms);
	fw.moveVelocity(0);

	chassis->turnToAngle(-135_deg, 200_ms);
	chassis->settings.reversed = true;
	chassis->settings.k = 7.0;
	chassis->settings.lookaheadDistance = 10;
	chassis->settings.maxAcceleration = 250;
	chassis->followNewPath({{
		{33.45, 16.87},
        {43.65, 27.64},
        {47.91, 32.74}
	}});
	chassis->turnToAngle(-90_deg, 400_ms);
	chassis->getModel()->arcade(-0.8, 0);
	pros::delay(200);
	chassis->getModel()->stop();
	primary.rollerFlip2();

    chassis->stopOdom();*/
}