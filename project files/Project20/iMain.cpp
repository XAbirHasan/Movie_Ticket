# include "igraphics.h"


int mposx,  mposy;

void homePage();
void exit_menu();
void thank_you();
void booking();
void now_showing();
void upcoming();

void check_button_position(int mx, int my, int isClick);
void back_check();

int option;
int red = 255, green = 255, blue = 255;
double m_button_dx, m_button_dy;

int booking_option;
double b_button_dx, b_button_dy, button_width, button_height;
int isClick;

char name[30], date[20];
char movie_name[24][30] = { "3  Iditos", "BARFI", "RAABTA", "RUSTOM", "Dilwale  Daulhania  Lejayenge", "KITES", "SANAM  RE", "SECRET  SUPERSTAR", "Iron  Man3", "AVENGERS - Infinity War", "TITANIC", "SPIDER-MAN  ( home coming )", "LOGAN", "LUCY", "WONDER  WOMAN", "THE  WOLVERINE", "BOSS  BABY", "BIG HERO-6", "INSIDE  OUT", "THE  CROODS", "BRAVE", "FROZEN", "Mr. PRABODY  &  SHERMAN", "THE  GOOD  DINOSAUR" };
int index_n, index_d, index_movie;
int input;
double text1_dx, text1_dy, text2_dx, text2_dy;


char thank[111][20] = { "thanks\\1.bmp", "thanks\\2.bmp", "thanks\\3.bmp", "thanks\\4.bmp", "thanks\\5.bmp", "thanks\\6.bmp", "thanks\\7.bmp", "thanks\\8.bmp", "thanks\\9.bmp", "thanks\\10.bmp", "thanks\\11.bmp", "thanks\\12.bmp", "thanks\\13.bmp", "thanks\\14.bmp", "thanks\\15.bmp", "thanks\\16.bmp", "thanks\\17.bmp", "thanks\\18.bmp", "thanks\\19.bmp", "thanks\\20.bmp", "thanks\\21.bmp", "thanks\\22.bmp", "thanks\\23.bmp", "thanks\\24.bmp", "thanks\\25.bmp", "thanks\\26.bmp", "thanks\\27.bmp", "thanks\\28.bmp", "thanks\\29.bmp", "thanks\\30.bmp", "thanks\\31.bmp", "thanks\\32.bmp", "thanks\\33.bmp", "thanks\\34.bmp", "thanks\\35.bmp", "thanks\\36.bmp", "thanks\\37.bmp", "thanks\\38.bmp", "thanks\\39.bmp", "thanks\\40.bmp", "thanks\\41.bmp", "thanks\\42.bmp", "thanks\\43.bmp", "thanks\\44.bmp", "thanks\\45.bmp", "thanks\\46.bmp", "thanks\\47.bmp", "thanks\\48.bmp", "thanks\\49.bmp", "thanks\\50.bmp", "thanks\\51.bmp", "thanks\\52.bmp", "thanks\\53.bmp", "thanks\\54.bmp", "thanks\\55.bmp", "thanks\\56.bmp", "thanks\\57.bmp", "thanks\\58.bmp", "thanks\\59.bmp", "thanks\\60.bmp", "thanks\\61.bmp", "thanks\\62.bmp", "thanks\\63.bmp", "thanks\\64.bmp", "thanks\\65.bmp", "thanks\\66.bmp", "thanks\\67.bmp", "thanks\\68.bmp", "thanks\\69.bmp", "thanks\\70.bmp", "thanks\\71.bmp", "thanks\\72.bmp", "thanks\\73.bmp", "thanks\\74.bmp", "thanks\\75.bmp", "thanks\\76.bmp", "thanks\\77.bmp", "thanks\\78.bmp", "thanks\\79.bmp", "thanks\\80.bmp", "thanks\\81.bmp", "thanks\\82.bmp", "thanks\\83.bmp", "thanks\\84.bmp", "thanks\\85.bmp", "thanks\\86.bmp", "thanks\\87.bmp", "thanks\\88.bmp", "thanks\\89.bmp", "thanks\\90.bmp", "thanks\\91.bmp", "thanks\\92.bmp", "thanks\\93.bmp", "thanks\\94.bmp", "thanks\\95.bmp", "thanks\\96.bmp", "thanks\\97.bmp", "thanks\\98.bmp", "thanks\\99.bmp", "thanks\\100.bmp", "thanks\\101.bmp", "thanks\\102.bmp", "thanks\\103.bmp", "thanks\\104.bmp", "thanks\\105.bmp", "thanks\\106.bmp", "thanks\\107.bmp", "thanks\\108.bmp", "thanks\\109.bmp", "thanks\\110.bmp", "thanks\\111.bmp" };

