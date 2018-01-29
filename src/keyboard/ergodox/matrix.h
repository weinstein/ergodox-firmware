/* ----------------------------------------------------------------------------
 * ergoDOX : matrix specific exports
 * ----------------------------------------------------------------------------
 * Copyright (c) 2012 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (MIT) (see "license.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */


#ifndef KEYBOARD__ERGODOX__MATRIX_h
	#define KEYBOARD__ERGODOX__MATRIX_h

	// --------------------------------------------------------------------

	#define KB_ROWS      6  // must match real life
	#define KB_COLUMNS  14  // must match real life

	// --------------------------------------------------------------------

	/* mapping from spatial position to matrix position
	 * - spatial position: where the key is spatially, relative to other
	 *   keys both on the keyboard and in the layout
	 * - matrix position: the coordinate in the matrix to which a key is
	 *   scanned by the update functions
	 *
	 * - location numbers are in the format `row##column`, where both 'row'
	 *   and 'column' are single digit hex numbers corresponding to the
	 *   matrix position (which also corresponds to the row and column pin
	 *   labels used in the teensy and mcp23018 files)
	 *
	 * - coordinates
	 *   - optional keys
	 *     k15, k16 (left hand thumb group)
	 *     k17, k18 (right hand thumb group)
	 *   - unused keys
	 *     k36, k00 (left hand)
	 *     k37, k0D (right hand)
	 *
	 * --- other info -----------------------------------------------------
	 *           rows x columns = positions;  used,  unused
	 * per hand:    6 x  7      = 42;         40,    2
	 *    total:    6 x 14      = 84;         80,    4
	 *
	 * left hand  : rows 0..5, cols 0..6
	 * right hand : rows 0..5, cols 7..D
	 * --------------------------------------------------------------------
	 */
	#define KB_MATRIX_LAYER(					\
			/* for unused positions */			\
			na,						\
									\
			/* left hand, spatial positions */		\
			k00,k01,k02,k03,k04,k05,			\
			k10,k11,k12,k13,k14,k15,			\
			k20,k21,k22,k23,k24,k25,			\
			k30,k31,k32,k33,k34,k35,			\
			k40,k41,k42,k43,k44,				\
			                        k55,k54,		\
			                            k53,		\
                          k50,k51,         \
					                        k52,		\
									                        \
			/* right hand, spatial positions */		\
			    k0D,k0C,k0B,k0A,k09,k08,		\
			    k1D,k1C,k1B,k1A,k19,k18,		\
			    k2D,k2C,k2B,k2A,k29,k28,		\
			    k3D,k3C,k3B,k3A,k39,k38,		\
			        k4C,k4B,k4A,k49,k48,		\
			k5C,k5D,					              \
			k5B,  					                \
			    k59,k58,					          \
			k5A                   )					\
									                    \
	/* matrix positions */						  \
	{{ k00,k01,k02,k03,k04,k05, na, na,k08,k09,k0A,k0B,k0C,k0D },	\
	 { k10,k11,k12,k13,k14,k15, na, na,k18,k19,k1A,k1B,k1C,k1D },	\
	 { k20,k21,k22,k23,k24,k25, na, na,k28,k29,k2A,k2B,k2C,k2D },	\
	 { k30,k31,k32,k33,k34,k35, na, na,k38,k39,k3A,k3B,k3C,k3D },	\
	 { k40,k41,k42,k43,k44, na, na, na,k48,k49,k4A,k4B,k4C, na },	\
	 { k50,k51,k52,k53,k54,k55, na, na,k58,k59,k5A,k5B,k5C,k5D }}


	#define KB_MATRIX_LAYER_SET_ALL(na, kxx)		\
		LAYER(						\
			na,					\
								\
			/* left hand, spatial positions */		\
			kxx,kxx,kxx,kxx,kxx,kxx,			\
			kxx,kxx,kxx,kxx,kxx,kxx,			\
			kxx,kxx,kxx,kxx,kxx,kxx,			\
			kxx,kxx,kxx,kxx,kxx,kxx,			\
			kxx,kxx,kxx,kxx,kxx,				\
			                        kxx,kxx,		\
			                            kxx,		\
                          kxx,kxx,         \
					                        kxx,		\
									                        \
			/* right hand, spatial positions */		\
			    kxx,kxx,kxx,kxx,kxx,kxx,		\
			    kxx,kxx,kxx,kxx,kxx,kxx,		\
			    kxx,kxx,kxx,kxx,kxx,kxx,		\
			    kxx,kxx,kxx,kxx,kxx,kxx,		\
			        kxx,kxx,kxx,kxx,kxx,		\
			kxx,kxx,					              \
			kxx,  					                \
			    kxx,kxx,					          \
			kxx                   )					\

#endif

