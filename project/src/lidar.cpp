#include "lidar.hpp"

using namespace std;

Lidar::Lidar()
{
}

void Lidar::start()
{
	moteur.start();
}

void Lidar::update()
{
	int step = encodeur.getStep();
	bool ccw = moteur.estTrigo();
	if((ccw && step > RANGE/2) || (!ccw && step < -RANGE/2))
	{
		moteur.inverse();
	}
}

void Lidar::stop()
{
	moteur.stop();
}

Donnee Lidar::getDonnee()
{
	Donnee d;
	d.distance = infra.getDistance();
	d.step = encodeur.getStep();
	d.angle = encodeur.getAngle();
	return d;
}