int indxT;



void iDraw()
{
	iClear();
	if (option == 0)
	{
		homePage();
	}
	if (option == 1)
	{
		booking();
	}
	if (option == 2)
	{
		now_showing();
	}
	if (option == 3)
	{
		upcoming();
	}
	if (option == 4)
	{
		exit_menu();
	}
}

void homePage()
{
	iShowBMP(0, 0, "home\\homePage.bmp");
	iShowBMP2(0, 0, "home\\menuf.bmp", 0);


	iSetColor(red, green, blue);
	iRectangle(m_button_dx, m_button_dy, 413, 64);
	iRectangle(m_button_dx - 0.5, m_button_dy - 0.5, 414, 65);
	iRectangle(m_button_dx - 1, m_button_dy - 1, 415, 66);
	iRectangle(m_button_dx - 1.5, m_button_dy - 1.5, 416, 68);
	iRectangle(m_button_dx - 2, m_button_dy - 2, 418, 69);
	
	
}
void booking()
{
	if (booking_option == 0)
	{
		iShowBMP(0, 0, "booking\\booking menu.bmp");

		iSetColor(red, green, blue);
		iRectangle(b_button_dx, b_button_dy, button_width, button_height);
		iRectangle(b_button_dx - 0.5, b_button_dy - 0.5, button_width + 1, button_height + 1);
		iRectangle(b_button_dx - 1, b_button_dy - 1, button_width + 2, button_height + 2);
		iRectangle(b_button_dx - 1.5, b_button_dy - 1.5, button_width + 3, button_height + 3);
		iRectangle(b_button_dx - 2, b_button_dy - 2, button_width + 4, button_height + 4);
	}
	else if (booking_option == 1)
	{
		iShowBMP(0, 0, "booking\\hindi movie.bmp");
		iShowBMP2(0, 0, "booking\\select.bmp", 0);

		iSetColor(red, green, blue);
		iRectangle(b_button_dx, b_button_dy, button_width, button_height);
		iRectangle(b_button_dx - 0.5, b_button_dy - 0.5, button_width + 1, button_height + 1);
		iRectangle(b_button_dx - 1, b_button_dy - 1, button_width + 2, button_height + 2);
		iRectangle(b_button_dx - 1.5, b_button_dy - 1.5, button_width + 3, button_height + 3);
		iRectangle(b_button_dx - 2, b_button_dy - 2, button_width + 4, button_height + 4);
	}
	else if (booking_option == 2)
	{
		iShowBMP(0, 0, "booking\\english movie.bmp");
		iShowBMP2(0, 0, "booking\\select.bmp", 0);

		iSetColor(red, green, blue);
		iRectangle(b_button_dx, b_button_dy, button_width, button_height);
		iRectangle(b_button_dx - 0.5, b_button_dy - 0.5, button_width + 1, button_height + 1);
		iRectangle(b_button_dx - 1, b_button_dy - 1, button_width + 2, button_height + 2);
		iRectangle(b_button_dx - 1.5, b_button_dy - 1.5, button_width + 3, button_height + 3);
		iRectangle(b_button_dx - 2, b_button_dy - 2, button_width + 4, button_height + 4);
	}
	else if (booking_option == 3)
	{
		iShowBMP(0, 0, "booking\\animation movie.bmp");
		iShowBMP2(0, 0, "booking\\select.bmp", 0);

		iSetColor(red, green, blue);
		iRectangle(b_button_dx, b_button_dy, button_width, button_height);
		iRectangle(b_button_dx - 0.5, b_button_dy - 0.5, button_width + 1, button_height + 1);
		iRectangle(b_button_dx - 1, b_button_dy - 1, button_width + 2, button_height + 2);
		iRectangle(b_button_dx - 1.5, b_button_dy - 1.5, button_width + 3, button_height + 3);
		iRectangle(b_button_dx - 2, b_button_dy - 2, button_width + 4, button_height + 4);
	}
	else if (booking_option == 4)
	{
		iShowBMP(0, 0, "booking\\form.bmp");

		iSetColor(red, green, blue);
		iRectangle(b_button_dx, b_button_dy, button_width, button_height);
		iRectangle(b_button_dx - 0.5, b_button_dy - 0.5, button_width + 1, button_height + 1);
		iRectangle(b_button_dx - 1, b_button_dy - 1, button_width + 2, button_height + 2);
		iRectangle(b_button_dx - 1.5, b_button_dy - 1.5, button_width + 3, button_height + 3);
		iRectangle(b_button_dx - 2, b_button_dy - 2, button_width + 4, button_height + 4);

		iSetColor(0, 0, 0);

		iText(text1_dx, text1_dy, name, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(text2_dx, text2_dy, date, GLUT_BITMAP_TIMES_ROMAN_24);
	}
	else if (booking_option == 5)
	{
		iShowBMP(0, 0, "booking\\ticket.bmp");

		iSetColor(red, green, blue);
		iRectangle(b_button_dx, b_button_dy, button_width, button_height);
		iRectangle(b_button_dx - 0.5, b_button_dy - 0.5, button_width + 1, button_height + 1);
		iRectangle(b_button_dx - 1, b_button_dy - 1, button_width + 2, button_height + 2);
		iRectangle(b_button_dx - 1.5, b_button_dy - 1.5, button_width + 3, button_height + 3);
		iRectangle(b_button_dx - 2, b_button_dy - 2, button_width + 4, button_height + 4);

		iSetColor(0, 0, 0);
		iText(618, 340, movie_name[index_movie], GLUT_BITMAP_TIMES_ROMAN_24);
		iText(618, 264, name, GLUT_BITMAP_TIMES_ROMAN_24);
		iText(618, 186, date, GLUT_BITMAP_TIMES_ROMAN_24);
	}
}

void now_showing()
{
	iShowBMP(0, 0, "others\\now showing.bmp");

	iSetColor(red, green, blue);
	iRectangle(b_button_dx, b_button_dy, button_width, button_height);
	iRectangle(b_button_dx - 0.5, b_button_dy - 0.5, button_width + 1, button_height + 1);
	iRectangle(b_button_dx - 1, b_button_dy - 1, button_width + 2, button_height + 2);
	iRectangle(b_button_dx - 1.5, b_button_dy - 1.5, button_width + 3, button_height + 3);
	iRectangle(b_button_dx - 2, b_button_dy - 2, button_width + 4, button_height + 4);
}

void upcoming()
{
	iShowBMP(0, 0, "others\\upcoming.bmp");

	iSetColor(red, green, blue);
	iRectangle(b_button_dx, b_button_dy, button_width, button_height);
	iRectangle(b_button_dx - 0.5, b_button_dy - 0.5, button_width + 1, button_height + 1);
	iRectangle(b_button_dx - 1, b_button_dy - 1, button_width + 2, button_height + 2);
	iRectangle(b_button_dx - 1.5, b_button_dy - 1.5, button_width + 3, button_height + 3);
	iRectangle(b_button_dx - 2, b_button_dy - 2, button_width + 4, button_height + 4);
}

void exit_menu()
{
	iShowBMP(0, 0, "thanks\\thank.bmp");
	iShowBMP(133, 0, thank[indxT]);
}


void iMouseMove(int mx, int my)
{

}

void iMouse(int button, int state, int mx, int my)
{
	if (state == GLUT_UP)
	{
		isClick = 0;
	}
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (option == 0 && mx > 642 && mx < 1045)
		{
			if (my>379 && my < 432)
			{
				option = 1;
				red = 0;
				green = 0;
				blue = 255;
				button_width = 252;
				button_height = 98;
			}
			if (my>296 && my < 349)
			{
				option = 2;
			}
			if (my>216 && my < 268)
			{
				option = 3;
			}
			if (my>133 && my < 186)
			{
				option = 4;
			}
		}
		else if(option == 1)
		{
			isClick = 1;
			check_button_position(mx, my, isClick);
		}
		else if (option == 2)
		{
			isClick = 1;
			check_button_position(mx, my, isClick);
		}
		else if (option == 3)
		{
			isClick = 1;
			check_button_position(mx, my, isClick);
		}
		else if (booking_option == 1 || booking_option == 2 || booking_option == 3)
		{
			isClick = 1;
			check_button_position(mx, my, isClick);
		}
	}
	//printf("mx = %d\tmy = %d\tclick = %d\n", mx, my,isClick);

}

