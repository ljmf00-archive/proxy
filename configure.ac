# -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT(proxy, 0.1.0, lsferreira169@gmail.com)
AM_INIT_AUTOMAKE([-Wall -Werror foreign subdir-objects])
AC_CONFIG_SRCDIR([config.h.in])
AC_CONFIG_HEADERS([config.h])

AC_PROG_CXX
AC_PROG_CPP
AC_PROG_CC
AC_PROG_LIBTOOL
AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_MAKE_SET
AC_PROG_RANLIB
AM_PROG_AR

AC_PATH_X

AC_CHECK_HEADER_STDBOOL
AC_CHECK_FUNCS([sysinfo])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT