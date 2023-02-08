#ifndef CORE_FXGE_FREETYPE_FX_FREETYPE_H_
#define CORE_FXGE_FREETYPE_FX_FREETYPE_H_

#include <ft2build.h>


#include FT_FREETYPE_H
#include FT_GLYPH_H
// #include FT_LCD_FILTER_H
// #include FT_MULTIPLE_MASTERS_H
// #include FT_OUTLINE_H
// #include FT_TRUETYPE_TABLES_H

int ft_unicode_from_adobe_name(const char* glyph_name);
void ft_adobe_name_from_unicode(char* name, unsigned int unicode);

#endif  // CORE_FXGE_FREETYPE_FX_FREETYPE_H_
