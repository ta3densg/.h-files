#ifndef DONNEES_HAUT_NIVEAU_H
#define DONNEES_HAUT_NIVEAU_H

#endif // DONNEES_HAUT_NIVEAU_H
using namespace::std;
#include<donnees_bas_niveau.h>
#include<vector>
#include<boost/multi_array.hpp>
class GeoRef
{
private:
   float posX;
   float posY;
   float posZ;
   boost::multi_array rot;
};

class Masque
{
// pour une nouvelle version
};

class Bande
{
private:
    int id;
    float recouvrement;
    vector<Photo> elts;
};


class NuagePoint
{
private:
    int id;
    GeoRef georef;
    vector<PointPly> compose;
public:
    void creation_manuelle();
    void segmentation_auto();
    void re_estimation();

};

class Photo
{
private:
    string chemin_etalonnage;
    string nom;
public:
    void ajout_masque();
    void saisir_point_appui();
};
