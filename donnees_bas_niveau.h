#ifndef DONNÉES_BAS_NIVEAU_H
#define DONNÉES_BAS_NIVEAU_H

#endif // DONNÉES_BAS_NIVEAU_H
using namespace::std;
#include<string>;
#include<geometry.h>
#include<donnees_haut_niveau.h>
class PointTerrain
{
private:
    string nom;
    int code_activite;
    float position[3];
    float ecarts_type[3];
};

class PointPhoto
{
private:
  float posX;
  float posY;
  float posZ;
  int id_surface;
};

class PointPly
{
private:
  float posX;
  float posY;
  float posZ;
  int id_surface;
  int id_nuage;

};
class Mesure
{
private:
    int posX;
    int posY;
    PointPhoto pointPhoto;
    Photo photo;
};