void iPassiveMouseMove(int mx,int my)
{
    mposx = mx;
    mposy = my;
	if (option == 0 && mx > 642 && mx < 1045)             // for home keymovement..............
	{
		if (my>379 && my < 432)
		{
			red = 70;
			green = 242;
			blue = 202;
			m_button_dy = 372;
		}
		else if (my>296 && my < 349)
		{
			red = 70;
			green = 242;
			blue = 202;
			m_button_dy = 290;
		}
		else if (my>216 && my < 268)
		{
			red = 70;
			green = 242;
			blue = 202;
			m_button_dy = 208;
		}
		else if (my>133 && my < 186)
		{
			red = 70;
			green = 242;
			blue = 202;
			m_button_dy = 126;
		}
		else
		{
			red = 255;
			green = 255;
			blue = 255;
		}
	}
	else if (option == 0 && (mx < 642 || mx > 1045))
	{
		red = 255;
		green = 255;
		blue = 255;
	}

	else if (option == 1 || option == 2 || option == 3)
	{
		isClick = 0;
		check_button_position(mx, my, isClick);
	}
	else if (booking_option == 1 || booking_option == 2 || booking_option == 3 || booking_option == 4 || booking_option == 5)
	{
		isClick = 0;
		check_button_position(mx, my, isClick);
	}
	//printf("%d\t%d\n", mx, my);
}

