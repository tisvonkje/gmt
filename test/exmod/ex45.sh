#!/usr/bin/env bash
#               GMT EXAMPLE 45
#
# Purpose:      Illustrate use of trend1d mixed models
# GMT modules:  text, plot, trend1d
# Unix progs:   rm
#

gmt begin ex45 ps
  gmt set FONT_HEADING 24p PS_MEDIA letter
  gmt subplot begin 4x1 -Fs6i/1.9i -R1958/2016/310/410 -Bxaf -Byaf+u" ppm" -BWSne+gazure1 -T"The Keeling Curve [CO@-2@- at Mauna Loa]"

    # Basic LS line y = a + bx
    gmt subplot set 3
    gmt trend1d -Fxm @MaunaLoa_CO2.txt -Np1 > model.txt
    gmt plot -Sc0.05c -Gred @MaunaLoa_CO2.txt
    gmt plot -W0.5p,blue model.txt
    gmt text -F+f12p+cTL+t"m@-2@-(t) = a + b\264t" -Dj0.1i -Glightyellow

    # Basic LS line y = a + bx + cx^2
    gmt subplot set 2
    gmt trend1d -Fxm @MaunaLoa_CO2.txt -Np2 > model.txt
    gmt plot -Sc0.05c -Gred @MaunaLoa_CO2.txt
    gmt plot -W0.5p,blue model.txt
    gmt text -F+f12p+cTL+t"m@-3@-(t) = a + b\264t + c\264t@+2@+" -Dj0.1i -Glightyellow

    # Basic LS line y = a + bx + cx^2 + seasonal change
    gmt subplot set 1
    gmt trend1d -Fxmr @MaunaLoa_CO2.txt -Np2,f1+o1958+l1 > model.txt
    gmt plot -Sc0.05c -Gred @MaunaLoa_CO2.txt
    gmt plot -W0.25p,blue model.txt
    gmt text -F+f12p+cTL+t"m@-5@-(t) = a + b\264t + c\264t@+2@+ + d\264cos(2@~p@~t) + e\264sin(2@~p@~t)" -Dj0.1i -Glightyellow

    # Plot residuals of last model
    gmt subplot set 0
    gmt plot -R1958/2016/-4/4 -Byafg10+u" ppm" -Sc0.05c -Gred model.txt -i0,2
    gmt text -F+f12p+cTL+t"@~e@~(t) = y(t) - m@-5@-(t)" -Dj0.1i -Glightyellow

  gmt subplot end
  rm -f model.txt
gmt end
