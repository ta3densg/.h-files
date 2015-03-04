#include<chantier.h>
Chantier::Chantier()
{
  SurfVect=new vector();

}

Chantier::Chantier()// constructeur par défaut
{

}
Chantier::Chantier(vector<Surface> dSurfVect, vector<PointTerrain> dTopoVect)// constructeur par défaut
{
    Chantier.surfVect=dSurfVect;
    Chantier.topoVect=dTopoVect;
}
Chantier::~Chantier()
{

}
void Chantier::setSurfVect(vector<Surface> newSurfVect)
{
    surfVect=newSurfVect;
}


vector Chantier::getSurfVect()
{
  return  surfVect;
}


void Chantier::setTopoVect(vector<PointTerrain> newTopoVect)
{
    topoVect=newTopoVect;
}


vector Chantier::getTopoVect()
{
  return  topoVect;
};
