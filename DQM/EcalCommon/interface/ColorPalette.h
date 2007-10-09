// $Id: ColorPalette.h,v 1.2 2007/10/09 05:49:05 dellaric Exp $

/*!
  \file ColorPalette.h
  \brief Color palette for quality plots
  \author B. Gobbo 
  \version $Revision: 1.2 $
  \date $Date: 2007/10/09 05:49:05 $
*/

#ifndef ColorPalette_H
#define ColorPalette_H

namespace ecdqm {
  namespace {
    float rgb[6][3] = {{1.00, 0.00, 0.00}, {0.00, 1.00, 0.00}, {1.00, 0.96, 0.00},
                       {0.50, 0.00, 0.00}, {0.00, 0.40, 0.00}, {0.94, 0.78, 0.00}};

    float rgb2[10][3] = {{ 0.0000, 0.6510, 1.0000}, { 0.0000, 0.6135, 0.9455}, 
                         { 0.0000, 0.5760, 0.8911}, { 0.0000, 0.5386, 0.8366}, 
                         { 0.0000, 0.5011, 0.7821}, { 0.0000, 0.4636, 0.7277}, 
                         { 0.0000, 0.4261, 0.6732}, { 0.0000, 0.3887, 0.6187}, 
                         { 0.0000, 0.3512, 0.5643}, { 0.0000, 0.3137, 0.5098}};

/*
                        {{ 0.0000, 0.6118, 0.9216}, { 0.0000, 0.5743, 0.8654}, 
                         { 0.0000, 0.5368, 0.8092}, { 0.0000, 0.4993, 0.7529}, 
                         { 0.0000, 0.4619, 0.6967}, { 0.0000, 0.4244, 0.6405}, 
                         { 0.0000, 0.3869, 0.5843}, { 0.0000, 0.3495, 0.5281}, 
                         { 0.0000, 0.3120, 0.4719}, { 0.0000, 0.2745, 0.4157}};
*/

/*
                       {{ 0.0000, 0.5765, 0.8667}, { 0.0000, 0.5390, 0.8105}, 
                         { 0.0000, 0.5015, 0.7542}, { 0.0000, 0.4641, 0.6980}, 
                         { 0.0000, 0.4266, 0.6418}, { 0.0000, 0.3891, 0.5856}, 
                         { 0.0000, 0.3516, 0.5294}, { 0.0000, 0.3142, 0.4732}, 
                         { 0.0000, 0.2767, 0.4170}, { 0.0000, 0.2392, 0.3608}};
*/
  }
}

#endif // ColorPalette_H
