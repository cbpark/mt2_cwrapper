/*
 *  Copyright (c) 2014-2015, 2017 Chan Beom Park <cbpark@gmail.com>
 *
 *  This file is part of mt2-cwrapper, which is released under the GNU General
 *  Public License. See file LICENSE in the top directory of this project or
 *  go to <http://www.gnu.org/licenses/> for full license details.
 */

#ifndef SRC_LESTER_MT2_BISECT_C_H_
#define SRC_LESTER_MT2_BISECT_C_H_

#ifdef __cplusplus
extern "C" {
#endif

double asymm_mt2_lester_bisect(double m_vis1, double px_vis1, double py_vis1,
                               double m_vis2, double px_vis2, double py_vis2,
                               double px_miss, double py_miss, double m_invis1,
                               double m_invis2);

    typedef struct Solutions {
        double qx;
        double qy;
    } Solutions;

    Solutions sols(double MT2, double px, double py, double visM, double Ma, double pxb, double pyb, double metx, double mety, double visMb, double Mb);
#ifdef __cplusplus
}
#endif

#endif  // SRC_LESTER_MT2_BISECT_C_H_
