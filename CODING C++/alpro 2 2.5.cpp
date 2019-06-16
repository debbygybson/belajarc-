#include<conio.h>
#include<iostream.h>

struct koordinat
        {int x; int y; };
void tukar_xy (struct koordinat *pos_xy);
main ()
{
    struct koordinat posisi = {21,34};
    clrscr ();
    cout << "x,y semula = " << posisi.x << "," << posisi.y;
    tukar_xy(&posisi);
    cout << "\n x,y kini = " << posisi.x << "," << posisi.y;
    getche ();
}
void tukar x,y (struct koordinat *pos_xy)
{
    int z;
    z=(*pos_xy).x;
    (*pos_xy).x=(*pos_xy).y;
    (*pos_xy).y=z;
}
