/*
 * Copyright (c) 2015, 2018, Oracle and/or its affiliates. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2.0, as
 * published by the Free Software Foundation.
 *
 * This program is also distributed with certain software (including
 * but not limited to OpenSSL) that is licensed under separate terms,
 * as designated in a particular file or component or in included license
 * documentation.  The authors of MySQL hereby grant you an
 * additional permission to link the program and your derivative works
 * with the separately licensed software that they have included with
 * MySQL.
 *
 * Without limiting anything contained in the foregoing, this file,
 * which is part of MySQL Connector/C++, is also subject to the
 * Universal FOSS Exception, version 1.0, a copy of which can be found at
 * http://oss.oracle.com/licenses/universal-foss-exception.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License, version 2.0, for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA
 */

#ifndef CDK_CONFIG_H
#define CDK_CONFIG_H


#define WITH_SSL
/* #undef WITH_SSL_WOLFSSL */
#define HAVE_MOVE_SEMANTICS
#define HAVE_STATIC_ASSERT
/* #undef HAVE_IS_SAME */
#define HAVE_SHARED_PTR
#define HAVE_SYSTEM_ERROR
#define HAVE_CODECVT_UTF8
/* #undef HAVE_ENDIAN_H */
/* #undef HAVE_BYTEORDER_H */
#define CDK_BIG_ENDIAN 0

#define HAVE_MOVE_CTORS
#if defined _MSC_VER && _MSC_VER < 1900
  #undef HAVE_MOVE_CTORS
#endif

#endif