void check_button_position(int mx, int my, int isClick)
{
	if (booking_option == 0 && option == 1)
	{
		if (my > 340 && my < 438)
		{
			if (mx>166 && mx < 418)
			{
				red = 255;
				green = 13;
				blue = 0;
				b_button_dx = 166;
				b_button_dy = 340;

				button_width = 252;
				button_height = 98;

				if (isClick == 1)
				{
					booking_option = 1;
				}
			}
			else if (mx > 474 && mx < 726)
			{
				red = 255;
				green = 13;
				blue = 0;
				b_button_dx = 474;
				b_button_dy = 340;

				button_width = 252;
				button_height = 98;

				if (isClick == 1)
				{
					booking_option = 2;
				}
			}
			else if (mx > 782 && mx < 1034)
			{
				red = 255;
				green = 13;
				blue = 0;
				b_button_dx = 782;
				b_button_dy = 340;

				button_width = 252;
				button_height = 98;

				if (isClick == 1)
				{
					booking_option = 3;
				}
			}
			else
			{
				red = 0;
				green = 0;
				blue = 255;
			}

		}
		else
		{
			red = 0;
			green = 0;
			blue = 255;
		}
	}


	else if ((booking_option == 1 || booking_option == 2 || booking_option == 3) && option == 1)  // booking option...........
	{
		if (my > 356 && my < 610)
		{
			if (mx > 71 && mx < 308)
			{
				red = 255;
				green = 13;
				blue = 0;
				b_button_dx = 71;
				b_button_dy = 356;

				button_width = 237;
				button_height = 254;

				if (isClick == 1)
				{
					if (booking_option == 1)
					{
						index_movie = 0;
					}
					else if (booking_option == 2)
					{
						index_movie = 8;
					}
					else if (booking_option == 3)
					{
						index_movie = 16;
					}
					booking_option = 4;
				}
			}
			else if (mx > 344 && mx < 582)
			{
				red = 255;
				green = 13;
				blue = 0;
				b_button_dx = 344;
				b_button_dy = 356;

				button_width = 237;
				button_height = 254;

				if (isClick == 1)
				{
					if (booking_option == 1)
					{
						index_movie = 1;
					}
					else if (booking_option == 2)
					{
						index_movie = 9;
					}
					else if (booking_option == 3)
					{
						index_movie = 17;
					}

					booking_option = 4;
				}
			}
			else if (mx > 617 && mx < 852)
			{
				red = 255;
				green = 13;
				blue = 0;
				b_button_dx = 617;
				b_button_dy = 356;

				button_width = 237;
				button_height = 254;

				if (isClick == 1)
				{
					if (booking_option == 1)
					{
						index_movie = 2;
					}
					else if (booking_option == 2)
					{
						index_movie = 10;
					}
					else if (booking_option == 3)
					{
						index_movie = 18;
					}

					booking_option = 4;
				}
			}
			else if (mx > 888 && mx < 1125)
			{
				red = 255;
				green = 13;
				blue = 0;
				b_button_dx = 888;
				b_button_dy = 356;

				button_width = 237;
				button_height = 254;

				if (isClick == 1)
				{
					if (booking_option == 1)
					{
						index_movie = 3;
					}
					else if (booking_option == 2)
					{
						index_movie = 11;
					}
					else if (booking_option == 3)
					{
						index_movie = 19;
					}
					booking_option = 4;
				}
			}
			else
			{
				red = 0;
				green = 0;
				blue = 255;

			}
		}
		else if (my > 70 && my<325)
		{
			if (mx > 71 && mx < 308)
			{
				red = 255;
				green = 13;
				blue = 0;
				b_button_dx = 71;
				b_button_dy = 70;

				button_width = 237;
				button_height = 254;

				if (isClick == 1)
				{
					if (booking_option == 1)
					{
						index_movie = 4;
					}
					else if (booking_option == 2)
					{
						index_movie = 12;
					}
					else if (booking_option == 3)
					{
						index_movie = 20;
					}
					booking_option = 4;
				}
			}
			else if (mx > 344 && mx < 582)
			{
				red = 255;
				green = 13;
				blue = 0;
				b_button_dx = 344;
				b_button_dy = 70;

				button_width = 237;
				button_height = 254;

				if (isClick == 1)
				{
					if (booking_option == 1)
					{
						index_movie = 5;
					}
					else if (booking_option == 2)
					{
						index_movie = 13;
					}
					else if (booking_option == 3)
					{
						index_movie = 21;
					}
					booking_option = 4;
				}
			}
			else if (mx > 617 && mx < 852)
			{
				red = 255;
				green = 13;
				blue = 0;
				b_button_dx = 617;
				b_button_dy = 70;

				button_width = 237;
				button_height = 254;

				if (isClick == 1)
				{
					if (booking_option == 1)
					{
						index_movie = 6;
					}
					else if (booking_option == 2)
					{
						index_movie = 14;
					}
					else if (booking_option == 3)
					{
						index_movie = 22;
					}
					booking_option = 4;
				}
			}
			else if (mx > 888 && mx < 1125)
			{
				red = 255;
				green = 13;
				blue = 0;
				b_button_dx = 888;
				b_button_dy = 70;

				button_width = 237;
				button_height = 254;

				if (isClick == 1)
				{
					if (booking_option == 1)
					{
						index_movie = 7;
					}
					else if (booking_option == 2)
					{
						index_movie = 15;
					}
					else if (booking_option == 3)
					{
						index_movie = 23;
					}
					booking_option = 4;
				}
			}
			else
			{
				red = 0;
				green = 0;
				blue = 255;
			}
		}
		else
		{
			red = 0;
			green = 0;
			blue = 255;
		}
	}

	else if (booking_option == 4)
	{
		if (mx>680 && mx<1007)
		{
			if (my>313 && my < 402)
			{

				if (isClick == 1)
				{
					input = 0;
				}
			}
			else if (my>219 && my < 308)
			{
				if (isClick == 1)
				{
					input = 1;
				}
			}
		}
		if (input == 0)
		{
			red = 255;
			green = 13;
			blue = 0;
			b_button_dx = 620;
			b_button_dy = 311;
			button_height = 0;
			button_width = 380;
		}
		else if (input == 1)
		{
			red = 255;
			green = 13;
			blue = 0;
			b_button_dx = 620;
			b_button_dy = 216;
			button_height = 0;
			button_width = 380;
		}
		if (mx > 688 && mx<926)
		{
			if (my>134 && my<180)
			{
				red = 255;
				green = 13;
				blue = 0;
				b_button_dx = 688;
				b_button_dy = 134;
				button_height = 46;
				button_width = 238;
				if (isClick == 1)
				{
					b_button_dx = 1046;
					b_button_dy = 33;

					button_width = 87;
					button_height = 46;

					booking_option = 5;
				}
			}
		}
	}
	else if (booking_option == 5)
	{
		if (mx > 1046 && mx <1131)
		{
			if (my>33 && my<79)
			{
				red = 255;
				green = 13;
				blue = 0;
				b_button_dx = 1046;
				b_button_dy = 33;

				button_width = 87;
				button_height = 46;

				if (isClick == 1)
				{
					booking_option = 6;
					option = 4;
				}
			}
			else
			{
				red = 255;
				green = 255;
				blue = 255;
			}
		}
		else
		{
			red = 255;
			green = 255;
			blue = 255;
		}

	}
	
	if ((my > 10 && my < 56 ) && booking_option !=5 )
	{
		if (mx > 991 && mx < 1078)                //back....
		{
			red = 255;
			green = 13;
			blue = 0;
			b_button_dx = 991;
			b_button_dy = 10;

			button_width = 87;
			button_height = 46;

			if (isClick == 1)
			{
				back_check();
			}
			
		}
		else if (mx > 1096 && mx < 1183)                 // home........
		{
			red = 255;
			green = 13;
			blue = 0;
			b_button_dx = 1096;
			b_button_dy = 10;

			button_width = 87;
			button_height = 46;

			if (isClick == 1)
			{
				option = 0;
				booking_option = 0;

				m_button_dx = 638;
				m_button_dy = 372;
				b_button_dx = 991;
				b_button_dy = 10;
			}
		}
		else
		{
			red = 0;
			green = 0;
			blue = 255;
		}
	}
	
}

void back_check()
{
	if (option == 1)
	{
		if (booking_option == 0)
		{ 
			option = 0;
		}
		else if (booking_option == 1)
		{
			option = 1;
			booking_option = 0;
		}
		else if (booking_option == 2)
		{
			option = 1;
			booking_option = 0;
		}
		else if (booking_option == 3)
		{
			option = 1;
			booking_option = 0;
		}
		else if (booking_option == 4)
		{
			option = 1;
			booking_option = 0;
			index_d = 0;
			index_n = 0;
			name[index_n] = '\0';
			date[index_d] = '\0';
		}
		
	}
	else if (option == 2)
	{
		option = 0;
	}
	else if (option == 3)
	{
		option = 0;
	}
}

void iKeyboard(unsigned char key)
{
	if (booking_option == 4)
	{

		if (input == 0)
		{
			text1_dx = 720;
			text1_dy = 322;
			if (key != '\b')
			{
				if (index_n <=28)
				{
					if (key != 13)
					{

						name[index_n] = key;
						index_n++;
						name[index_n] = '\0';
					}
				    else 
					{
						name[index_n] = '\0';
					}
				}
			}
			else
			{
				if (index_n <= 0)
				{
					index_n = 0;
				}
				else
				{
					index_n--;
					name[index_n] = '\0';
				}
			}
		}
		else if (input == 1)
		{
			text2_dx = 785;
			text2_dy = 230;
			if (key != '\b')
			{
				if (index_d <= 18)
				{
					if (key != 13)
					{

						date[index_d] = key;
						index_d++;
						date[index_d] = '\0';
					}
					else
					{
						date[index_d] = '\0';
					}
				}
			}
			else
			{
				if (index_d <= 0)
				{
					index_d = 0;
				}
				else
				{
					index_d--;
					date[index_d] = '\0';
				}
			}
		}
	}
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/

void iSpecialKeyboard(unsigned char key)
{
	//place your codes for other keys here
}
void thank_you()
{
	if (option == 4)
	{
		indxT++;
		if (indxT >= 110)
		{
			indxT = 0;
		}
	}
}
//
int main()
{
	//place your own initialization codes here.
	iSetTimer(30, thank_you);

	m_button_dx = 638;
	m_button_dy = 372;
	b_button_dx = 166;
	b_button_dy = 340;

	iInitialize(1200, 680, "Movie ticket reservation");
	return 0;
}
