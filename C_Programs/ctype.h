

#define U      0x01    /* upper */
#define L      0x02    /* lower */
#define D      0x04    /* digit */
#define C      0x08    /* cntrl */
#define P      0x10    /* punct */
#define S      0x20    /* white space (space/lf/tab) */
#define X      0x40    /* hex digit */
#define SP     0x80    /* hard space (0x20) */

#define IsMask(x) (ctype[(int)(unsigned char)(x)])
#define IsLower(c)      ((IsMask(c)&(L)) != 0)
#define IsUpper(c)      ((IsMask(c)&(U)) != 0)

const unsigned char ctype[] = {
C,C,C,C,C,C,C,C,                                /* 0-7 */
C,C|S,C|S,C|S,C|S,C|S,C,C,    	                /* 8-15 */
C,C,C,C,C,C,C,C,                                /* 16-23 */
C,C,C,C,C,C,C,C,                                /* 24-31 */
S|SP,P,P,P,P,P,P,P,                             /* 32-39 */
P,P,P,P,P,P,P,P,                                /* 40-47 */
D,D,D,D,D,D,D,D,                                /* 48-55 */
D,D,P,P,P,P,P,P,                                /* 56-63 */
P,U|X,U|X,U|X,U|X,U|X,U|X,U,                    /* 64-71 */
U,U,U,U,U,U,U,U,                                /* 72-79 */
U,U,U,U,U,U,U,U,                                /* 80-87 */
U,U,U,P,P,P,P,P,                                /* 88-95 */
P,L|X,L|X,L|X,L|X,L|X,L|X,L,                    /* 96-103 */
L,L,L,L,L,L,L,L,                                /* 104-111 */
L,L,L,L,L,L,L,L,                                /* 112-119 */
L,L,L,P,P,P,P,C,                                /* 120-127 */
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,                /* 128-143 */
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,                /* 144-159 */
S|SP,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,    		/* 160-175 */
P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,P,        	/* 176-191 */
U,U,U,U,U,U,U,U,U,U,U,U,U,U,U,U,        	/* 192-207 */
U,U,U,U,U,U,U,P,U,U,U,U,U,U,U,L,        	/* 208-223 */
L,L,L,L,L,L,L,L,L,L,L,L,L,L,L,L,        	/* 224-239 */
L,L,L,L,L,L,L,P,L,L,L,L,L,L,L,L};       	/* 240-255 */

