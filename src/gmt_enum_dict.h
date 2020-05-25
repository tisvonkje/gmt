/*--------------------------------------------------------------------
 *
 *      Copyright (c) 1991-2020 by the GMT Team (https://www.generic-mapping-tools.org/team.html)
 *      See LICENSE.TXT file for copying and redistribution conditions.
 *
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU Lesser General Public License as published by
 *      the Free Software Foundation; version 3 or any later version.
 *
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU Lesser General Public License for more details.
 *
 *      Contact info: www.generic-mapping-tools.org
 *--------------------------------------------------------------------*/

/*
 * Include file for getting GMT API enum codes programmatically via GMT_Get_Enum ()
 * Rerun gmt_make_enum_dicts.sh after adding or changing enums.
 *
 * Author:      Paul Wessel
 * Version:     6 API
 */

struct GMT_API_DICT {
	char name[32];
	int value;
};

#define GMT_N_API_ENUMS 240

static struct GMT_API_DICT gmt_api_enums[GMT_N_API_ENUMS] = {
	{"GMT_ADD_DEFAULT", 6},
	{"GMT_ADD_EXISTING", 16},
	{"GMT_ADD_FILES_ALWAYS", 2},
	{"GMT_ADD_FILES_IF_NONE", 1},
	{"GMT_ADD_STDIO_ALWAYS", 8},
	{"GMT_ADD_STDIO_IF_NONE", 4},
	{"GMT_ALLOC_EXTERNALLY", 0},
	{"GMT_ALLOC_HORIZONTAL", 8},
	{"GMT_ALLOC_INTERNALLY", 1},
	{"GMT_ALLOC_NORMAL", 0},
	{"GMT_ALLOC_VERTICAL", 4},
	{"GMT_BGD", 0},
	{"GMT_CHAR", 0},
	{"GMT_CMYK", 1},
	{"GMT_COL", 3},
	{"GMT_COLORINT", 4},
	{"GMT_COL_ADD", 1},
	{"GMT_COL_FIX", 0},
	{"GMT_COL_FIX_NO_TEXT", 4},
	{"GMT_COL_SUB", 2},
	{"GMT_COL_VAR", 3},
	{"GMT_COMMENT_IS_COLNAMES", 128},
	{"GMT_COMMENT_IS_COMMAND", 2},
	{"GMT_COMMENT_IS_MULTISEG", 512},
	{"GMT_COMMENT_IS_NAME_X", 16},
	{"GMT_COMMENT_IS_NAME_Y", 32},
	{"GMT_COMMENT_IS_NAME_Z", 64},
	{"GMT_COMMENT_IS_REMARK", 4},
	{"GMT_COMMENT_IS_RESET", 256},
	{"GMT_COMMENT_IS_TEXT", 0},
	{"GMT_COMMENT_IS_TITLE", 8},
	{"GMT_CONTAINER_AND_DATA", 0},
	{"GMT_CONTAINER_ONLY", 1},
	{"GMT_CPT_COLORLIST", 32},
	{"GMT_CPT_EXTEND_BNF", 2},
	{"GMT_CPT_HARD_HINGE", 4},
	{"GMT_CPT_HINGED", 4},
	{"GMT_CPT_NO_BNF", 1},
	{"GMT_CPT_OPTIONAL", 1},
	{"GMT_CPT_REQUIRED", 0},
	{"GMT_CPT_SOFT_HINGE", 8},
	{"GMT_CPT_TIME", 16},
	{"GMT_DATA_ONLY", 2},
	{"GMT_DATETIME", 11},
	{"GMT_DOUBLE", 9},
	{"GMT_DUPLICATE_RESET", 4},
	{"GMT_ERR", 2},
	{"GMT_FFT_COMPLEX", 1},
	{"GMT_FFT_FWD", 0},
	{"GMT_FFT_INV", 1},
	{"GMT_FFT_REAL", 0},
	{"GMT_FGD", 1},
	{"GMT_FILE_CHECK", 2},
	{"GMT_FILE_LOCAL", 0},
	{"GMT_FILE_REMOTE", 1},
	{"GMT_FLOAT", 8},
	{"GMT_GRID_COMMAND_LEN320", 320},
	{"GMT_GRID_DEFAULT_REG", 1024},
	{"GMT_GRID_HEADER_SIZE", 892},
	{"GMT_GRID_IS_CARTESIAN", 0},
	{"GMT_GRID_IS_COMPLEX_IMAG", 8},
	{"GMT_GRID_IS_COMPLEX_MASK", 12},
	{"GMT_GRID_IS_COMPLEX_REAL", 4},
	{"GMT_GRID_IS_GEO", 256},
	{"GMT_GRID_IS_IMAGE", 512},
	{"GMT_GRID_IS_REAL", 0},
	{"GMT_GRID_NAME_LEN256", 256},
	{"GMT_GRID_NODE_REG", 0},
	{"GMT_GRID_NO_HEADER", 16},
	{"GMT_GRID_PIXEL_REG", 1},
	{"GMT_GRID_REMARK_LEN160", 160},
	{"GMT_GRID_ROW_BY_ROW", 32},
	{"GMT_GRID_ROW_BY_ROW_MANUAL", 64},
	{"GMT_GRID_TITLE_LEN80", 80},
	{"GMT_GRID_UNIT_LEN80", 80},
	{"GMT_GRID_VARNAME_LEN80", 80},
	{"GMT_GRID_XY", 128},
	{"GMT_HEADER_OFF", 0},
	{"GMT_HEADER_ON", 1},
	{"GMT_HSV", 2},
	{"GMT_IN", 0},
	{"GMT_INT", 4},
	{"GMT_IO", 2},
	{"GMT_IO_ANY_HEADER", 3},
	{"GMT_IO_ASCII", 512},
	{"GMT_IO_DATA_RECORD", 0},
	{"GMT_IO_DONE", 0},
	{"GMT_IO_EOF", 8},
	{"GMT_IO_GAP", 32},
	{"GMT_IO_LINE_BREAK", 58},
	{"GMT_IO_MISMATCH", 4},
	{"GMT_IO_NAN", 16},
	{"GMT_IO_NEW_SEGMENT", 18},
	{"GMT_IO_NEXT_FILE", 64},
	{"GMT_IO_RESET", 32768},
	{"GMT_IO_SEGMENT_HEADER", 2},
	{"GMT_IO_TABLE_HEADER", 1},
	{"GMT_IO_UNREG", 16384},
	{"GMT_IS_COL_FORMAT", 2},
	{"GMT_IS_COORD", 7},
	{"GMT_IS_DATASET", 0},
	{"GMT_IS_DUPLICATE", 3},
	{"GMT_IS_FDESC", 2},
	{"GMT_IS_FILE", 0},
	{"GMT_IS_GRID", 1},
	{"GMT_IS_HOLE", 1},
	{"GMT_IS_LINE", 2},
	{"GMT_IS_LP", 6},
	{"GMT_IS_MATRIX", 5},
	{"GMT_IS_NONE", 16},
	{"GMT_IS_OUTPUT", 1024},
	{"GMT_IS_PALETTE", 3},
	{"GMT_IS_PERIMETER", 0},
	{"GMT_IS_PLP", 7},
	{"GMT_IS_POINT", 1},
	{"GMT_IS_POLY", 4},
	{"GMT_IS_REFERENCE", 4},
	{"GMT_IS_ROW_FORMAT", 1},
	{"GMT_IS_STREAM", 1},
	{"GMT_IS_SURFACE", 8},
	{"GMT_IS_TEXT", 32},
	{"GMT_IS_VECTOR", 6},
	{"GMT_LAX_CONVERSION", 2048},
	{"GMT_LOG_OFF", 0},
	{"GMT_LOG_ONCE", 1},
	{"GMT_LOG_SET", 2},
	{"GMT_LONG", 6},
	{"GMT_MODULE_CLASSIC", -5},
	{"GMT_MODULE_CMD", 0},
	{"GMT_MODULE_EXIST", -3},
	{"GMT_MODULE_GROUP", 1},
	{"GMT_MODULE_HELP", 0},
	{"GMT_MODULE_KEYS", 0},
	{"GMT_MODULE_LIST", -4},
	{"GMT_MODULE_PURPOSE", -2},
	{"GMT_MODULE_SHOW_CLASSIC", 2},
	{"GMT_MODULE_SHOW_MODERN", 1},
	{"GMT_MODULE_SYNOPSIS", -6},
	{"GMT_MODULE_USAGE", -7},
	{"GMT_MSG_COMPAT", 6},
	{"GMT_MSG_DEBUG", 7},
	{"GMT_MSG_ERROR", 2},
	{"GMT_MSG_INFORMATION", 5},
	{"GMT_MSG_LONG_VERBOSE", 6},
	{"GMT_MSG_NORMAL", 2},
	{"GMT_MSG_NOTICE", 1},
	{"GMT_MSG_QUIET", 0},
	{"GMT_MSG_TICTOC", 4},
	{"GMT_MSG_VERBOSE", 5},
	{"GMT_MSG_WARNING", 3},
	{"GMT_NAN", 2},
	{"GMT_NOERROR", 0},
	{"GMT_NOTSET", -1},
	{"GMT_NO_COLORNAMES", 8},
	{"GMT_NO_STRINGS", 0},
	{"GMT_N_FAMILIES", 8},
	{"GMT_N_TYPES", 12},
	{"GMT_OPT_INFILE", 60},
	{"GMT_OPT_OUTFILE", 62},
	{"GMT_OPT_PARAMETER", 45},
	{"GMT_OPT_SYNOPSIS", 94},
	{"GMT_OPT_USAGE", 63},
	{"GMT_OUT", 1},
	{"GMT_PAD_DEFAULT", 2},
	{"GMT_PS_COMPLETE", 3},
	{"GMT_PS_EMPTY", 0},
	{"GMT_PS_HEADER", 1},
	{"GMT_PS_TRAILER", 2},
	{"GMT_READ_DATA", 1},
	{"GMT_READ_FILEBREAK", 4},
	{"GMT_READ_MIXED", 3},
	{"GMT_READ_NORMAL", 0},
	{"GMT_READ_TEXT", 2},
	{"GMT_RGB", 0},
	{"GMT_ROW", 2},
	{"GMT_SEG", 1},
	{"GMT_SESSION_BEGIN", 32},
	{"GMT_SESSION_CLEAR", 128},
	{"GMT_SESSION_COLMAJOR", 4},
	{"GMT_SESSION_END", 64},
	{"GMT_SESSION_EXTERNAL", 2},
	{"GMT_SESSION_FIGURE", 256},
	{"GMT_SESSION_LOGERRORS", 8},
	{"GMT_SESSION_NOEXIT", 1},
	{"GMT_SESSION_NORMAL", 0},
	{"GMT_SESSION_RUNMODE", 16},
	{"GMT_SHORT", 2},
	{"GMT_STRICT_CONVERSION", 1024},
	{"GMT_SYNOPSIS", 1},
	{"GMT_TBL", 0},
	{"GMT_TEXT", 10},
	{"GMT_TIME_CLOCK", 1},
	{"GMT_TIME_ELAPSED", 2},
	{"GMT_TIME_NONE", 0},
	{"GMT_TIME_RESET", 4},
	{"GMT_UCHAR", 1},
	{"GMT_UINT", 5},
	{"GMT_ULONG", 7},
	{"GMT_USAGE", 0},
	{"GMT_USHORT", 3},
	{"GMT_VF_LEN", 32},
	{"GMT_VIA_CHAR", 100},
	{"GMT_VIA_DOUBLE", 1000},
	{"GMT_VIA_FLOAT", 900},
	{"GMT_VIA_INT", 500},
	{"GMT_VIA_LONG", 700},
	{"GMT_VIA_MATRIX", 256},
	{"GMT_VIA_MODULE_INPUT", 64},
	{"GMT_VIA_NONE", 0},
	{"GMT_VIA_SHORT", 300},
	{"GMT_VIA_UCHAR", 200},
	{"GMT_VIA_UINT", 600},
	{"GMT_VIA_ULONG", 800},
	{"GMT_VIA_USHORT", 400},
	{"GMT_VIA_VECTOR", 128},
	{"GMT_WITH_STRINGS", 32},
	{"GMT_WRITE_DATA", 1},
	{"GMT_WRITE_HEADER", 1},
	{"GMT_WRITE_MIXED", 3},
	{"GMT_WRITE_NOLF", 32},
	{"GMT_WRITE_NORMAL", 0},
	{"GMT_WRITE_OGR", 1},
	{"GMT_WRITE_SEGMENT", 3},
	{"GMT_WRITE_SEGMENT_HEADER", 8},
	{"GMT_WRITE_SET", 0},
	{"GMT_WRITE_SKIP", 2},
	{"GMT_WRITE_TABLE", 2},
	{"GMT_WRITE_TABLE_HEADER", 4},
	{"GMT_WRITE_TABLE_SEGMENT", 4},
	{"GMT_WRITE_TABLE_START", 16},
	{"GMT_WRITE_TEXT", 2},
	{"GMT_X", 0},
	{"GMT_XHI", 1},
	{"GMT_XLO", 0},
	{"GMT_Y", 1},
	{"GMT_YHI", 3},
	{"GMT_YLO", 2},
	{"GMT_Z", 2},
	{"GMT_ZHI", 5},
	{"GMT_ZLO", 4},
};
