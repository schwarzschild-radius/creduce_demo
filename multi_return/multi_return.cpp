# 1 "<built-in>"
# 1 "multi-return.cpp"
/* ...
    --- CITE ---
      #Lapys:
        - Circle:                                             https://lapys.godbolt.org/z/e9vE1d5Gx
        - Clang, GNU, Intel, Microsoft Visual Studio, NVIDIA: https://lapys.godbolt.org/z/xdbcedfz8
*/
#if 0 /* expanded by -frewrite-includes */
#include <cstddef>
#endif /* expanded by -frewrite-includes */
# 7 "multi-return.cpp"
# 1 "C:/Msys2/mingw64/include/c++/11.2.0/cstddef" 1 3
// -*- C++ -*- forwarding header.

// Copyright (C) 1997-2021 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file cstddef
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c stddef.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */

//
// ISO C++ 14882: 18.1  Types
//

#ifndef _GLIBCXX_CSTDDEF
#define _GLIBCXX_CSTDDEF 1

#if 0 /* expanded by -frewrite-includes */
#pragma GCC system_header
#endif /* expanded by -frewrite-includes */
# 43 "C:/Msys2/mingw64/include/c++/11.2.0/cstddef" 3

#undef __need_wchar_t
#undef __need_ptrdiff_t
#undef __need_size_t
#undef __need_NULL
#undef __need_wint_t
#if 0 /* expanded by -frewrite-includes */
#include <bits/c++config.h>
#endif /* expanded by -frewrite-includes */
# 49 "C:/Msys2/mingw64/include/c++/11.2.0/cstddef" 3
# 1 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 1 3
// Predefined symbols and macros -*- C++ -*-

// Copyright (C) 1997-2021 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/c++config.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{version}
 */

#ifndef _GLIBCXX_CXX_CONFIG_H
#define _GLIBCXX_CXX_CONFIG_H 1

// The major release number for the GCC release the C++ library belongs to.
#define _GLIBCXX_RELEASE 11

// The datestamp of the C++ library in compressed ISO date format.
#define __GLIBCXX__ 20210728

// Macros for various attributes.
//   _GLIBCXX_PURE
//   _GLIBCXX_CONST
//   _GLIBCXX_NORETURN
//   _GLIBCXX_NOTHROW
//   _GLIBCXX_VISIBILITY
#ifndef _GLIBCXX_PURE
# define _GLIBCXX_PURE __attribute__ ((__pure__))
#endif
# 48 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#ifndef _GLIBCXX_CONST
# define _GLIBCXX_CONST __attribute__ ((__const__))
#endif
# 52 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#ifndef _GLIBCXX_NORETURN
# define _GLIBCXX_NORETURN __attribute__ ((__noreturn__))
#endif
# 56 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// See below for C++
#ifndef _GLIBCXX_NOTHROW
# ifndef __cplusplus
#  define _GLIBCXX_NOTHROW __attribute__((__nothrow__))
# endif
# 62 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#endif
# 63 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// Macros for visibility attributes.
//   _GLIBCXX_HAVE_ATTRIBUTE_VISIBILITY
//   _GLIBCXX_VISIBILITY
# define _GLIBCXX_HAVE_ATTRIBUTE_VISIBILITY 0

#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_HAVE_ATTRIBUTE_VISIBILITY
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 70 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_VISIBILITY(V) __attribute__ ((__visibility__ (#V)))
#else
# 72 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
// If this is not supplied by the OS-specific or CPU-specific
// headers included below, it will be defined to an empty default.
# define _GLIBCXX_VISIBILITY(V) _GLIBCXX_PSEUDO_VISIBILITY(V)
#endif
# 76 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// Macros for deprecated attributes.
//   _GLIBCXX_USE_DEPRECATED
//   _GLIBCXX_DEPRECATED
//   _GLIBCXX_DEPRECATED_SUGGEST( string-literal )
//   _GLIBCXX11_DEPRECATED
//   _GLIBCXX11_DEPRECATED_SUGGEST( string-literal )
//   _GLIBCXX17_DEPRECATED
//   _GLIBCXX17_DEPRECATED_SUGGEST( string-literal )
//   _GLIBCXX20_DEPRECATED( string-literal )
//   _GLIBCXX20_DEPRECATED_SUGGEST( string-literal )
#ifndef _GLIBCXX_USE_DEPRECATED
# define _GLIBCXX_USE_DEPRECATED 1
#endif
# 90 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__DEPRECATED)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 92 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_DEPRECATED __attribute__ ((__deprecated__))
# define _GLIBCXX_DEPRECATED_SUGGEST(ALT) \
  __attribute__ ((__deprecated__ ("use '" ALT "' instead")))
#else
# 96 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_DEPRECATED
# define _GLIBCXX_DEPRECATED_SUGGEST(ALT)
#endif
# 99 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__DEPRECATED) && (__cplusplus >= 201103L)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 101 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX11_DEPRECATED _GLIBCXX_DEPRECATED
# define _GLIBCXX11_DEPRECATED_SUGGEST(ALT) _GLIBCXX_DEPRECATED_SUGGEST(ALT)
#else
# 104 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX11_DEPRECATED
# define _GLIBCXX11_DEPRECATED_SUGGEST(ALT)
#endif
# 107 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__DEPRECATED) && (__cplusplus >= 201703L)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 109 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX17_DEPRECATED [[__deprecated__]]
# define _GLIBCXX17_DEPRECATED_SUGGEST(ALT) _GLIBCXX_DEPRECATED_SUGGEST(ALT)
#else
# 112 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX17_DEPRECATED
# define _GLIBCXX17_DEPRECATED_SUGGEST(ALT)
#endif
# 115 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__DEPRECATED) && (__cplusplus > 201703L)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 117 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX20_DEPRECATED(MSG) [[deprecated(MSG)]]
# define _GLIBCXX20_DEPRECATED_SUGGEST(ALT) _GLIBCXX_DEPRECATED_SUGGEST(ALT)
#else
# 120 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX20_DEPRECATED(MSG)
# define _GLIBCXX20_DEPRECATED_SUGGEST(ALT)
#endif
# 123 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// Macros for ABI tag attributes.
#ifndef _GLIBCXX_ABI_TAG_CXX11
# define _GLIBCXX_ABI_TAG_CXX11 __attribute ((__abi_tag__ ("cxx11")))
#endif
# 128 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// Macro to warn about unused results.
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201703L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 131 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_NODISCARD [[__nodiscard__]]
#else
# 133 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_NODISCARD
#endif
# 135 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3



#if 0 /* disabled by -frewrite-includes */
#if __cplusplus
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 139 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// Macro for constexpr, to support in mixed 03/0x mode.
#ifndef _GLIBCXX_CONSTEXPR
#if 0 /* disabled by -frewrite-includes */
# if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 143 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  define _GLIBCXX_CONSTEXPR constexpr
#  define _GLIBCXX_USE_CONSTEXPR constexpr
# else
# 146 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  define _GLIBCXX_CONSTEXPR
#  define _GLIBCXX_USE_CONSTEXPR const
# endif
# 149 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#endif
# 150 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#ifndef _GLIBCXX14_CONSTEXPR
#if 0 /* disabled by -frewrite-includes */
# if __cplusplus >= 201402L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 153 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  define _GLIBCXX14_CONSTEXPR constexpr
# else
# 155 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  define _GLIBCXX14_CONSTEXPR
# endif
# 157 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#endif
# 158 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#ifndef _GLIBCXX17_CONSTEXPR
#if 0 /* disabled by -frewrite-includes */
# if __cplusplus >= 201703L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 161 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  define _GLIBCXX17_CONSTEXPR constexpr
# else
# 163 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  define _GLIBCXX17_CONSTEXPR
# endif
# 165 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#endif
# 166 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#ifndef _GLIBCXX20_CONSTEXPR
#if 0 /* disabled by -frewrite-includes */
# if __cplusplus > 201703L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 169 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  define _GLIBCXX20_CONSTEXPR constexpr
# else
# 171 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  define _GLIBCXX20_CONSTEXPR
# endif
# 173 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#endif
# 174 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#ifndef _GLIBCXX17_INLINE
#if 0 /* disabled by -frewrite-includes */
# if __cplusplus >= 201703L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 177 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  define _GLIBCXX17_INLINE inline
# else
# 179 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  define _GLIBCXX17_INLINE
# endif
# 181 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#endif
# 182 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// Macro for noexcept, to support in mixed 03/0x mode.
#ifndef _GLIBCXX_NOEXCEPT
#if 0 /* disabled by -frewrite-includes */
# if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 186 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  define _GLIBCXX_NOEXCEPT noexcept
#  define _GLIBCXX_NOEXCEPT_IF(...) noexcept(__VA_ARGS__)
#  define _GLIBCXX_USE_NOEXCEPT noexcept
#  define _GLIBCXX_THROW(_EXC)
# else
# 191 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  define _GLIBCXX_NOEXCEPT
#  define _GLIBCXX_NOEXCEPT_IF(...)
#  define _GLIBCXX_USE_NOEXCEPT throw()
#  define _GLIBCXX_THROW(_EXC) throw(_EXC)
# endif
# 196 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#endif
# 197 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#ifndef _GLIBCXX_NOTHROW
# define _GLIBCXX_NOTHROW _GLIBCXX_USE_NOEXCEPT
#endif
# 201 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#ifndef _GLIBCXX_THROW_OR_ABORT
#if 0 /* disabled by -frewrite-includes */
# if __cpp_exceptions
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 204 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  define _GLIBCXX_THROW_OR_ABORT(_EXC) (throw (_EXC))
# else
# 206 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  define _GLIBCXX_THROW_OR_ABORT(_EXC) (__builtin_abort())
# endif
# 208 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#endif
# 209 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __cpp_noexcept_function_type
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 211 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#define _GLIBCXX_NOEXCEPT_PARM , bool _NE
#define _GLIBCXX_NOEXCEPT_QUAL noexcept (_NE)
#else
# 214 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#define _GLIBCXX_NOEXCEPT_PARM
#define _GLIBCXX_NOEXCEPT_QUAL
#endif
# 217 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// Macro for extern template, ie controlling template linkage via use
// of extern keyword on template declaration. As documented in the g++
// manual, it inhibits all implicit instantiations and is used
// throughout the library to avoid multiple weak definitions for
// required types that are already explicitly instantiated in the
// library binary. This substantially reduces the binary size of
// resulting executables.
// Special case: _GLIBCXX_EXTERN_TEMPLATE == -1 disallows extern
// templates only in basic_string, thus activating its debug-mode
// checks even at -O0.
# define _GLIBCXX_EXTERN_TEMPLATE 1

/*
  Outline of libstdc++ namespaces.

  namespace std
  {
    namespace __debug { }
    namespace __parallel { }
    namespace __cxx1998 { }

    namespace __detail {
      namespace __variant { }				// C++17
    }

    namespace rel_ops { }

    namespace tr1
    {
      namespace placeholders { }
      namespace regex_constants { }
      namespace __detail { }
    }

    namespace tr2 { }
    
    namespace decimal { }

    namespace chrono { }				// C++11
    namespace placeholders { }				// C++11
    namespace regex_constants { }			// C++11
    namespace this_thread { }				// C++11
    inline namespace literals {				// C++14
      inline namespace chrono_literals { }		// C++14
      inline namespace complex_literals { }		// C++14
      inline namespace string_literals { }		// C++14
      inline namespace string_view_literals { }		// C++17
    }
  }

  namespace abi { }

  namespace __gnu_cxx
  {
    namespace __detail { }
  }

  For full details see:
  http://gcc.gnu.org/onlinedocs/libstdc++/latest-doxygen/namespaces.html
*/
namespace std
{
  typedef __SIZE_TYPE__ 	size_t;
  typedef __PTRDIFF_TYPE__	ptrdiff_t;

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 284 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
  typedef decltype(nullptr)	nullptr_t;
#endif
# 286 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
}

# define _GLIBCXX_USE_DUAL_ABI 1

#if 0 /* disabled by -frewrite-includes */
#if ! _GLIBCXX_USE_DUAL_ABI
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 291 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
// Ignore any pre-defined value of _GLIBCXX_USE_CXX11_ABI
# undef _GLIBCXX_USE_CXX11_ABI
#endif
# 294 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#ifndef _GLIBCXX_USE_CXX11_ABI
# define _GLIBCXX_USE_CXX11_ABI 1
#endif
# 298 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_USE_CXX11_ABI
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 300 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
namespace std
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
namespace __gnu_cxx
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
# define _GLIBCXX_NAMESPACE_CXX11 __cxx11::
# define _GLIBCXX_BEGIN_NAMESPACE_CXX11 namespace __cxx11 {
# define _GLIBCXX_END_NAMESPACE_CXX11 }
# define _GLIBCXX_DEFAULT_ABI_TAG _GLIBCXX_ABI_TAG_CXX11
#else
# 313 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_NAMESPACE_CXX11
# define _GLIBCXX_BEGIN_NAMESPACE_CXX11
# define _GLIBCXX_END_NAMESPACE_CXX11
# define _GLIBCXX_DEFAULT_ABI_TAG
#endif
# 318 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// Defined if inline namespaces are used for versioning.
# define _GLIBCXX_INLINE_VERSION 0 

// Inline namespace for symbol versioning.
#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_INLINE_VERSION
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 324 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_BEGIN_NAMESPACE_VERSION namespace __8 {
# define _GLIBCXX_END_NAMESPACE_VERSION }

namespace std
{
inline _GLIBCXX_BEGIN_NAMESPACE_VERSION
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201402L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 331 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
  inline namespace literals {
    inline namespace chrono_literals { }
    inline namespace complex_literals { }
    inline namespace string_literals { }
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 201402L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 336 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
    inline namespace string_view_literals { }
#endif // C++17
# 338 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
  }
#endif // C++14
# 340 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
_GLIBCXX_END_NAMESPACE_VERSION
}

namespace __gnu_cxx
{
inline _GLIBCXX_BEGIN_NAMESPACE_VERSION
_GLIBCXX_END_NAMESPACE_VERSION
}

#else
# 350 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_BEGIN_NAMESPACE_VERSION
# define _GLIBCXX_END_NAMESPACE_VERSION
#endif
# 353 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// Inline namespaces for special modes: debug, parallel.
#if 0 /* disabled by -frewrite-includes */
#if defined(_GLIBCXX_DEBUG) || defined(_GLIBCXX_PARALLEL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 356 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
namespace std
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION

  // Non-inline namespace for components replaced by alternates in active mode.
  namespace __cxx1998
  {
#if 0 /* disabled by -frewrite-includes */
# if _GLIBCXX_USE_CXX11_ABI
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 364 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
# endif
# 366 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
  }

_GLIBCXX_END_NAMESPACE_VERSION

  // Inline namespace for debug mode.
# ifdef _GLIBCXX_DEBUG
  inline namespace __debug { }
# endif
# 374 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

  // Inline namespaces for parallel mode.
# ifdef _GLIBCXX_PARALLEL
  inline namespace __parallel { }
# endif
# 379 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
}

// Check for invalid usage and unsupported mixed-mode use.
#if 0 /* disabled by -frewrite-includes */
# if defined(_GLIBCXX_DEBUG) && defined(_GLIBCXX_PARALLEL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 383 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  error illegal use of multiple inlined namespaces
# endif
# 385 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// Check for invalid use due to lack for weak symbols.
#if 0 /* disabled by -frewrite-includes */
# if __NO_INLINE__ && !__GXX_WEAK__
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 388 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  warning currently using inlined namespace mode which may fail \
   without inlining due to lack of weak symbols
# endif
# 391 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#endif
# 392 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// Macros for namespace scope. Either namespace std:: or the name
// of some nested namespace within it corresponding to the active mode.
// _GLIBCXX_STD_A
// _GLIBCXX_STD_C
//
// Macros for opening/closing conditional namespaces.
// _GLIBCXX_BEGIN_NAMESPACE_ALGO
// _GLIBCXX_END_NAMESPACE_ALGO
// _GLIBCXX_BEGIN_NAMESPACE_CONTAINER
// _GLIBCXX_END_NAMESPACE_CONTAINER
#if 0 /* disabled by -frewrite-includes */
#if defined(_GLIBCXX_DEBUG)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 404 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_STD_C __cxx1998
# define _GLIBCXX_BEGIN_NAMESPACE_CONTAINER \
	 namespace _GLIBCXX_STD_C {
# define _GLIBCXX_END_NAMESPACE_CONTAINER }
#else
# 409 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_STD_C std
# define _GLIBCXX_BEGIN_NAMESPACE_CONTAINER
# define _GLIBCXX_END_NAMESPACE_CONTAINER
#endif
# 413 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#ifdef _GLIBCXX_PARALLEL
# define _GLIBCXX_STD_A __cxx1998
# define _GLIBCXX_BEGIN_NAMESPACE_ALGO \
	 namespace _GLIBCXX_STD_A {
# define _GLIBCXX_END_NAMESPACE_ALGO }
#else
# 420 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_STD_A std
# define _GLIBCXX_BEGIN_NAMESPACE_ALGO
# define _GLIBCXX_END_NAMESPACE_ALGO
#endif
# 424 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// GLIBCXX_ABI Deprecated
// Define if compatibility should be provided for -mlong-double-64.
#undef _GLIBCXX_LONG_DOUBLE_COMPAT

// Define if compatibility should be provided for alternative 128-bit long
// double formats. Not possible for Clang until __ibm128 is supported.
#ifndef __clang__
#undef _GLIBCXX_LONG_DOUBLE_ALT128_COMPAT
#endif
# 434 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// Inline namespaces for long double 128 modes.
#if 0 /* disabled by -frewrite-includes */
#if defined _GLIBCXX_LONG_DOUBLE_ALT128_COMPAT \
  && defined __LONG_DOUBLE_IEEE128__
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 438 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
namespace std
{
  // Namespaces for 128-bit IEEE long double format on 64-bit POWER LE.
  inline namespace __gnu_cxx_ieee128 { }
  inline namespace __gnu_cxx11_ieee128 { }
}
# define _GLIBCXX_NAMESPACE_LDBL __gnu_cxx_ieee128::
# define _GLIBCXX_BEGIN_NAMESPACE_LDBL namespace __gnu_cxx_ieee128 {
# define _GLIBCXX_END_NAMESPACE_LDBL }
# define _GLIBCXX_NAMESPACE_LDBL_OR_CXX11 __gnu_cxx11_ieee128::
# define _GLIBCXX_BEGIN_NAMESPACE_LDBL_OR_CXX11 namespace __gnu_cxx11_ieee128 {
# define _GLIBCXX_END_NAMESPACE_LDBL_OR_CXX11 }

#else // _GLIBCXX_LONG_DOUBLE_ALT128_COMPAT && IEEE128
# 452 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined _GLIBCXX_LONG_DOUBLE_COMPAT && defined __LONG_DOUBLE_128__
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 454 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
namespace std
{
  inline namespace __gnu_cxx_ldbl128 { }
}
# define _GLIBCXX_NAMESPACE_LDBL __gnu_cxx_ldbl128::
# define _GLIBCXX_BEGIN_NAMESPACE_LDBL namespace __gnu_cxx_ldbl128 {
# define _GLIBCXX_END_NAMESPACE_LDBL }
#else
# 462 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_NAMESPACE_LDBL
# define _GLIBCXX_BEGIN_NAMESPACE_LDBL
# define _GLIBCXX_END_NAMESPACE_LDBL
#endif
# 466 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_USE_CXX11_ABI
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 468 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_NAMESPACE_LDBL_OR_CXX11 _GLIBCXX_NAMESPACE_CXX11
# define _GLIBCXX_BEGIN_NAMESPACE_LDBL_OR_CXX11 _GLIBCXX_BEGIN_NAMESPACE_CXX11
# define _GLIBCXX_END_NAMESPACE_LDBL_OR_CXX11 _GLIBCXX_END_NAMESPACE_CXX11
#else
# 472 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_NAMESPACE_LDBL_OR_CXX11 _GLIBCXX_NAMESPACE_LDBL
# define _GLIBCXX_BEGIN_NAMESPACE_LDBL_OR_CXX11 _GLIBCXX_BEGIN_NAMESPACE_LDBL
# define _GLIBCXX_END_NAMESPACE_LDBL_OR_CXX11 _GLIBCXX_END_NAMESPACE_LDBL
#endif
# 476 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#endif // _GLIBCXX_LONG_DOUBLE_ALT128_COMPAT && IEEE128
# 478 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// Debug Mode implies checking assertions.
#if 0 /* disabled by -frewrite-includes */
#if defined(_GLIBCXX_DEBUG) && !defined(_GLIBCXX_ASSERTIONS)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 481 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_ASSERTIONS 1
#endif
# 483 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// Disable std::string explicit instantiation declarations in order to assert.
#ifdef _GLIBCXX_ASSERTIONS
# undef _GLIBCXX_EXTERN_TEMPLATE
# define _GLIBCXX_EXTERN_TEMPLATE -1
#endif
# 489 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3


#if 0 /* disabled by -frewrite-includes */
#if __has_builtin(__builtin_is_constant_evaluated)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 492 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define __glibcxx_constexpr_assert(cond) \
  if (__builtin_is_constant_evaluated() && !bool(cond))	\
    __builtin_unreachable() /* precondition violation detected! */
#else
# 496 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define __glibcxx_constexpr_assert(unevaluated)
#endif
# 498 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3


// Assert.
#if 0 /* disabled by -frewrite-includes */
#if defined(_GLIBCXX_ASSERTIONS) \
  || defined(_GLIBCXX_PARALLEL) || defined(_GLIBCXX_PARALLEL_ASSERTIONS)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 503 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
namespace std
{
  // Avoid the use of assert, because we're trying to keep the <cassert>
  // include out of the mix.
  extern "C++" _GLIBCXX_NORETURN
  inline void
  __replacement_assert(const char* __file, int __line,
		       const char* __function, const char* __condition)
  {
    __builtin_printf("%s:%d: %s: Assertion '%s' failed.\n", __file, __line,
		     __function, __condition);
    __builtin_abort();
  }
}
#define __glibcxx_assert_impl(_Condition)			       \
  if (__builtin_expect(!bool(_Condition), false))		       \
  {								       \
    __glibcxx_constexpr_assert(_Condition);			       \
    std::__replacement_assert(__FILE__, __LINE__, __PRETTY_FUNCTION__, \
			      #_Condition);			       \
  }
#endif
# 525 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(_GLIBCXX_ASSERTIONS)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 527 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define __glibcxx_assert(cond) \
  do { __glibcxx_assert_impl(cond); } while (false)
#else
# 530 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define __glibcxx_assert(cond) \
  do { __glibcxx_constexpr_assert(cond); } while (false)
#endif
# 533 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// Macros for race detectors.
// _GLIBCXX_SYNCHRONIZATION_HAPPENS_BEFORE(A) and
// _GLIBCXX_SYNCHRONIZATION_HAPPENS_AFTER(A) should be used to explain
// atomic (lock-free) synchronization to race detectors:
// the race detector will infer a happens-before arc from the former to the
// latter when they share the same argument pointer.
//
// The most frequent use case for these macros (and the only case in the
// current implementation of the library) is atomic reference counting:
//   void _M_remove_reference()
//   {
//     _GLIBCXX_SYNCHRONIZATION_HAPPENS_BEFORE(&this->_M_refcount);
//     if (__gnu_cxx::__exchange_and_add_dispatch(&this->_M_refcount, -1) <= 0)
//       {
//         _GLIBCXX_SYNCHRONIZATION_HAPPENS_AFTER(&this->_M_refcount);
//         _M_destroy(__a);
//       }
//   }
// The annotations in this example tell the race detector that all memory
// accesses occurred when the refcount was positive do not race with
// memory accesses which occurred after the refcount became zero.
#ifndef _GLIBCXX_SYNCHRONIZATION_HAPPENS_BEFORE
# define  _GLIBCXX_SYNCHRONIZATION_HAPPENS_BEFORE(A)
#endif
# 558 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#ifndef _GLIBCXX_SYNCHRONIZATION_HAPPENS_AFTER
# define  _GLIBCXX_SYNCHRONIZATION_HAPPENS_AFTER(A)
#endif
# 561 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// Macros for C linkage: define extern "C" linkage only when using C++.
# define _GLIBCXX_BEGIN_EXTERN_C extern "C" {
# define _GLIBCXX_END_EXTERN_C }

# define _GLIBCXX_USE_ALLOCATOR_NEW 1

#ifdef __SIZEOF_INT128__
#if 0 /* disabled by -frewrite-includes */
#if ! defined __GLIBCXX_TYPE_INT_N_0 && ! defined __STRICT_ANSI__
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 570 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
// If __int128 is supported, we expect __GLIBCXX_TYPE_INT_N_0 to be defined
// unless the compiler is in strict mode. If it's not defined and the strict
// macro is not defined, something is wrong.
#warning "__STRICT_ANSI__ seems to have been undefined; this is not supported"
#endif
# 575 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#endif
# 576 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#else // !__cplusplus
# 578 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_BEGIN_EXTERN_C
# define _GLIBCXX_END_EXTERN_C
#endif
# 581 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3


// First includes.

// Pick up any OS-specific definitions.
#if 0 /* expanded by -frewrite-includes */
#include <bits/os_defines.h>
#endif /* expanded by -frewrite-includes */
# 586 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# 1 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/os_defines.h" 1 3
// Specific definitions for generic platforms  -*- C++ -*-

// Copyright (C) 2000-2021 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/os_defines.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */

#ifndef _GLIBCXX_OS_DEFINES
#  define _GLIBCXX_OS_DEFINES

// System-specific #define, typedefs, corrections, etc, go here.  This
// file will come before all others.

//  Define as 0, if you want, to enable inlining of gthread functions.
//  By default, don't pollute libstdc++ with win32api names.
#if 0 /* disabled by -frewrite-includes */
#if !defined (__GTHREAD_HIDE_WIN32API)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 39 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/os_defines.h" 3
# define __GTHREAD_HIDE_WIN32API 1
#endif
# 41 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/os_defines.h" 3

// Don't let win32api windef.h define min and max as macros
// if included after c++config.h.
#undef NOMINMAX
#define NOMINMAX 1

// Make sure that POSIX printf/scanf functions are activated.  As
// libstdc++ depends on POSIX-definitions of those functions, we define
// it unconditionally.
#undef __USE_MINGW_ANSI_STDIO
#define __USE_MINGW_ANSI_STDIO 1

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_DLL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 54 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/os_defines.h" 3
#define _GLIBCXX_PSEUDO_VISIBILITY_default __attribute__ ((__dllimport__))
#else
# 56 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/os_defines.h" 3
#define _GLIBCXX_PSEUDO_VISIBILITY_default
#endif
# 58 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/os_defines.h" 3
#define _GLIBCXX_PSEUDO_VISIBILITY_hidden

#define _GLIBCXX_PSEUDO_VISIBILITY(V) _GLIBCXX_PSEUDO_VISIBILITY_ ## V

// See libstdc++/20806.
#define _GLIBCXX_HAVE_DOS_BASED_FILESYSTEM 1

// See libstdc++/43738
// On native windows targets there is no ioctl function. And the existing
// ioctlsocket function doesn't work for normal file-descriptors.
#define _GLIBCXX_NO_IOCTL 1

// See libstdc++/51135
// Class constructors/destructors have __thiscall calling-convention on
// IA 32-bit
#if 0 /* disabled by -frewrite-includes */
#if defined (__i386__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 74 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/os_defines.h" 3
#define _GLIBCXX_CDTOR_CALLABI __thiscall
#endif
# 76 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/os_defines.h" 3

#ifdef __x86_64__
#define _GLIBCXX_LLP64 1
// See libstdc++/69506
#define _GLIBCXX_USE_WEAK_REF 0
#endif
# 82 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/os_defines.h" 3

// Enable use of GetModuleHandleEx (requires Windows XP/2003) in
// __cxa_thread_atexit to prevent modules from being unloaded before
// their dtors are called
#define _GLIBCXX_THREAD_ATEXIT_WIN32 1

// See libstdc++/59807
#define _GTHREAD_USE_MUTEX_INIT_FUNC 1

#define _GLIBCXX_USE_CRT_RAND_S 1

// See libstdc++/94268
#define _GLIBCXX_BUFSIZ 4096

#endif
# 97 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/os_defines.h" 3
# 587 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 2 3

// Pick up any CPU-specific definitions.
#if 0 /* expanded by -frewrite-includes */
#include <bits/cpu_defines.h>
#endif /* expanded by -frewrite-includes */
# 589 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# 1 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/cpu_defines.h" 1 3
// Specific definitions for generic platforms  -*- C++ -*-

// Copyright (C) 2005-2021 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/cpu_defines.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{iosfwd}
 */

#ifndef _GLIBCXX_CPU_DEFINES
#define _GLIBCXX_CPU_DEFINES 1

#endif
# 34 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/cpu_defines.h" 3
# 590 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 2 3

// If platform uses neither visibility nor psuedo-visibility,
// specify empty default for namespace annotation macros.
#ifndef _GLIBCXX_PSEUDO_VISIBILITY
# define _GLIBCXX_PSEUDO_VISIBILITY(V)
#endif
# 596 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// Certain function definitions that are meant to be overridable from
// user code are decorated with this macro.  For some targets, this
// macro causes these definitions to be weak.
#ifndef _GLIBCXX_WEAK_DEFINITION
# define _GLIBCXX_WEAK_DEFINITION
#endif
# 603 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// By default, we assume that __GXX_WEAK__ also means that there is support
// for declaring functions as weak while not defining such functions.  This
// allows for referring to functions provided by other libraries (e.g.,
// libitm) without depending on them if the respective features are not used.
#ifndef _GLIBCXX_USE_WEAK_REF
# define _GLIBCXX_USE_WEAK_REF __GXX_WEAK__
#endif
# 611 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// Conditionally enable annotations for the Transactional Memory TS on C++11.
// Most of the following conditions are due to limitations in the current
// implementation.
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L && _GLIBCXX_USE_CXX11_ABI			\
  && _GLIBCXX_USE_DUAL_ABI && __cpp_transactional_memory >= 201500L	\
  &&  !_GLIBCXX_FULLY_DYNAMIC_STRING && _GLIBCXX_USE_WEAK_REF		\
  && _GLIBCXX_USE_ALLOCATOR_NEW
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 619 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#define _GLIBCXX_TXN_SAFE transaction_safe
#define _GLIBCXX_TXN_SAFE_DYN transaction_safe_dynamic
#else
# 622 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#define _GLIBCXX_TXN_SAFE
#define _GLIBCXX_TXN_SAFE_DYN
#endif
# 625 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 201402L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 627 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
// In C++17 mathematical special functions are in namespace std.
# define _GLIBCXX_USE_STD_SPEC_FUNCS 1
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif __cplusplus >= 201103L && __STDCPP_WANT_MATH_SPEC_FUNCS__ != 0
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 630 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
// For C++11 and C++14 they are in namespace std when requested.
# define _GLIBCXX_USE_STD_SPEC_FUNCS 1
#endif
# 633 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// The remainder of the prewritten config is automatic; all the
// user hooks are listed above.

// Create a boolean flag to be used to determine if --fast-math is set.
#ifdef __FAST_MATH__
# define _GLIBCXX_FAST_MATH 1
#else
# 641 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_FAST_MATH 0
#endif
# 643 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// This marks string literals in header files to be extracted for eventual
// translation.  It is primarily used for messages in thrown exceptions; see
// src/functexcept.cc.  We use __N because the more traditional _N is used
// for something else under certain OSes (see BADNAMES).
#define __N(msgid)     (msgid)

// For example, <windows.h> is known to #define min and max as macros...
#undef min
#undef max

// N.B. these _GLIBCXX_USE_C99_XXX macros are defined unconditionally
// so they should be tested with #if not with #ifdef.
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 657 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# ifndef _GLIBCXX_USE_C99_MATH
#  define _GLIBCXX_USE_C99_MATH _GLIBCXX11_USE_C99_MATH
# endif
# 660 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# ifndef _GLIBCXX_USE_C99_COMPLEX
# define _GLIBCXX_USE_C99_COMPLEX _GLIBCXX11_USE_C99_COMPLEX
# endif
# 663 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# ifndef _GLIBCXX_USE_C99_STDIO
# define _GLIBCXX_USE_C99_STDIO _GLIBCXX11_USE_C99_STDIO
# endif
# 666 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# ifndef _GLIBCXX_USE_C99_STDLIB
# define _GLIBCXX_USE_C99_STDLIB _GLIBCXX11_USE_C99_STDLIB
# endif
# 669 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# ifndef _GLIBCXX_USE_C99_WCHAR
# define _GLIBCXX_USE_C99_WCHAR _GLIBCXX11_USE_C99_WCHAR
# endif
# 672 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#else
# 673 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# ifndef _GLIBCXX_USE_C99_MATH
#  define _GLIBCXX_USE_C99_MATH _GLIBCXX98_USE_C99_MATH
# endif
# 676 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# ifndef _GLIBCXX_USE_C99_COMPLEX
# define _GLIBCXX_USE_C99_COMPLEX _GLIBCXX98_USE_C99_COMPLEX
# endif
# 679 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# ifndef _GLIBCXX_USE_C99_STDIO
# define _GLIBCXX_USE_C99_STDIO _GLIBCXX98_USE_C99_STDIO
# endif
# 682 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# ifndef _GLIBCXX_USE_C99_STDLIB
# define _GLIBCXX_USE_C99_STDLIB _GLIBCXX98_USE_C99_STDLIB
# endif
# 685 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# ifndef _GLIBCXX_USE_C99_WCHAR
# define _GLIBCXX_USE_C99_WCHAR _GLIBCXX98_USE_C99_WCHAR
# endif
# 688 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#endif
# 689 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// Unless explicitly specified, enable char8_t extensions only if the core
// language char8_t feature macro is defined.
#ifndef _GLIBCXX_USE_CHAR8_T
# ifdef __cpp_char8_t
#  define _GLIBCXX_USE_CHAR8_T 1
# endif
# 696 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#endif
# 697 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#ifdef _GLIBCXX_USE_CHAR8_T
# define __cpp_lib_char8_t 201907L
#endif
# 700 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

/* Define if __float128 is supported on this host.  */
#if 0 /* disabled by -frewrite-includes */
#if defined(__FLOAT128__) || defined(__SIZEOF_FLOAT128__)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 703 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
/* For powerpc64 don't use __float128 when it's the same type as long double. */
#if 0 /* disabled by -frewrite-includes */
# if !(defined(_GLIBCXX_LONG_DOUBLE_ALT128_COMPAT) && defined(__LONG_DOUBLE_IEEE128__))
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 705 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  define _GLIBCXX_USE_FLOAT128 1
# endif
# 707 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#endif
# 708 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// Define if float has the IEEE binary32 format.
#if 0 /* disabled by -frewrite-includes */
#if __FLT_MANT_DIG__ == 24 \
  && __FLT_MIN_EXP__ == -125 \
  && __FLT_MAX_EXP__ == 128
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 713 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_FLOAT_IS_IEEE_BINARY32 1
#endif
# 715 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// Define if double has the IEEE binary64 format.
#if 0 /* disabled by -frewrite-includes */
#if __DBL_MANT_DIG__ == 53 \
  && __DBL_MIN_EXP__ == -1021 \
  && __DBL_MAX_EXP__ == 1024
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 720 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_DOUBLE_IS_IEEE_BINARY64 1
#endif
# 722 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#ifdef __has_builtin
# ifdef __is_identifier
// Intel and older Clang require !__is_identifier for some built-ins:
#  define _GLIBCXX_HAS_BUILTIN(B) __has_builtin(B) || ! __is_identifier(B)
# else
# 728 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  define _GLIBCXX_HAS_BUILTIN(B) __has_builtin(B)
# endif
# 730 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#endif
# 731 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_HAS_BUILTIN(__has_unique_object_representations)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 733 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_BUILTIN_HAS_UNIQ_OBJ_REP 1
#endif
# 735 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_HAS_BUILTIN(__is_aggregate)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 737 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_BUILTIN_IS_AGGREGATE 1
#endif
# 739 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_HAS_BUILTIN(__builtin_is_constant_evaluated)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 741 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  define _GLIBCXX_HAVE_BUILTIN_IS_CONSTANT_EVALUATED 1
#endif
# 743 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_HAS_BUILTIN(__is_same)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 745 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  define _GLIBCXX_HAVE_BUILTIN_IS_SAME 1
#endif
# 747 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_HAS_BUILTIN(__builtin_launder)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 749 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_BUILTIN_LAUNDER 1
#endif
# 751 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#undef _GLIBCXX_HAS_BUILTIN


// PSTL configuration

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201703L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 758 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
// This header is not installed for freestanding:
#if 0 /* disabled by -frewrite-includes */
#if __has_include(<pstl/pstl_config.h>)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 760 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
// Preserved here so we have some idea which version of upstream we've pulled in
// #define PSTL_VERSION 9000

// For now this defaults to being based on the presence of Thread Building Blocks
# ifndef _GLIBCXX_USE_TBB_PAR_BACKEND
#  define _GLIBCXX_USE_TBB_PAR_BACKEND __has_include(<tbb/tbb.h>)
# endif
# 767 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
// This section will need some rework when a new (default) backend type is added
#if 0 /* disabled by -frewrite-includes */
# if _GLIBCXX_USE_TBB_PAR_BACKEND
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 769 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  define _PSTL_PAR_BACKEND_TBB
# else
# 771 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#  define _PSTL_PAR_BACKEND_SERIAL
# endif
# 773 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

# define _PSTL_ASSERT(_Condition) __glibcxx_assert(_Condition)
# define _PSTL_ASSERT_MSG(_Condition, _Message) __glibcxx_assert(_Condition)

#if 0 /* expanded by -frewrite-includes */
#include <pstl/pstl_config.h>
#endif /* expanded by -frewrite-includes */
# 777 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# 778 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#endif // __has_include
# 779 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
#endif // C++17
# 780 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

// End of prewritten config; the settings discovered at configure time follow.
/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if you have the `acosf' function. */
#define _GLIBCXX_HAVE_ACOSF 1

/* Define to 1 if you have the `acosl' function. */
#define _GLIBCXX_HAVE_ACOSL 1

/* Define to 1 if you have the `aligned_alloc' function. */
/* #undef _GLIBCXX_HAVE_ALIGNED_ALLOC */

/* Define to 1 if you have the <arpa/inet.h> header file. */
/* #undef _GLIBCXX_HAVE_ARPA_INET_H */

/* Define to 1 if you have the `asinf' function. */
#define _GLIBCXX_HAVE_ASINF 1

/* Define to 1 if you have the `asinl' function. */
#define _GLIBCXX_HAVE_ASINL 1

/* Define to 1 if the target assembler supports .symver directive. */
/* #undef _GLIBCXX_HAVE_AS_SYMVER_DIRECTIVE */

/* Define to 1 if you have the `atan2f' function. */
#define _GLIBCXX_HAVE_ATAN2F 1

/* Define to 1 if you have the `atan2l' function. */
#define _GLIBCXX_HAVE_ATAN2L 1

/* Define to 1 if you have the `atanf' function. */
#define _GLIBCXX_HAVE_ATANF 1

/* Define to 1 if you have the `atanl' function. */
#define _GLIBCXX_HAVE_ATANL 1

/* Defined if shared_ptr reference counting should use atomic operations. */
#define _GLIBCXX_HAVE_ATOMIC_LOCK_POLICY 1

/* Define to 1 if you have the `at_quick_exit' function. */
/* #undef _GLIBCXX_HAVE_AT_QUICK_EXIT */

/* Define to 1 if the target assembler supports thread-local storage. */
/* #undef _GLIBCXX_HAVE_CC_TLS */

/* Define to 1 if you have the `ceilf' function. */
#define _GLIBCXX_HAVE_CEILF 1

/* Define to 1 if you have the `ceill' function. */
#define _GLIBCXX_HAVE_CEILL 1

/* Define to 1 if you have the <complex.h> header file. */
#define _GLIBCXX_HAVE_COMPLEX_H 1

/* Define to 1 if you have the `cosf' function. */
#define _GLIBCXX_HAVE_COSF 1

/* Define to 1 if you have the `coshf' function. */
#define _GLIBCXX_HAVE_COSHF 1

/* Define to 1 if you have the `coshl' function. */
#define _GLIBCXX_HAVE_COSHL 1

/* Define to 1 if you have the `cosl' function. */
#define _GLIBCXX_HAVE_COSL 1

/* Define to 1 if you have the <dirent.h> header file. */
#define _GLIBCXX_HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef _GLIBCXX_HAVE_DLFCN_H */

/* Define to 1 if you have the <endian.h> header file. */
/* #undef _GLIBCXX_HAVE_ENDIAN_H */

/* Define to 1 if GCC 4.6 supported std::exception_ptr for the target */
/* #undef _GLIBCXX_HAVE_EXCEPTION_PTR_SINCE_GCC46 */

/* Define to 1 if you have the <execinfo.h> header file. */
/* #undef _GLIBCXX_HAVE_EXECINFO_H */

/* Define to 1 if you have the `expf' function. */
#define _GLIBCXX_HAVE_EXPF 1

/* Define to 1 if you have the `expl' function. */
#define _GLIBCXX_HAVE_EXPL 1

/* Define to 1 if you have the `fabsf' function. */
#define _GLIBCXX_HAVE_FABSF 1

/* Define to 1 if you have the `fabsl' function. */
#define _GLIBCXX_HAVE_FABSL 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define _GLIBCXX_HAVE_FCNTL_H 1

/* Define to 1 if you have the <fenv.h> header file. */
#define _GLIBCXX_HAVE_FENV_H 1

/* Define to 1 if you have the `finite' function. */
#define _GLIBCXX_HAVE_FINITE 1

/* Define to 1 if you have the `finitef' function. */
/* #undef _GLIBCXX_HAVE_FINITEF */

/* Define to 1 if you have the `finitel' function. */
/* #undef _GLIBCXX_HAVE_FINITEL */

/* Define to 1 if you have the <float.h> header file. */
#define _GLIBCXX_HAVE_FLOAT_H 1

/* Define to 1 if you have the `floorf' function. */
#define _GLIBCXX_HAVE_FLOORF 1

/* Define to 1 if you have the `floorl' function. */
#define _GLIBCXX_HAVE_FLOORL 1

/* Define to 1 if you have the `fmodf' function. */
#define _GLIBCXX_HAVE_FMODF 1

/* Define to 1 if you have the `fmodl' function. */
#define _GLIBCXX_HAVE_FMODL 1

/* Define to 1 if you have the `fpclass' function. */
#define _GLIBCXX_HAVE_FPCLASS 1

/* Define to 1 if you have the <fp.h> header file. */
/* #undef _GLIBCXX_HAVE_FP_H */

/* Define to 1 if you have the `frexpf' function. */
#define _GLIBCXX_HAVE_FREXPF 1

/* Define to 1 if you have the `frexpl' function. */
#define _GLIBCXX_HAVE_FREXPL 1

/* Define if _Unwind_GetIPInfo is available. */
#define _GLIBCXX_HAVE_GETIPINFO 1

/* Define if gets is available in <stdio.h> before C++14. */
#define _GLIBCXX_HAVE_GETS 1

/* Define to 1 if you have the `hypot' function. */
#define _GLIBCXX_HAVE_HYPOT 1

/* Define to 1 if you have the `hypotf' function. */
#define _GLIBCXX_HAVE_HYPOTF 1

/* Define to 1 if you have the `hypotl' function. */
#define _GLIBCXX_HAVE_HYPOTL 1

/* Define if you have the iconv() function. */
#define _GLIBCXX_HAVE_ICONV 1

/* Define to 1 if you have the <ieeefp.h> header file. */
#define _GLIBCXX_HAVE_IEEEFP_H 1

/* Define if int64_t is available in <stdint.h>. */
#define _GLIBCXX_HAVE_INT64_T 1

/* Define if int64_t is a long. */
/* #undef _GLIBCXX_HAVE_INT64_T_LONG */

/* Define if int64_t is a long long. */
#define _GLIBCXX_HAVE_INT64_T_LONG_LONG 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define _GLIBCXX_HAVE_INTTYPES_H 1

/* Define to 1 if you have the `isinf' function. */
/* #undef _GLIBCXX_HAVE_ISINF */

/* Define to 1 if you have the `isinff' function. */
/* #undef _GLIBCXX_HAVE_ISINFF */

/* Define to 1 if you have the `isinfl' function. */
/* #undef _GLIBCXX_HAVE_ISINFL */

/* Define to 1 if you have the `isnan' function. */
#define _GLIBCXX_HAVE_ISNAN 1

/* Define to 1 if you have the `isnanf' function. */
/* #undef _GLIBCXX_HAVE_ISNANF */

/* Define to 1 if you have the `isnanl' function. */
/* #undef _GLIBCXX_HAVE_ISNANL */

/* Defined if iswblank exists. */
#define _GLIBCXX_HAVE_ISWBLANK 1

/* Define if LC_MESSAGES is available in <locale.h>. */
/* #undef _GLIBCXX_HAVE_LC_MESSAGES */

/* Define to 1 if you have the `ldexpf' function. */
#define _GLIBCXX_HAVE_LDEXPF 1

/* Define to 1 if you have the `ldexpl' function. */
#define _GLIBCXX_HAVE_LDEXPL 1

/* Define to 1 if you have the <libintl.h> header file. */
/* #undef _GLIBCXX_HAVE_LIBINTL_H */

/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_AS */

/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_DATA */

/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_FSIZE */

/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_RSS */

/* Only used in build directory testsuite_hooks.h. */
/* #undef _GLIBCXX_HAVE_LIMIT_VMEM */

/* Define if link is available in <unistd.h>. */
/* #undef _GLIBCXX_HAVE_LINK */

/* Define if futex syscall is available. */
/* #undef _GLIBCXX_HAVE_LINUX_FUTEX */

/* Define to 1 if you have the <linux/random.h> header file. */
/* #undef _GLIBCXX_HAVE_LINUX_RANDOM_H */

/* Define to 1 if you have the <linux/types.h> header file. */
/* #undef _GLIBCXX_HAVE_LINUX_TYPES_H */

/* Define to 1 if you have the <locale.h> header file. */
#define _GLIBCXX_HAVE_LOCALE_H 1

/* Define to 1 if you have the `log10f' function. */
#define _GLIBCXX_HAVE_LOG10F 1

/* Define to 1 if you have the `log10l' function. */
#define _GLIBCXX_HAVE_LOG10L 1

/* Define to 1 if you have the `logf' function. */
#define _GLIBCXX_HAVE_LOGF 1

/* Define to 1 if you have the `logl' function. */
#define _GLIBCXX_HAVE_LOGL 1

/* Define to 1 if you have the <machine/endian.h> header file. */
/* #undef _GLIBCXX_HAVE_MACHINE_ENDIAN_H */

/* Define to 1 if you have the <machine/param.h> header file. */
/* #undef _GLIBCXX_HAVE_MACHINE_PARAM_H */

/* Define if mbstate_t exists in wchar.h. */
#define _GLIBCXX_HAVE_MBSTATE_T 1

/* Define to 1 if you have the `memalign' function. */
/* #undef _GLIBCXX_HAVE_MEMALIGN */

/* Define to 1 if you have the <memory.h> header file. */
#define _GLIBCXX_HAVE_MEMORY_H 1

/* Define to 1 if you have the `modf' function. */
#define _GLIBCXX_HAVE_MODF 1

/* Define to 1 if you have the `modff' function. */
#define _GLIBCXX_HAVE_MODFF 1

/* Define to 1 if you have the `modfl' function. */
#define _GLIBCXX_HAVE_MODFL 1

/* Define to 1 if you have the <nan.h> header file. */
/* #undef _GLIBCXX_HAVE_NAN_H */

/* Define to 1 if you have the <netdb.h> header file. */
/* #undef _GLIBCXX_HAVE_NETDB_H */

/* Define to 1 if you have the <netinet/in.h> header file. */
/* #undef _GLIBCXX_HAVE_NETINET_IN_H */

/* Define to 1 if you have the <netinet/tcp.h> header file. */
/* #undef _GLIBCXX_HAVE_NETINET_TCP_H */

/* Define if <math.h> defines obsolete isinf function. */
/* #undef _GLIBCXX_HAVE_OBSOLETE_ISINF */

/* Define if <math.h> defines obsolete isnan function. */
/* #undef _GLIBCXX_HAVE_OBSOLETE_ISNAN */

/* Define if poll is available in <poll.h>. */
/* #undef _GLIBCXX_HAVE_POLL */

/* Define to 1 if you have the <poll.h> header file. */
/* #undef _GLIBCXX_HAVE_POLL_H */

/* Define to 1 if you have the `posix_memalign' function. */
/* #undef _GLIBCXX_HAVE_POSIX_MEMALIGN */

/* Define to 1 if POSIX Semaphores with sem_timedwait are available in
   <semaphore.h>. */
#define _GLIBCXX_HAVE_POSIX_SEMAPHORE 1

/* Define to 1 if you have the `powf' function. */
#define _GLIBCXX_HAVE_POWF 1

/* Define to 1 if you have the `powl' function. */
#define _GLIBCXX_HAVE_POWL 1

/* Define to 1 if you have the `qfpclass' function. */
/* #undef _GLIBCXX_HAVE_QFPCLASS */

/* Define to 1 if you have the `quick_exit' function. */
/* #undef _GLIBCXX_HAVE_QUICK_EXIT */

/* Define if readlink is available in <unistd.h>. */
/* #undef _GLIBCXX_HAVE_READLINK */

/* Define to 1 if you have the `setenv' function. */
/* #undef _GLIBCXX_HAVE_SETENV */

/* Define to 1 if you have the `sincos' function. */
#define _GLIBCXX_HAVE_SINCOS 1

/* Define to 1 if you have the `sincosf' function. */
#define _GLIBCXX_HAVE_SINCOSF 1

/* Define to 1 if you have the `sincosl' function. */
#define _GLIBCXX_HAVE_SINCOSL 1

/* Define to 1 if you have the `sinf' function. */
#define _GLIBCXX_HAVE_SINF 1

/* Define to 1 if you have the `sinhf' function. */
#define _GLIBCXX_HAVE_SINHF 1

/* Define to 1 if you have the `sinhl' function. */
#define _GLIBCXX_HAVE_SINHL 1

/* Define to 1 if you have the `sinl' function. */
#define _GLIBCXX_HAVE_SINL 1

/* Defined if sleep exists. */
/* #undef _GLIBCXX_HAVE_SLEEP */

/* Define to 1 if you have the `sockatmark' function. */
/* #undef _GLIBCXX_HAVE_SOCKATMARK */

/* Define to 1 if you have the `sqrtf' function. */
#define _GLIBCXX_HAVE_SQRTF 1

/* Define to 1 if you have the `sqrtl' function. */
#define _GLIBCXX_HAVE_SQRTL 1

/* Define to 1 if you have the <stdalign.h> header file. */
#define _GLIBCXX_HAVE_STDALIGN_H 1

/* Define to 1 if you have the <stdbool.h> header file. */
#define _GLIBCXX_HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define _GLIBCXX_HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define _GLIBCXX_HAVE_STDLIB_H 1

/* Define if strerror_l is available in <string.h>. */
/* #undef _GLIBCXX_HAVE_STRERROR_L */

/* Define if strerror_r is available in <string.h>. */
/* #undef _GLIBCXX_HAVE_STRERROR_R */

/* Define to 1 if you have the <strings.h> header file. */
#define _GLIBCXX_HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define _GLIBCXX_HAVE_STRING_H 1

/* Define to 1 if you have the `strtof' function. */
#define _GLIBCXX_HAVE_STRTOF 1

/* Define to 1 if you have the `strtold' function. */
#define _GLIBCXX_HAVE_STRTOLD 1

/* Define to 1 if `d_type' is a member of `struct dirent'. */
/* #undef _GLIBCXX_HAVE_STRUCT_DIRENT_D_TYPE */

/* Define if strxfrm_l is available in <string.h>. */
/* #undef _GLIBCXX_HAVE_STRXFRM_L */

/* Define if symlink is available in <unistd.h>. */
/* #undef _GLIBCXX_HAVE_SYMLINK */

/* Define to 1 if the target runtime linker supports binding the same symbol
   to different versions. */
/* #undef _GLIBCXX_HAVE_SYMVER_SYMBOL_RENAMING_RUNTIME_SUPPORT */

/* Define to 1 if you have the <sys/filio.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_FILIO_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_IOCTL_H */

/* Define to 1 if you have the <sys/ipc.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_IPC_H */

/* Define to 1 if you have the <sys/isa_defs.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_ISA_DEFS_H */

/* Define to 1 if you have the <sys/machine.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_MACHINE_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define _GLIBCXX_HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_RESOURCE_H */

/* Define to 1 if you have a suitable <sys/sdt.h> header file */
/* #undef _GLIBCXX_HAVE_SYS_SDT_H */

/* Define to 1 if you have the <sys/sem.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_SEM_H */

/* Define to 1 if you have the <sys/socket.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_SOCKET_H */

/* Define to 1 if you have the <sys/statvfs.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_STATVFS_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define _GLIBCXX_HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysinfo.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_SYSINFO_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#define _GLIBCXX_HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define _GLIBCXX_HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
/* #undef _GLIBCXX_HAVE_SYS_UIO_H */

/* Define if S_IFREG is available in <sys/stat.h>. */
/* #undef _GLIBCXX_HAVE_S_IFREG */

/* Define if S_ISREG is available in <sys/stat.h>. */
#define _GLIBCXX_HAVE_S_ISREG 1

/* Define to 1 if you have the `tanf' function. */
#define _GLIBCXX_HAVE_TANF 1

/* Define to 1 if you have the `tanhf' function. */
#define _GLIBCXX_HAVE_TANHF 1

/* Define to 1 if you have the `tanhl' function. */
#define _GLIBCXX_HAVE_TANHL 1

/* Define to 1 if you have the `tanl' function. */
#define _GLIBCXX_HAVE_TANL 1

/* Define to 1 if you have the <tgmath.h> header file. */
#define _GLIBCXX_HAVE_TGMATH_H 1

/* Define to 1 if you have the `timespec_get' function. */
/* #undef _GLIBCXX_HAVE_TIMESPEC_GET */

/* Define to 1 if the target supports thread-local storage. */
#define _GLIBCXX_HAVE_TLS 1

/* Define if truncate is available in <unistd.h>. */
#define _GLIBCXX_HAVE_TRUNCATE 1

/* Define to 1 if you have the <uchar.h> header file. */
#define _GLIBCXX_HAVE_UCHAR_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define _GLIBCXX_HAVE_UNISTD_H 1

/* Define to 1 if you have the `uselocale' function. */
/* #undef _GLIBCXX_HAVE_USELOCALE */

/* Defined if usleep exists. */
/* #undef _GLIBCXX_HAVE_USLEEP */

/* Define to 1 if you have the <utime.h> header file. */
#define _GLIBCXX_HAVE_UTIME_H 1

/* Defined if vfwscanf exists. */
#define _GLIBCXX_HAVE_VFWSCANF 1

/* Defined if vswscanf exists. */
#define _GLIBCXX_HAVE_VSWSCANF 1

/* Defined if vwscanf exists. */
#define _GLIBCXX_HAVE_VWSCANF 1

/* Define to 1 if you have the <wchar.h> header file. */
#define _GLIBCXX_HAVE_WCHAR_H 1

/* Defined if wcstof exists. */
#define _GLIBCXX_HAVE_WCSTOF 1

/* Define to 1 if you have the <wctype.h> header file. */
#define _GLIBCXX_HAVE_WCTYPE_H 1

/* Defined if Sleep exists. */
/* #undef _GLIBCXX_HAVE_WIN32_SLEEP */

/* Define if writev is available in <sys/uio.h>. */
/* #undef _GLIBCXX_HAVE_WRITEV */

/* Define to 1 if you have the <xlocale.h> header file. */
/* #undef _GLIBCXX_HAVE_XLOCALE_H */

/* Define to 1 if you have the `_acosf' function. */
/* #undef _GLIBCXX_HAVE__ACOSF */

/* Define to 1 if you have the `_acosl' function. */
/* #undef _GLIBCXX_HAVE__ACOSL */

/* Define to 1 if you have the `_aligned_malloc' function. */
#define _GLIBCXX_HAVE__ALIGNED_MALLOC 1

/* Define to 1 if you have the `_asinf' function. */
/* #undef _GLIBCXX_HAVE__ASINF */

/* Define to 1 if you have the `_asinl' function. */
/* #undef _GLIBCXX_HAVE__ASINL */

/* Define to 1 if you have the `_atan2f' function. */
/* #undef _GLIBCXX_HAVE__ATAN2F */

/* Define to 1 if you have the `_atan2l' function. */
/* #undef _GLIBCXX_HAVE__ATAN2L */

/* Define to 1 if you have the `_atanf' function. */
/* #undef _GLIBCXX_HAVE__ATANF */

/* Define to 1 if you have the `_atanl' function. */
/* #undef _GLIBCXX_HAVE__ATANL */

/* Define to 1 if you have the `_ceilf' function. */
/* #undef _GLIBCXX_HAVE__CEILF */

/* Define to 1 if you have the `_ceill' function. */
/* #undef _GLIBCXX_HAVE__CEILL */

/* Define to 1 if you have the `_cosf' function. */
/* #undef _GLIBCXX_HAVE__COSF */

/* Define to 1 if you have the `_coshf' function. */
/* #undef _GLIBCXX_HAVE__COSHF */

/* Define to 1 if you have the `_coshl' function. */
/* #undef _GLIBCXX_HAVE__COSHL */

/* Define to 1 if you have the `_cosl' function. */
/* #undef _GLIBCXX_HAVE__COSL */

/* Define to 1 if you have the `_expf' function. */
/* #undef _GLIBCXX_HAVE__EXPF */

/* Define to 1 if you have the `_expl' function. */
/* #undef _GLIBCXX_HAVE__EXPL */

/* Define to 1 if you have the `_fabsf' function. */
/* #undef _GLIBCXX_HAVE__FABSF */

/* Define to 1 if you have the `_fabsl' function. */
/* #undef _GLIBCXX_HAVE__FABSL */

/* Define to 1 if you have the `_finite' function. */
/* #undef _GLIBCXX_HAVE__FINITE */

/* Define to 1 if you have the `_finitef' function. */
#define _GLIBCXX_HAVE__FINITEF 1

/* Define to 1 if you have the `_finitel' function. */
/* #undef _GLIBCXX_HAVE__FINITEL */

/* Define to 1 if you have the `_floorf' function. */
/* #undef _GLIBCXX_HAVE__FLOORF */

/* Define to 1 if you have the `_floorl' function. */
/* #undef _GLIBCXX_HAVE__FLOORL */

/* Define to 1 if you have the `_fmodf' function. */
/* #undef _GLIBCXX_HAVE__FMODF */

/* Define to 1 if you have the `_fmodl' function. */
/* #undef _GLIBCXX_HAVE__FMODL */

/* Define to 1 if you have the `_fpclass' function. */
/* #undef _GLIBCXX_HAVE__FPCLASS */

/* Define to 1 if you have the `_frexpf' function. */
/* #undef _GLIBCXX_HAVE__FREXPF */

/* Define to 1 if you have the `_frexpl' function. */
/* #undef _GLIBCXX_HAVE__FREXPL */

/* Define to 1 if you have the `_hypot' function. */
/* #undef _GLIBCXX_HAVE__HYPOT */

/* Define to 1 if you have the `_hypotf' function. */
/* #undef _GLIBCXX_HAVE__HYPOTF */

/* Define to 1 if you have the `_hypotl' function. */
/* #undef _GLIBCXX_HAVE__HYPOTL */

/* Define to 1 if you have the `_isinf' function. */
/* #undef _GLIBCXX_HAVE__ISINF */

/* Define to 1 if you have the `_isinff' function. */
/* #undef _GLIBCXX_HAVE__ISINFF */

/* Define to 1 if you have the `_isinfl' function. */
/* #undef _GLIBCXX_HAVE__ISINFL */

/* Define to 1 if you have the `_isnan' function. */
/* #undef _GLIBCXX_HAVE__ISNAN */

/* Define to 1 if you have the `_isnanf' function. */
#define _GLIBCXX_HAVE__ISNANF 1

/* Define to 1 if you have the `_isnanl' function. */
/* #undef _GLIBCXX_HAVE__ISNANL */

/* Define to 1 if you have the `_ldexpf' function. */
/* #undef _GLIBCXX_HAVE__LDEXPF */

/* Define to 1 if you have the `_ldexpl' function. */
/* #undef _GLIBCXX_HAVE__LDEXPL */

/* Define to 1 if you have the `_log10f' function. */
/* #undef _GLIBCXX_HAVE__LOG10F */

/* Define to 1 if you have the `_log10l' function. */
/* #undef _GLIBCXX_HAVE__LOG10L */

/* Define to 1 if you have the `_logf' function. */
/* #undef _GLIBCXX_HAVE__LOGF */

/* Define to 1 if you have the `_logl' function. */
/* #undef _GLIBCXX_HAVE__LOGL */

/* Define to 1 if you have the `_modf' function. */
/* #undef _GLIBCXX_HAVE__MODF */

/* Define to 1 if you have the `_modff' function. */
/* #undef _GLIBCXX_HAVE__MODFF */

/* Define to 1 if you have the `_modfl' function. */
/* #undef _GLIBCXX_HAVE__MODFL */

/* Define to 1 if you have the `_powf' function. */
/* #undef _GLIBCXX_HAVE__POWF */

/* Define to 1 if you have the `_powl' function. */
/* #undef _GLIBCXX_HAVE__POWL */

/* Define to 1 if you have the `_qfpclass' function. */
/* #undef _GLIBCXX_HAVE__QFPCLASS */

/* Define to 1 if you have the `_sincos' function. */
/* #undef _GLIBCXX_HAVE__SINCOS */

/* Define to 1 if you have the `_sincosf' function. */
/* #undef _GLIBCXX_HAVE__SINCOSF */

/* Define to 1 if you have the `_sincosl' function. */
/* #undef _GLIBCXX_HAVE__SINCOSL */

/* Define to 1 if you have the `_sinf' function. */
/* #undef _GLIBCXX_HAVE__SINF */

/* Define to 1 if you have the `_sinhf' function. */
/* #undef _GLIBCXX_HAVE__SINHF */

/* Define to 1 if you have the `_sinhl' function. */
/* #undef _GLIBCXX_HAVE__SINHL */

/* Define to 1 if you have the `_sinl' function. */
/* #undef _GLIBCXX_HAVE__SINL */

/* Define to 1 if you have the `_sqrtf' function. */
/* #undef _GLIBCXX_HAVE__SQRTF */

/* Define to 1 if you have the `_sqrtl' function. */
/* #undef _GLIBCXX_HAVE__SQRTL */

/* Define to 1 if you have the `_tanf' function. */
/* #undef _GLIBCXX_HAVE__TANF */

/* Define to 1 if you have the `_tanhf' function. */
/* #undef _GLIBCXX_HAVE__TANHF */

/* Define to 1 if you have the `_tanhl' function. */
/* #undef _GLIBCXX_HAVE__TANHL */

/* Define to 1 if you have the `_tanl' function. */
/* #undef _GLIBCXX_HAVE__TANL */

/* Define to 1 if you have the `_wfopen' function. */
#define _GLIBCXX_HAVE__WFOPEN 1

/* Define to 1 if you have the `__cxa_thread_atexit' function. */
#define _GLIBCXX_HAVE___CXA_THREAD_ATEXIT 1

/* Define to 1 if you have the `__cxa_thread_atexit_impl' function. */
/* #undef _GLIBCXX_HAVE___CXA_THREAD_ATEXIT_IMPL */

/* Define as const if the declaration of iconv() needs const. */
#define _GLIBCXX_ICONV_CONST 

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Defined if no way to sleep is available. */
/* #undef NO_SLEEP */

/* Name of package */
/* #undef _GLIBCXX_PACKAGE */

/* Define to the address where bug reports for this package should be sent. */
#define _GLIBCXX_PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define _GLIBCXX_PACKAGE_NAME "package-unused"

/* Define to the full name and version of this package. */
#define _GLIBCXX_PACKAGE_STRING "package-unused version-unused"

/* Define to the one symbol short name of this package. */
#define _GLIBCXX_PACKAGE_TARNAME "libstdc++"

/* Define to the home page for this package. */
#define _GLIBCXX_PACKAGE_URL ""

/* Define to the version of this package. */
#define _GLIBCXX_PACKAGE__GLIBCXX_VERSION "version-unused"

/* The size of `char', as computed by sizeof. */
/* #undef SIZEOF_CHAR */

/* The size of `int', as computed by sizeof. */
/* #undef SIZEOF_INT */

/* The size of `long', as computed by sizeof. */
/* #undef SIZEOF_LONG */

/* The size of `short', as computed by sizeof. */
/* #undef SIZEOF_SHORT */

/* The size of `void *', as computed by sizeof. */
/* #undef SIZEOF_VOID_P */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
/* #undef _GLIBCXX_VERSION */

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _GLIBCXX_DARWIN_USE_64_BIT_INODE
# define _GLIBCXX_DARWIN_USE_64_BIT_INODE 1
#endif
# 1548 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

/* Number of bits in a file offset, on hosts where this is settable. */
#define _GLIBCXX_FILE_OFFSET_BITS 64

/* Define if C99 functions in <complex.h> should be used in <complex> for
   C++11. Using compiler builtins for these functions requires corresponding
   C99 library functions to be present. */
#define _GLIBCXX11_USE_C99_COMPLEX 1

/* Define if C99 functions or macros in <math.h> should be imported in <cmath>
   in namespace std for C++11. */
#define _GLIBCXX11_USE_C99_MATH 1

/* Define if C99 functions or macros in <stdio.h> should be imported in
   <cstdio> in namespace std for C++11. */
#define _GLIBCXX11_USE_C99_STDIO 1

/* Define if C99 functions or macros in <stdlib.h> should be imported in
   <cstdlib> in namespace std for C++11. */
#define _GLIBCXX11_USE_C99_STDLIB 1

/* Define if C99 functions or macros in <wchar.h> should be imported in
   <cwchar> in namespace std for C++11. */
#define _GLIBCXX11_USE_C99_WCHAR 1

/* Define if C99 functions in <complex.h> should be used in <complex> for
   C++98. Using compiler builtins for these functions requires corresponding
   C99 library functions to be present. */
#define _GLIBCXX98_USE_C99_COMPLEX 1

/* Define if C99 functions or macros in <math.h> should be imported in <cmath>
   in namespace std for C++98. */
#define _GLIBCXX98_USE_C99_MATH 1

/* Define if C99 functions or macros in <stdio.h> should be imported in
   <cstdio> in namespace std for C++98. */
#define _GLIBCXX98_USE_C99_STDIO 1

/* Define if C99 functions or macros in <stdlib.h> should be imported in
   <cstdlib> in namespace std for C++98. */
#define _GLIBCXX98_USE_C99_STDLIB 1

/* Define if C99 functions or macros in <wchar.h> should be imported in
   <cwchar> in namespace std for C++98. */
#define _GLIBCXX98_USE_C99_WCHAR 1

/* Define if the compiler supports C++11 atomics. */
#define _GLIBCXX_ATOMIC_BUILTINS 1

/* Define to use concept checking code from the boost libraries. */
/* #undef _GLIBCXX_CONCEPT_CHECKS */

/* Define to 1 if a fully dynamic basic_string is wanted, 0 to disable,
   undefined for platform defaults */
#define _GLIBCXX_FULLY_DYNAMIC_STRING 1

/* Define if gthreads library is available. */
#define _GLIBCXX_HAS_GTHREADS 1

/* Define to 1 if a full hosted library is built, or 0 if freestanding. */
#define _GLIBCXX_HOSTED 1

/* Define if compatibility should be provided for alternative 128-bit long
   double formats. */

/* Define if compatibility should be provided for -mlong-double-64. */

/* Define to the letter to which size_t is mangled. */
#define _GLIBCXX_MANGLE_SIZE_T y

/* Define if C99 llrint and llround functions are missing from <math.h>. */
/* #undef _GLIBCXX_NO_C99_ROUNDING_FUNCS */

/* Define if ptrdiff_t is int. */
/* #undef _GLIBCXX_PTRDIFF_T_IS_INT */

/* Define if using setrlimit to set resource limits during "make check" */
/* #undef _GLIBCXX_RES_LIMITS */

/* Define if size_t is unsigned int. */
/* #undef _GLIBCXX_SIZE_T_IS_UINT */

/* Define to the value of the EOF integer constant. */
#define _GLIBCXX_STDIO_EOF -1

/* Define to the value of the SEEK_CUR integer constant. */
#define _GLIBCXX_STDIO_SEEK_CUR 1

/* Define to the value of the SEEK_END integer constant. */
#define _GLIBCXX_STDIO_SEEK_END 2

/* Define to use symbol versioning in the shared library. */
/* #undef _GLIBCXX_SYMVER */

/* Define to use darwin versioning in the shared library. */
/* #undef _GLIBCXX_SYMVER_DARWIN */

/* Define to use GNU versioning in the shared library. */
/* #undef _GLIBCXX_SYMVER_GNU */

/* Define to use GNU namespace versioning in the shared library. */
/* #undef _GLIBCXX_SYMVER_GNU_NAMESPACE */

/* Define to use Sun versioning in the shared library. */
/* #undef _GLIBCXX_SYMVER_SUN */

/* Define if C11 functions in <uchar.h> should be imported into namespace std
   in <cuchar>. */
#define _GLIBCXX_USE_C11_UCHAR_CXX11 1

/* Define if C99 functions or macros from <wchar.h>, <math.h>, <complex.h>,
   <stdio.h>, and <stdlib.h> can be used or exposed. */
#define _GLIBCXX_USE_C99 1

/* Define if C99 functions in <complex.h> should be used in <tr1/complex>.
   Using compiler builtins for these functions requires corresponding C99
   library functions to be present. */
#define _GLIBCXX_USE_C99_COMPLEX_TR1 1

/* Define if C99 functions in <ctype.h> should be imported in <tr1/cctype> in
   namespace std::tr1. */
#define _GLIBCXX_USE_C99_CTYPE_TR1 1

/* Define if C99 functions in <fenv.h> should be imported in <tr1/cfenv> in
   namespace std::tr1. */
#define _GLIBCXX_USE_C99_FENV_TR1 1

/* Define if C99 functions in <inttypes.h> should be imported in
   <tr1/cinttypes> in namespace std::tr1. */
#define _GLIBCXX_USE_C99_INTTYPES_TR1 1

/* Define if wchar_t C99 functions in <inttypes.h> should be imported in
   <tr1/cinttypes> in namespace std::tr1. */
#define _GLIBCXX_USE_C99_INTTYPES_WCHAR_T_TR1 1

/* Define if C99 functions or macros in <math.h> should be imported in
   <tr1/cmath> in namespace std::tr1. */
#define _GLIBCXX_USE_C99_MATH_TR1 1

/* Define if C99 types in <stdint.h> should be imported in <tr1/cstdint> in
   namespace std::tr1. */
#define _GLIBCXX_USE_C99_STDINT_TR1 1

/* Defined if clock_gettime syscall has monotonic and realtime clock support.
   */
/* #undef _GLIBCXX_USE_CLOCK_GETTIME_SYSCALL */

/* Defined if clock_gettime has monotonic clock support. */
#define _GLIBCXX_USE_CLOCK_MONOTONIC 1

/* Defined if clock_gettime has realtime clock support. */
#define _GLIBCXX_USE_CLOCK_REALTIME 1

/* Define if ISO/IEC TR 24733 decimal floating point types are supported on
   this host. */
#define _GLIBCXX_USE_DECIMAL_FLOAT 1

/* Define if /dev/random and /dev/urandom are available for
   std::random_device. */
/* #undef _GLIBCXX_USE_DEV_RANDOM */

/* Define if fchmod is available in <sys/stat.h>. */
/* #undef _GLIBCXX_USE_FCHMOD */

/* Define if fchmodat is available in <sys/stat.h>. */
/* #undef _GLIBCXX_USE_FCHMODAT */

/* Defined if gettimeofday is available. */
#define _GLIBCXX_USE_GETTIMEOFDAY 1

/* Define if get_nprocs is available in <sys/sysinfo.h>. */
/* #undef _GLIBCXX_USE_GET_NPROCS */

/* Define if __int128 is supported on this host. */
#define _GLIBCXX_USE_INT128 1

/* Define if LFS support is available. */
#define _GLIBCXX_USE_LFS 1

/* Define if code specialized for long long should be used. */
#define _GLIBCXX_USE_LONG_LONG 1

/* Define if lstat is available in <sys/stat.h>. */
/* #undef _GLIBCXX_USE_LSTAT */

/* Defined if nanosleep is available. */
#define _GLIBCXX_USE_NANOSLEEP 1

/* Define if NLS translations are to be used. */
/* #undef _GLIBCXX_USE_NLS */

/* Define if pthreads_num_processors_np is available in <pthread.h>. */
#define _GLIBCXX_USE_PTHREADS_NUM_PROCESSORS_NP 1

/* Define if pthread_cond_clockwait is available in <pthread.h>. */
/* #undef _GLIBCXX_USE_PTHREAD_COND_CLOCKWAIT */

/* Define if pthread_mutex_clocklock is available in <pthread.h>. */
/* #undef _GLIBCXX_USE_PTHREAD_MUTEX_CLOCKLOCK */

/* Define if pthread_rwlock_clockrdlock and pthread_rwlock_clockwrlock are
   available in <pthread.h>. */
/* #undef _GLIBCXX_USE_PTHREAD_RWLOCK_CLOCKLOCK */

/* Define if POSIX read/write locks are available in <gthr.h>. */
#define _GLIBCXX_USE_PTHREAD_RWLOCK_T 1

/* Define if /dev/random and /dev/urandom are available for the random_device
   of TR1 (Chapter 5.1). */
/* #undef _GLIBCXX_USE_RANDOM_TR1 */

/* Define if usable realpath is available in <stdlib.h>. */
/* #undef _GLIBCXX_USE_REALPATH */

/* Defined if sched_yield is available. */
#define _GLIBCXX_USE_SCHED_YIELD 1

/* Define if _SC_NPROCESSORS_ONLN is available in <unistd.h>. */
/* #undef _GLIBCXX_USE_SC_NPROCESSORS_ONLN */

/* Define if _SC_NPROC_ONLN is available in <unistd.h>. */
/* #undef _GLIBCXX_USE_SC_NPROC_ONLN */

/* Define if sendfile is available in <sys/sendfile.h>. */
/* #undef _GLIBCXX_USE_SENDFILE */

/* Define to restrict std::__basic_file<> to stdio APIs. */
/* #undef _GLIBCXX_USE_STDIO_PURE */

/* Define if struct stat has timespec members. */
/* #undef _GLIBCXX_USE_ST_MTIM */

/* Define if sysctl(), CTL_HW and HW_NCPU are available in <sys/sysctl.h>. */
/* #undef _GLIBCXX_USE_SYSCTL_HW_NCPU */

/* Define if obsolescent tmpnam is available in <stdio.h>. */
#define _GLIBCXX_USE_TMPNAM 1

/* Define if utime is available in <utime.h>. */
#define _GLIBCXX_USE_UTIME 1

/* Define if utimensat and UTIME_OMIT are available in <sys/stat.h> and
   AT_FDCWD in <fcntl.h>. */
/* #undef _GLIBCXX_USE_UTIMENSAT */

/* Define if code specialized for wchar_t should be used. */
#define _GLIBCXX_USE_WCHAR_T 1

/* Define to 1 if a verbose library is built, or 0 otherwise. */
#define _GLIBCXX_VERBOSE 1

/* Defined if as can handle rdrand. */
#define _GLIBCXX_X86_RDRAND 1

/* Defined if as can handle rdseed. */
#define _GLIBCXX_X86_RDSEED 1

/* Define to 1 if mutex_timedlock is available. */
#define _GTHREAD_USE_MUTEX_TIMEDLOCK 1

/* Define for large files, on AIX-style hosts. */
/* #undef _GLIBCXX_LARGE_FILES */

/* Define if all C++11 floating point overloads are available in <math.h>.  */
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 1813 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
/* #undef __CORRECT_ISO_CPP11_MATH_H_PROTO_FP */
#endif
# 1815 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

/* Define if all C++11 integral type overloads are available in <math.h>.  */
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 1818 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
/* #undef __CORRECT_ISO_CPP11_MATH_H_PROTO_INT */
#endif
# 1820 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__ACOSF) && ! defined (_GLIBCXX_HAVE_ACOSF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1822 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_ACOSF 1
# define acosf _acosf
#endif
# 1825 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__ACOSL) && ! defined (_GLIBCXX_HAVE_ACOSL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1827 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_ACOSL 1
# define acosl _acosl
#endif
# 1830 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__ASINF) && ! defined (_GLIBCXX_HAVE_ASINF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1832 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_ASINF 1
# define asinf _asinf
#endif
# 1835 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__ASINL) && ! defined (_GLIBCXX_HAVE_ASINL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1837 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_ASINL 1
# define asinl _asinl
#endif
# 1840 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__ATAN2F) && ! defined (_GLIBCXX_HAVE_ATAN2F)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1842 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_ATAN2F 1
# define atan2f _atan2f
#endif
# 1845 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__ATAN2L) && ! defined (_GLIBCXX_HAVE_ATAN2L)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1847 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_ATAN2L 1
# define atan2l _atan2l
#endif
# 1850 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__ATANF) && ! defined (_GLIBCXX_HAVE_ATANF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1852 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_ATANF 1
# define atanf _atanf
#endif
# 1855 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__ATANL) && ! defined (_GLIBCXX_HAVE_ATANL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1857 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_ATANL 1
# define atanl _atanl
#endif
# 1860 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__CEILF) && ! defined (_GLIBCXX_HAVE_CEILF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1862 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_CEILF 1
# define ceilf _ceilf
#endif
# 1865 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__CEILL) && ! defined (_GLIBCXX_HAVE_CEILL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1867 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_CEILL 1
# define ceill _ceill
#endif
# 1870 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__COSF) && ! defined (_GLIBCXX_HAVE_COSF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1872 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_COSF 1
# define cosf _cosf
#endif
# 1875 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__COSHF) && ! defined (_GLIBCXX_HAVE_COSHF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1877 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_COSHF 1
# define coshf _coshf
#endif
# 1880 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__COSHL) && ! defined (_GLIBCXX_HAVE_COSHL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1882 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_COSHL 1
# define coshl _coshl
#endif
# 1885 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__COSL) && ! defined (_GLIBCXX_HAVE_COSL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1887 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_COSL 1
# define cosl _cosl
#endif
# 1890 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__EXPF) && ! defined (_GLIBCXX_HAVE_EXPF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1892 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_EXPF 1
# define expf _expf
#endif
# 1895 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__EXPL) && ! defined (_GLIBCXX_HAVE_EXPL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1897 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_EXPL 1
# define expl _expl
#endif
# 1900 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__FABSF) && ! defined (_GLIBCXX_HAVE_FABSF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1902 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_FABSF 1
# define fabsf _fabsf
#endif
# 1905 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__FABSL) && ! defined (_GLIBCXX_HAVE_FABSL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1907 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_FABSL 1
# define fabsl _fabsl
#endif
# 1910 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__FINITE) && ! defined (_GLIBCXX_HAVE_FINITE)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1912 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_FINITE 1
# define finite _finite
#endif
# 1915 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__FINITEF) && ! defined (_GLIBCXX_HAVE_FINITEF)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 1917 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_FINITEF 1
# define finitef _finitef
#endif
# 1920 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__FINITEL) && ! defined (_GLIBCXX_HAVE_FINITEL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1922 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_FINITEL 1
# define finitel _finitel
#endif
# 1925 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__FLOORF) && ! defined (_GLIBCXX_HAVE_FLOORF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1927 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_FLOORF 1
# define floorf _floorf
#endif
# 1930 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__FLOORL) && ! defined (_GLIBCXX_HAVE_FLOORL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1932 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_FLOORL 1
# define floorl _floorl
#endif
# 1935 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__FMODF) && ! defined (_GLIBCXX_HAVE_FMODF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1937 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_FMODF 1
# define fmodf _fmodf
#endif
# 1940 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__FMODL) && ! defined (_GLIBCXX_HAVE_FMODL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1942 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_FMODL 1
# define fmodl _fmodl
#endif
# 1945 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__FPCLASS) && ! defined (_GLIBCXX_HAVE_FPCLASS)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1947 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_FPCLASS 1
# define fpclass _fpclass
#endif
# 1950 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__FREXPF) && ! defined (_GLIBCXX_HAVE_FREXPF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1952 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_FREXPF 1
# define frexpf _frexpf
#endif
# 1955 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__FREXPL) && ! defined (_GLIBCXX_HAVE_FREXPL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1957 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_FREXPL 1
# define frexpl _frexpl
#endif
# 1960 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__HYPOT) && ! defined (_GLIBCXX_HAVE_HYPOT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1962 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_HYPOT 1
# define hypot _hypot
#endif
# 1965 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__HYPOTF) && ! defined (_GLIBCXX_HAVE_HYPOTF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1967 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_HYPOTF 1
# define hypotf _hypotf
#endif
# 1970 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__HYPOTL) && ! defined (_GLIBCXX_HAVE_HYPOTL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1972 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_HYPOTL 1
# define hypotl _hypotl
#endif
# 1975 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__ISINF) && ! defined (_GLIBCXX_HAVE_ISINF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1977 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_ISINF 1
# define isinf _isinf
#endif
# 1980 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__ISINFF) && ! defined (_GLIBCXX_HAVE_ISINFF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1982 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_ISINFF 1
# define isinff _isinff
#endif
# 1985 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__ISINFL) && ! defined (_GLIBCXX_HAVE_ISINFL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1987 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_ISINFL 1
# define isinfl _isinfl
#endif
# 1990 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__ISNAN) && ! defined (_GLIBCXX_HAVE_ISNAN)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1992 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_ISNAN 1
# define isnan _isnan
#endif
# 1995 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__ISNANF) && ! defined (_GLIBCXX_HAVE_ISNANF)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 1997 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_ISNANF 1
# define isnanf _isnanf
#endif
# 2000 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__ISNANL) && ! defined (_GLIBCXX_HAVE_ISNANL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2002 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_ISNANL 1
# define isnanl _isnanl
#endif
# 2005 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__LDEXPF) && ! defined (_GLIBCXX_HAVE_LDEXPF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2007 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_LDEXPF 1
# define ldexpf _ldexpf
#endif
# 2010 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__LDEXPL) && ! defined (_GLIBCXX_HAVE_LDEXPL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2012 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_LDEXPL 1
# define ldexpl _ldexpl
#endif
# 2015 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__LOG10F) && ! defined (_GLIBCXX_HAVE_LOG10F)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2017 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_LOG10F 1
# define log10f _log10f
#endif
# 2020 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__LOG10L) && ! defined (_GLIBCXX_HAVE_LOG10L)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2022 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_LOG10L 1
# define log10l _log10l
#endif
# 2025 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__LOGF) && ! defined (_GLIBCXX_HAVE_LOGF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2027 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_LOGF 1
# define logf _logf
#endif
# 2030 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__LOGL) && ! defined (_GLIBCXX_HAVE_LOGL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2032 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_LOGL 1
# define logl _logl
#endif
# 2035 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__MODF) && ! defined (_GLIBCXX_HAVE_MODF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2037 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_MODF 1
# define modf _modf
#endif
# 2040 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__MODFF) && ! defined (_GLIBCXX_HAVE_MODFF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2042 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_MODFF 1
# define modff _modff
#endif
# 2045 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__MODFL) && ! defined (_GLIBCXX_HAVE_MODFL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2047 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_MODFL 1
# define modfl _modfl
#endif
# 2050 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__POWF) && ! defined (_GLIBCXX_HAVE_POWF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2052 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_POWF 1
# define powf _powf
#endif
# 2055 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__POWL) && ! defined (_GLIBCXX_HAVE_POWL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2057 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_POWL 1
# define powl _powl
#endif
# 2060 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__QFPCLASS) && ! defined (_GLIBCXX_HAVE_QFPCLASS)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2062 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_QFPCLASS 1
# define qfpclass _qfpclass
#endif
# 2065 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__SINCOS) && ! defined (_GLIBCXX_HAVE_SINCOS)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2067 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_SINCOS 1
# define sincos _sincos
#endif
# 2070 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__SINCOSF) && ! defined (_GLIBCXX_HAVE_SINCOSF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2072 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_SINCOSF 1
# define sincosf _sincosf
#endif
# 2075 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__SINCOSL) && ! defined (_GLIBCXX_HAVE_SINCOSL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2077 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_SINCOSL 1
# define sincosl _sincosl
#endif
# 2080 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__SINF) && ! defined (_GLIBCXX_HAVE_SINF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2082 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_SINF 1
# define sinf _sinf
#endif
# 2085 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__SINHF) && ! defined (_GLIBCXX_HAVE_SINHF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2087 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_SINHF 1
# define sinhf _sinhf
#endif
# 2090 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__SINHL) && ! defined (_GLIBCXX_HAVE_SINHL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2092 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_SINHL 1
# define sinhl _sinhl
#endif
# 2095 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__SINL) && ! defined (_GLIBCXX_HAVE_SINL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2097 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_SINL 1
# define sinl _sinl
#endif
# 2100 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__SQRTF) && ! defined (_GLIBCXX_HAVE_SQRTF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2102 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_SQRTF 1
# define sqrtf _sqrtf
#endif
# 2105 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__SQRTL) && ! defined (_GLIBCXX_HAVE_SQRTL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2107 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_SQRTL 1
# define sqrtl _sqrtl
#endif
# 2110 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__STRTOF) && ! defined (_GLIBCXX_HAVE_STRTOF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2112 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_STRTOF 1
# define strtof _strtof
#endif
# 2115 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__STRTOLD) && ! defined (_GLIBCXX_HAVE_STRTOLD)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2117 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_STRTOLD 1
# define strtold _strtold
#endif
# 2120 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__TANF) && ! defined (_GLIBCXX_HAVE_TANF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2122 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_TANF 1
# define tanf _tanf
#endif
# 2125 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__TANHF) && ! defined (_GLIBCXX_HAVE_TANHF)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2127 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_TANHF 1
# define tanhf _tanhf
#endif
# 2130 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__TANHL) && ! defined (_GLIBCXX_HAVE_TANHL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2132 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_TANHL 1
# define tanhl _tanhl
#endif
# 2135 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_GLIBCXX_HAVE__TANL) && ! defined (_GLIBCXX_HAVE_TANL)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2137 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# define _GLIBCXX_HAVE_TANL 1
# define tanl _tanl
#endif
# 2140 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3

#endif // _GLIBCXX_CXX_CONFIG_H
# 2142 "C:/Msys2/mingw64/include/c++/11.2.0/x86_64-w64-mingw32/bits/c++config.h" 3
# 50 "C:/Msys2/mingw64/include/c++/11.2.0/cstddef" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <stddef.h>
#endif /* expanded by -frewrite-includes */
# 50 "C:/Msys2/mingw64/include/c++/11.2.0/cstddef" 3
# 1 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 1 3
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

#if 0 /* disabled by -frewrite-includes */
#if !defined(__STDDEF_H) || defined(__need_ptrdiff_t) ||                       \
    defined(__need_size_t) || defined(__need_wchar_t) ||                       \
    defined(__need_NULL) || defined(__need_wint_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 13 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined(__need_ptrdiff_t) && !defined(__need_size_t) &&                   \
    !defined(__need_wchar_t) && !defined(__need_NULL) &&                       \
    !defined(__need_wint_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 17 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
/* Always define miscellaneous pieces when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 19 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#define __STDDEF_H
#endif
# 21 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#define __need_ptrdiff_t
#define __need_size_t
#define __need_wchar_t
#define __need_NULL
#define __need_STDDEF_H_misc
/* __need_wint_t is intentionally not defined here. */
#endif
# 28 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_ptrdiff_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 30 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#if 0 /* disabled by -frewrite-includes */
#if !defined(_PTRDIFF_T) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 31 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
/* Always define ptrdiff_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 33 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#define _PTRDIFF_T
#endif
# 35 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif
# 37 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#undef __need_ptrdiff_t
#endif /* defined(__need_ptrdiff_t) */
# 39 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_size_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 41 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#if 0 /* disabled by -frewrite-includes */
#if !defined(_SIZE_T) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 42 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
/* Always define size_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 44 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#define _SIZE_T
#endif
# 46 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
typedef __SIZE_TYPE__ size_t;
#endif
# 48 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#undef __need_size_t
#endif /*defined(__need_size_t) */
# 50 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_STDDEF_H_misc)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 52 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
/* ISO9899:2011 7.20 (C11 Annex K): Define rsize_t if __STDC_WANT_LIB_EXT1__ is
 * enabled. */
#if 0 /* disabled by -frewrite-includes */
#if (defined(__STDC_WANT_LIB_EXT1__) && __STDC_WANT_LIB_EXT1__ >= 1 && \
     !defined(_RSIZE_T)) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 56 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
/* Always define rsize_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 58 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#define _RSIZE_T
#endif
# 60 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
typedef __SIZE_TYPE__ rsize_t;
#endif
# 62 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#endif /* defined(__need_STDDEF_H_misc) */
# 63 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_wchar_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 65 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#ifndef __cplusplus
/* Always define wchar_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !defined(_WCHAR_T) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 68 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 69 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#define _WCHAR_T
#if 0 /* disabled by -frewrite-includes */
#if defined(_MSC_EXTENSIONS)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 71 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#define _WCHAR_T_DEFINED
#endif
# 73 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#endif
# 74 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
typedef __WCHAR_TYPE__ wchar_t;
#endif
# 76 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#endif
# 77 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#undef __need_wchar_t
#endif /* defined(__need_wchar_t) */
# 79 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_NULL)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 81 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#undef NULL
#ifdef __cplusplus
#if 0 /* disabled by -frewrite-includes */
#  if !defined(__MINGW32__) && !defined(_MSC_VER)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 84 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#    define NULL __null
#  else
# 86 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#    define NULL 0
#  endif
# 88 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#else
# 89 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#  define NULL ((void*)0)
#endif
# 91 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#ifdef __cplusplus
#if 0 /* disabled by -frewrite-includes */
#if defined(_MSC_EXTENSIONS) && defined(_NATIVE_NULLPTR_SUPPORTED)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 93 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
namespace std { typedef decltype(nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
# 96 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#endif
# 97 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#undef __need_NULL
#endif /* defined(__need_NULL) */
# 99 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__need_STDDEF_H_misc)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 101 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#if 0 /* disabled by -frewrite-includes */
#if __STDC_VERSION__ >= 201112L || __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 102 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#if 0 /* expanded by -frewrite-includes */
#include "__stddef_max_align_t.h"
#endif /* expanded by -frewrite-includes */
# 102 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
# 1 "C:/Msys2/mingw64/lib/clang/14.0.0/include/__stddef_max_align_t.h" 1 3
/*===---- __stddef_max_align_t.h - Definition of max_align_t for modules ---===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __CLANG_MAX_ALIGN_T_DEFINED
#define __CLANG_MAX_ALIGN_T_DEFINED

#if 0 /* disabled by -frewrite-includes */
#if defined(_MSC_VER)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 14 "C:/Msys2/mingw64/lib/clang/14.0.0/include/__stddef_max_align_t.h" 3
typedef double max_align_t;
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(__APPLE__)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 16 "C:/Msys2/mingw64/lib/clang/14.0.0/include/__stddef_max_align_t.h" 3
typedef long double max_align_t;
#else
# 18 "C:/Msys2/mingw64/lib/clang/14.0.0/include/__stddef_max_align_t.h" 3
// Define 'max_align_t' to match the GCC definition.
typedef struct {
  long long __clang_max_align_nonce1
      __attribute__((__aligned__(__alignof__(long long))));
  long double __clang_max_align_nonce2
      __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
#endif
# 26 "C:/Msys2/mingw64/lib/clang/14.0.0/include/__stddef_max_align_t.h" 3

#endif
# 28 "C:/Msys2/mingw64/lib/clang/14.0.0/include/__stddef_max_align_t.h" 3
# 103 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 2 3
#endif
# 104 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#define offsetof(t, d) __builtin_offsetof(t, d)
#undef __need_STDDEF_H_misc
#endif  /* defined(__need_STDDEF_H_misc) */
# 107 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3

/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
#if 0 /* disabled by -frewrite-includes */
#if defined(__need_wint_t)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 111 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
/* Always define wint_t when modules are available. */
#if 0 /* disabled by -frewrite-includes */
#if !defined(_WINT_T) || __has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 113 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#if 0 /* disabled by -frewrite-includes */
#if !__has_feature(modules)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 114 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#define _WINT_T
#endif
# 116 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
typedef __WINT_TYPE__ wint_t;
#endif
# 118 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
#undef __need_wint_t
#endif /* __need_wint_t */
# 120 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3

#endif
# 122 "C:/Msys2/mingw64/lib/clang/14.0.0/include/stddef.h" 3
# 51 "C:/Msys2/mingw64/include/c++/11.2.0/cstddef" 2 3

extern "C++"
{
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 55 "C:/Msys2/mingw64/include/c++/11.2.0/cstddef" 3
namespace std
{
  // We handle size_t, ptrdiff_t, and nullptr_t in c++config.h.
  using ::max_align_t;
}
#endif // C++11
# 61 "C:/Msys2/mingw64/include/c++/11.2.0/cstddef" 3

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201703L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 63 "C:/Msys2/mingw64/include/c++/11.2.0/cstddef" 3
namespace std
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION
#define __cpp_lib_byte 201603

  /// std::byte
  enum class byte : unsigned char {};

  template<typename _IntegerType> struct __byte_operand { };
  template<> struct __byte_operand<bool> { using __type = byte; };
  template<> struct __byte_operand<char> { using __type = byte; };
  template<> struct __byte_operand<signed char> { using __type = byte; };
  template<> struct __byte_operand<unsigned char> { using __type = byte; };
#ifdef _GLIBCXX_USE_WCHAR_T
  template<> struct __byte_operand<wchar_t> { using __type = byte; };
#endif
# 79 "C:/Msys2/mingw64/include/c++/11.2.0/cstddef" 3
#ifdef _GLIBCXX_USE_CHAR8_T
  template<> struct __byte_operand<char8_t> { using __type = byte; };
#endif
# 82 "C:/Msys2/mingw64/include/c++/11.2.0/cstddef" 3
  template<> struct __byte_operand<char16_t> { using __type = byte; };
  template<> struct __byte_operand<char32_t> { using __type = byte; };
  template<> struct __byte_operand<short> { using __type = byte; };
  template<> struct __byte_operand<unsigned short> { using __type = byte; };
  template<> struct __byte_operand<int> { using __type = byte; };
  template<> struct __byte_operand<unsigned int> { using __type = byte; };
  template<> struct __byte_operand<long> { using __type = byte; };
  template<> struct __byte_operand<unsigned long> { using __type = byte; };
  template<> struct __byte_operand<long long> { using __type = byte; };
  template<> struct __byte_operand<unsigned long long> { using __type = byte; };
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_0)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 93 "C:/Msys2/mingw64/include/c++/11.2.0/cstddef" 3
  template<> struct __byte_operand<__GLIBCXX_TYPE_INT_N_0>
  { using __type = byte; };
  template<> struct __byte_operand<unsigned __GLIBCXX_TYPE_INT_N_0>
  { using __type = byte; };
#endif
# 98 "C:/Msys2/mingw64/include/c++/11.2.0/cstddef" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_1)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 99 "C:/Msys2/mingw64/include/c++/11.2.0/cstddef" 3
  template<> struct __byte_operand<__GLIBCXX_TYPE_INT_N_1>
  { using __type = byte; };
  template<> struct __byte_operand<unsigned __GLIBCXX_TYPE_INT_N_1>
  { using __type = byte; };
#endif
# 104 "C:/Msys2/mingw64/include/c++/11.2.0/cstddef" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_2)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 105 "C:/Msys2/mingw64/include/c++/11.2.0/cstddef" 3
  template<> struct __byte_operand<__GLIBCXX_TYPE_INT_N_2>
  { using __type = byte; };
  template<> struct __byte_operand<unsigned __GLIBCXX_TYPE_INT_N_2>
  { using __type = byte; };
#endif
# 110 "C:/Msys2/mingw64/include/c++/11.2.0/cstddef" 3
  template<typename _IntegerType>
    struct __byte_operand<const _IntegerType>
    : __byte_operand<_IntegerType> { };
  template<typename _IntegerType>
    struct __byte_operand<volatile _IntegerType>
    : __byte_operand<_IntegerType> { };
  template<typename _IntegerType>
    struct __byte_operand<const volatile _IntegerType>
    : __byte_operand<_IntegerType> { };

  template<typename _IntegerType>
    using __byte_op_t = typename __byte_operand<_IntegerType>::__type;

  template<typename _IntegerType>
    constexpr __byte_op_t<_IntegerType>
    operator<<(byte __b, _IntegerType __shift) noexcept
    { return (byte)(unsigned char)((unsigned)__b << __shift); }

  template<typename _IntegerType>
    constexpr __byte_op_t<_IntegerType>
    operator>>(byte __b, _IntegerType __shift) noexcept
    { return (byte)(unsigned char)((unsigned)__b >> __shift); }

  constexpr byte
  operator|(byte __l, byte __r) noexcept
  { return (byte)(unsigned char)((unsigned)__l | (unsigned)__r); }

  constexpr byte
  operator&(byte __l, byte __r) noexcept
  { return (byte)(unsigned char)((unsigned)__l & (unsigned)__r); }

  constexpr byte
  operator^(byte __l, byte __r) noexcept
  { return (byte)(unsigned char)((unsigned)__l ^ (unsigned)__r); }

  constexpr byte
  operator~(byte __b) noexcept
  { return (byte)(unsigned char)~(unsigned)__b; }

  template<typename _IntegerType>
    constexpr __byte_op_t<_IntegerType>&
    operator<<=(byte& __b, _IntegerType __shift) noexcept
    { return __b = __b << __shift; }

  template<typename _IntegerType>
    constexpr __byte_op_t<_IntegerType>&
    operator>>=(byte& __b, _IntegerType __shift) noexcept
    { return __b = __b >> __shift; }

  constexpr byte&
  operator|=(byte& __l, byte __r) noexcept
  { return __l = __l | __r; }

  constexpr byte&
  operator&=(byte& __l, byte __r) noexcept
  { return __l = __l & __r; }

  constexpr byte&
  operator^=(byte& __l, byte __r) noexcept
  { return __l = __l ^ __r; }

  template<typename _IntegerType>
    [[nodiscard]]
    constexpr _IntegerType
    to_integer(__byte_op_t<_IntegerType> __b) noexcept
    { return _IntegerType(__b); }

_GLIBCXX_END_NAMESPACE_VERSION
} // namespace std
#endif // C++17
# 180 "C:/Msys2/mingw64/include/c++/11.2.0/cstddef" 3
} // extern "C++"

#endif // _GLIBCXX_CSTDDEF
# 183 "C:/Msys2/mingw64/include/c++/11.2.0/cstddef" 3
# 8 "multi-return.cpp" 2
#if 0 /* expanded by -frewrite-includes */
#include <cstdio>
#endif /* expanded by -frewrite-includes */
# 8 "multi-return.cpp"
# 1 "C:/Msys2/mingw64/include/c++/11.2.0/cstdio" 1 3
// -*- C++ -*- forwarding header.

// Copyright (C) 1997-2021 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/cstdio
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c stdio.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */

//
// ISO C++ 14882: 27.8.2  C Library files
//

#if 0 /* expanded by -frewrite-includes */
#pragma GCC system_header
#endif /* expanded by -frewrite-includes */
# 40 "C:/Msys2/mingw64/include/c++/11.2.0/cstdio" 3

#if 0 /* expanded by -frewrite-includes */
#include <bits/c++config.h>
#endif /* expanded by -frewrite-includes */
# 41 "C:/Msys2/mingw64/include/c++/11.2.0/cstdio" 3
# 42 "C:/Msys2/mingw64/include/c++/11.2.0/cstdio" 3
#if 0 /* expanded by -frewrite-includes */
#include <stdio.h>
#endif /* expanded by -frewrite-includes */
# 42 "C:/Msys2/mingw64/include/c++/11.2.0/cstdio" 3
# 1 "C:/Msys2/mingw64/include/stdio.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _INC_STDIO
#define _INC_STDIO

#if 0 /* expanded by -frewrite-includes */
#include <corecrt_stdio_config.h>
#endif /* expanded by -frewrite-includes */
# 9 "C:/Msys2/mingw64/include/stdio.h" 3
# 1 "C:/Msys2/mingw64/include/corecrt_stdio_config.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the Wine project.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */

#ifndef _STDIO_CONFIG_DEFINED
#define _STDIO_CONFIG_DEFINED

#if 0 /* expanded by -frewrite-includes */
#include <corecrt.h>
#endif /* expanded by -frewrite-includes */
# 10 "C:/Msys2/mingw64/include/corecrt_stdio_config.h" 3
# 1 "C:/Msys2/mingw64/include/corecrt.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */

#ifndef _INC_CORECRT
#define _INC_CORECRT

#if 0 /* expanded by -frewrite-includes */
#include <_mingw.h>
#endif /* expanded by -frewrite-includes */
# 10 "C:/Msys2/mingw64/include/corecrt.h" 3
# 1 "C:/Msys2/mingw64/include/_mingw.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */

#ifndef _INC__MINGW_H
#define _INC__MINGW_H

#if 0 /* expanded by -frewrite-includes */
#include "_mingw_mac.h"
#endif /* expanded by -frewrite-includes */
# 10 "C:/Msys2/mingw64/include/_mingw.h" 3
# 1 "C:/Msys2/mingw64/include/_mingw_mac.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */

#ifndef _INC_CRTDEFS_MACRO
#define _INC_CRTDEFS_MACRO

#define __STRINGIFY(x) #x
#define __MINGW64_STRINGIFY(x) \
  __STRINGIFY(x)

#define __MINGW64_VERSION_MAJOR 10
#define __MINGW64_VERSION_MINOR 0
#define __MINGW64_VERSION_BUGFIX 0

/* This macro holds an monotonic increasing value, which indicates
   a specific fix/patch is present on trunk.  This value isn't related to
   minor/major version-macros.  It is increased on demand, if a big
   fix was applied to trunk.  This macro gets just increased on trunk.  For
   other branches its value won't be modified.  */

#define __MINGW64_VERSION_RC 0

#define __MINGW64_VERSION_STR	\
  __MINGW64_STRINGIFY(__MINGW64_VERSION_MAJOR) \
  "." \
  __MINGW64_STRINGIFY(__MINGW64_VERSION_MINOR) \
  "." \
  __MINGW64_STRINGIFY(__MINGW64_VERSION_BUGFIX)

#define __MINGW64_VERSION_STATE "alpha"

/* mingw.org's version macros: these make gcc to define
   MINGW32_SUPPORTS_MT_EH and to use the _CRT_MT global
   and the __mingwthr_key_dtor() function from the MinGW
   CRT in its private gthr-win32.h header. */
#define __MINGW32_MAJOR_VERSION 3
#define __MINGW32_MINOR_VERSION 11

/* Set VC specific compiler target macros.  */
#if 0 /* disabled by -frewrite-includes */
#if defined(__x86_64) && defined(_X86_)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 44 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  undef _X86_  /* _X86_ is not for __x86_64 */
#endif
# 46 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(_X86_) && !defined(_M_IX86) && !defined(_M_IA64) \
   && !defined(_M_AMD64) && !defined(__x86_64)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 49 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#if 0 /* disabled by -frewrite-includes */
#  if defined(__i486__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 50 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#    define _M_IX86 400
#if 0 /* disabled by -frewrite-includes */
#if 0
#  elif defined(__i586__)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 52 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#    define _M_IX86 500
#if 0 /* disabled by -frewrite-includes */
#if 0
#  elif defined(__i686__)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 54 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#    define _M_IX86 600
#  else
# 56 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#    define _M_IX86 300
#  endif
# 58 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#endif /* if defined(_X86_) && !defined(_M_IX86) && !defined(_M_IA64) ... */
# 59 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__x86_64) && !defined(_M_IX86) && !defined(_M_IA64) \
   && !defined(_M_AMD64)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 62 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define _M_AMD64 100
#  define _M_X64 100
#endif
# 65 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__ia64__) && !defined(_M_IX86) && !defined(_M_IA64) \
   && !defined(_M_AMD64) && !defined(_X86_) && !defined(__x86_64)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 68 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define _M_IA64 100
#endif
# 70 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__arm__) && !defined(_M_ARM) && !defined(_M_ARMT) \
   && !defined(_M_THUMB)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 73 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define _M_ARM 100
#  define _M_ARMT 100
#  define _M_THUMB 100
#  ifndef _ARM_
#    define _ARM_ 1
#  endif
# 79 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  ifndef _M_ARM_NT
#    define _M_ARM_NT 1
#  endif
# 82 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#endif
# 83 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__aarch64__) && !defined(_M_ARM64)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 85 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define _M_ARM64 1
#  ifndef _ARM64_
#    define _ARM64_ 1
#  endif
# 89 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#endif
# 90 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#ifndef _X86_
   /* MS does not prefix symbols by underscores for 64-bit.  */
#  ifndef __MINGW_USE_UNDERSCORE_PREFIX
     /* As we have to support older gcc version, which are using underscores
      as symbol prefix for x64, we have to check here for the user label
      prefix defined by gcc. */
#    ifdef __USER_LABEL_PREFIX__
#      pragma push_macro ("_")
#      undef _
#      define _ 1
#if 0 /* disabled by -frewrite-includes */
#      if (__USER_LABEL_PREFIX__ + 0) != 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 102 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#        define __MINGW_USE_UNDERSCORE_PREFIX 1
#      else
# 104 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#        define __MINGW_USE_UNDERSCORE_PREFIX 0
#      endif
# 106 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#      undef _
#      pragma pop_macro ("_")
#    else /* ! __USER_LABEL_PREFIX__ */
# 109 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#      define __MINGW_USE_UNDERSCORE_PREFIX 0
#    endif /* __USER_LABEL_PREFIX__ */
# 111 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  endif
# 112 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#else /* ! ifndef _X86_ */
# 113 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
   /* For x86 we have always to prefix by underscore.  */
#  undef __MINGW_USE_UNDERSCORE_PREFIX
#  define __MINGW_USE_UNDERSCORE_PREFIX 1
#endif /* ifndef _X86_ */
# 117 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_USE_UNDERSCORE_PREFIX == 0
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 119 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __MINGW_IMP_SYMBOL(sym) __imp_##sym
#  define __MINGW_IMP_LSYMBOL(sym) __imp_##sym
#  define __MINGW_USYMBOL(sym) sym
#  define __MINGW_LSYMBOL(sym) _##sym
#else /* ! if __MINGW_USE_UNDERSCORE_PREFIX == 0 */
# 124 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __MINGW_IMP_SYMBOL(sym) _imp__##sym
#  define __MINGW_IMP_LSYMBOL(sym) __imp__##sym
#  define __MINGW_USYMBOL(sym) _##sym
#  define __MINGW_LSYMBOL(sym) sym
#endif /* if __MINGW_USE_UNDERSCORE_PREFIX == 0 */
# 129 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#define __MINGW_ASM_CALL(func) __asm__(__MINGW64_STRINGIFY(__MINGW_USYMBOL(func)))
#define __MINGW_ASM_CRT_CALL(func) __asm__(__STRINGIFY(func))

#ifndef __PTRDIFF_TYPE__
#  ifdef _WIN64
#    define __PTRDIFF_TYPE__ long long int
#  else
# 137 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#    define __PTRDIFF_TYPE__ long int
#  endif
# 139 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#endif
# 140 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#ifndef __SIZE_TYPE__
#  ifdef _WIN64
#    define __SIZE_TYPE__ long long unsigned int
#  else
# 145 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#    define __SIZE_TYPE__ long unsigned int
#  endif
# 147 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#endif
# 148 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#ifndef __WCHAR_TYPE__
#  define __WCHAR_TYPE__ unsigned short
#endif
# 152 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#ifndef __WINT_TYPE__
#  define __WINT_TYPE__ unsigned short
#endif
# 156 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#undef __MINGW_EXTENSION

#ifdef __WIDL__
#  define __MINGW_EXTENSION
#else
# 162 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#if 0 /* disabled by -frewrite-includes */
#  if defined(__GNUC__) || defined(__GNUG__)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 163 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#    define __MINGW_EXTENSION __extension__
#  else
# 165 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#    define __MINGW_EXTENSION
#  endif
# 167 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#endif /* __WIDL__ */
# 168 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

/* Special case nameless struct/union.  */
#ifndef __C89_NAMELESS
#  define __C89_NAMELESS __MINGW_EXTENSION
#  define __C89_NAMELESSSTRUCTNAME
#  define __C89_NAMELESSSTRUCTNAME1
#  define __C89_NAMELESSSTRUCTNAME2
#  define __C89_NAMELESSSTRUCTNAME3
#  define __C89_NAMELESSSTRUCTNAME4
#  define __C89_NAMELESSSTRUCTNAME5
#  define __C89_NAMELESSUNIONNAME
#  define __C89_NAMELESSUNIONNAME1
#  define __C89_NAMELESSUNIONNAME2
#  define __C89_NAMELESSUNIONNAME3
#  define __C89_NAMELESSUNIONNAME4
#  define __C89_NAMELESSUNIONNAME5
#  define __C89_NAMELESSUNIONNAME6
#  define __C89_NAMELESSUNIONNAME7
#  define __C89_NAMELESSUNIONNAME8
#endif
# 188 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#ifndef __GNU_EXTENSION
#  define __GNU_EXTENSION __MINGW_EXTENSION
#endif
# 192 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

/* MinGW-w64 has some additional C99 printf/scanf feature support.
   So we add some helper macros to ease recognition of them.  */
#define __MINGW_HAVE_ANSI_C99_PRINTF 1
#define __MINGW_HAVE_WIDE_C99_PRINTF 1
#define __MINGW_HAVE_ANSI_C99_SCANF 1
#define __MINGW_HAVE_WIDE_C99_SCANF 1

#ifdef __MINGW_USE_BROKEN_INTERFACE
#  define __MINGW_POISON_NAME(__IFACE) __IFACE
#else
# 203 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __MINGW_POISON_NAME(__IFACE) \
     __IFACE##_layout_has_not_been_verified_and_its_declaration_is_most_likely_incorrect
#endif
# 206 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#ifndef __MSABI_LONG
#  ifndef __LP64__
#    define __MSABI_LONG(x) x ## l
#  else
# 211 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#    define __MSABI_LONG(x) x
#  endif
# 213 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#endif
# 214 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __GNUC__
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 216 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __MINGW_GCC_VERSION	(__GNUC__ * 10000 + \
      __GNUC_MINOR__	* 100	+ \
      __GNUC_PATCHLEVEL__)
#else
# 220 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __MINGW_GCC_VERSION 0
#endif
# 222 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (__GNUC__) && defined (__GNUC_MINOR__)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 224 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __MINGW_GNUC_PREREQ(major, minor) \
      (__GNUC__ > (major) \
      || (__GNUC__ == (major) && __GNUC_MINOR__ >= (minor)))
#else
# 228 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __MINGW_GNUC_PREREQ(major, minor) 0
#endif
# 230 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (_MSC_VER)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 232 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __MINGW_MSC_PREREQ(major, minor) \
      (_MSC_VER >= (major * 100 + minor * 10))
#else
# 235 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __MINGW_MSC_PREREQ(major, minor) 0
#endif
# 237 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#ifdef __MINGW_MSVC_COMPAT_WARNINGS
#if 0 /* disabled by -frewrite-includes */
#  if __MINGW_GNUC_PREREQ (4, 5)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 240 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#    define __MINGW_ATTRIB_DEPRECATED_STR(X) \
       __attribute__ ((__deprecated__ (X)))
#  else
# 243 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#    define __MINGW_ATTRIB_DEPRECATED_STR(X) \
       __MINGW_ATTRIB_DEPRECATED
#  endif
# 246 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#else
# 247 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __MINGW_ATTRIB_DEPRECATED_STR(X)
#endif /* ifdef __MINGW_MSVC_COMPAT_WARNINGS */
# 249 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#define __MINGW_SEC_WARN_STR \
  "This function or variable may be unsafe, use _CRT_SECURE_NO_WARNINGS to disable deprecation"

#define __MINGW_MSVC2005_DEPREC_STR \
  "This POSIX function is deprecated beginning in Visual C++ 2005, use _CRT_NONSTDC_NO_DEPRECATE to disable deprecation"

#if 0 /* disabled by -frewrite-includes */
#if !defined (_CRT_NONSTDC_NO_DEPRECATE)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 257 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __MINGW_ATTRIB_DEPRECATED_MSVC2005 \
      __MINGW_ATTRIB_DEPRECATED_STR(__MINGW_MSVC2005_DEPREC_STR)
#else
# 260 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __MINGW_ATTRIB_DEPRECATED_MSVC2005
#endif
# 262 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined (_CRT_SECURE_NO_WARNINGS) || (_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES == 0)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 264 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __MINGW_ATTRIB_DEPRECATED_SEC_WARN \
      __MINGW_ATTRIB_DEPRECATED_STR(__MINGW_SEC_WARN_STR)
#else
# 267 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __MINGW_ATTRIB_DEPRECATED_SEC_WARN
#endif
# 269 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#define __MINGW_MS_PRINTF(__format,__args) \
  __attribute__((__format__(ms_printf, __format,__args)))

#define __MINGW_MS_SCANF(__format,__args) \
  __attribute__((__format__(ms_scanf,  __format,__args)))

#define __MINGW_GNU_PRINTF(__format,__args) \
  __attribute__((__format__(gnu_printf,__format,__args)))

#define __MINGW_GNU_SCANF(__format,__args) \
  __attribute__((__format__(gnu_scanf, __format,__args)))

#undef __mingw_ovr
#undef __mingw_static_ovr

#ifdef __cplusplus
#  define __mingw_ovr  inline __cdecl
#  define __mingw_static_ovr static __mingw_ovr
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined (__GNUC__)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 289 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __mingw_ovr static \
      __attribute__ ((__unused__)) __inline__ __cdecl
#  define __mingw_static_ovr __mingw_ovr
#else
# 293 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __mingw_ovr static __cdecl
#  define __mingw_static_ovr __mingw_ovr
#endif /* __cplusplus */
# 296 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_GNUC_PREREQ(4, 3) && !defined(__clang__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 298 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __mingw_attribute_artificial \
     __attribute__((__artificial__))
#else
# 301 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __mingw_attribute_artificial
#endif
# 303 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#define __MINGW_SELECTANY  __attribute__((__selectany__))

#if 0 /* disabled by -frewrite-includes */
#if _FORTIFY_SOURCE > 0 && __OPTIMIZE__ > 0 && __MINGW_GNUC_PREREQ(4, 1)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 307 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#if 0 /* disabled by -frewrite-includes */
#  if _FORTIFY_SOURCE > 1
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 308 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#    define __MINGW_FORTIFY_LEVEL 2
#  else
# 310 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#    define __MINGW_FORTIFY_LEVEL 1
#  endif
# 312 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#else
# 313 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __MINGW_FORTIFY_LEVEL 0
#endif
# 315 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_LEVEL > 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 317 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
   /* Calling an function with __attribute__((__warning__("...")))
      from a system include __inline__ function does not print
      a warning unless caller has __attribute__((__artificial__)). */
#  define __mingw_bos_declare \
     void __cdecl __chk_fail(void) __attribute__((__noreturn__)); \
     void __cdecl __mingw_chk_fail_warn(void) __MINGW_ASM_CALL(__chk_fail) \
     __attribute__((__noreturn__)) \
     __attribute__((__warning__("Buffer overflow detected")))
#  define __mingw_bos(p, maxtype) \
     __builtin_object_size((p), ((maxtype) > 0) && (__MINGW_FORTIFY_LEVEL > 1))
#  define __mingw_bos_known(p) \
     (__mingw_bos(p, 0) != (size_t)-1)
#  define __mingw_bos_cond_chk(c) \
     (__builtin_expect((c), 1) ? (void)0 : __chk_fail())
#  define __mingw_bos_ptr_chk(p, n, maxtype) \
     __mingw_bos_cond_chk(!__mingw_bos_known(p) || __mingw_bos(p, maxtype) >= (size_t)(n))
#  define __mingw_bos_ptr_chk_warn(p, n, maxtype) \
     (__mingw_bos_known(p) && __builtin_constant_p((n)) && __mingw_bos(p, maxtype) < (size_t)(n) \
     ? __mingw_chk_fail_warn() : __mingw_bos_ptr_chk(p, n, maxtype))
#  define __mingw_bos_ovr __mingw_ovr \
     __attribute__((__always_inline__)) \
     __mingw_attribute_artificial
#  define __mingw_bos_extern_ovr extern __inline__ __cdecl \
     __attribute__((__always_inline__, __gnu_inline__)) \
     __mingw_attribute_artificial
#else
# 343 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __mingw_bos_ovr __mingw_ovr
#endif /* __MINGW_FORTIFY_LEVEL > 0 */
# 345 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

/* If _FORTIFY_SOURCE is enabled, some inline functions may use
   __builtin_va_arg_pack().  GCC may report an error if the address
   of such a function is used.  Set _FORTIFY_VA_ARG=0 in this case.  */
#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_LEVEL > 0 && __MINGW_GNUC_PREREQ(4, 3) && !defined(__clang__) \
    && (!defined(_FORTIFY_VA_ARG) || _FORTIFY_VA_ARG > 0)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 351 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __MINGW_FORTIFY_VA_ARG 1
#else
# 353 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#  define __MINGW_FORTIFY_VA_ARG 0
#endif
# 355 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

/* Enable workaround for ABI incompatibility on affected platforms */
#ifndef WIDL_EXPLICIT_AGGREGATE_RETURNS
#if 0 /* disabled by -frewrite-includes */
#if defined(__GNUC__) && defined(__cplusplus)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 359 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#define  WIDL_EXPLICIT_AGGREGATE_RETURNS
#endif
# 361 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
#endif
# 362 "C:/Msys2/mingw64/include/_mingw_mac.h" 3

#endif	/* _INC_CRTDEFS_MACRO */
# 364 "C:/Msys2/mingw64/include/_mingw_mac.h" 3
# 11 "C:/Msys2/mingw64/include/_mingw.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include "_mingw_secapi.h"
#endif /* expanded by -frewrite-includes */
# 11 "C:/Msys2/mingw64/include/_mingw.h" 3
# 1 "C:/Msys2/mingw64/include/_mingw_secapi.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
 
#ifndef _INC_MINGW_SECAPI
#define _INC_MINGW_SECAPI

/* http://msdn.microsoft.com/en-us/library/ms175759%28v=VS.100%29.aspx */
#if 0 /* disabled by -frewrite-includes */
#if defined(__cplusplus)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 12 "C:/Msys2/mingw64/include/_mingw_secapi.h" 3
#ifndef _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES
#define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 1         /* default to 1 */
#endif /*_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES*/
# 15 "C:/Msys2/mingw64/include/_mingw_secapi.h" 3
#ifndef _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES_MEMORY
#define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES_MEMORY 0  /* default to 0 */
#endif /*_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES_MEMORY*/
# 18 "C:/Msys2/mingw64/include/_mingw_secapi.h" 3
#ifndef _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 0       /* default to 0 */
#endif /* _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES */
# 21 "C:/Msys2/mingw64/include/_mingw_secapi.h" 3
#ifndef _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 0 /* default to 0 */
#endif /* _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT */
# 24 "C:/Msys2/mingw64/include/_mingw_secapi.h" 3
#ifndef _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_MEMORY
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_MEMORY 0 /* default to 0 */
#endif /* _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_MEMORY */
# 27 "C:/Msys2/mingw64/include/_mingw_secapi.h" 3
#else
# 28 "C:/Msys2/mingw64/include/_mingw_secapi.h" 3
/* Templates won't work in C, will break if secure API is not enabled, disabled */
#undef _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES
#undef _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES_MEMORY
#undef _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES
#undef _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT
#undef _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_MEMORY
#define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 0
#define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES_MEMORY 0
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 0
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 0
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_MEMORY 0
#endif /*defined(__cplusplus)*/
# 40 "C:/Msys2/mingw64/include/_mingw_secapi.h" 3

#define __MINGW_CRT_NAME_CONCAT2(sym) ::sym##_s

#ifdef __cplusplus
extern "C++" {
template <bool __test, typename __dsttype>
  struct __if_array;
template <typename __dsttype>
  struct __if_array <true, __dsttype> {
    typedef __dsttype __type;
};
}
#endif /*__cplusplus*/
# 53 "C:/Msys2/mingw64/include/_mingw_secapi.h" 3

/* https://blogs.msdn.com/b/sdl/archive/2010/02/16/vc-2010-and-memcpy.aspx?Redirected=true */
/* fallback on default implementation if we can't know the size of the destination */
#if 0 /* disabled by -frewrite-includes */
#if (_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_MEMORY == 1)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 57 "C:/Msys2/mingw64/include/_mingw_secapi.h" 3
#define __CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_MEMORY_0_3_(__ret,__func,__type1,__attrib1,__arg1,__type2,__attrib2,__arg2,__type3,__attrib3,__arg3)\
  extern "C" {_CRTIMP __ret __cdecl __func(__type1 * __attrib1 __arg1, __type2 __attrib2 __arg2, __type3 __attrib3 __arg3) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;}\
  extern "C++" {\
    template <size_t __size, typename __dsttype> inline\
    typename __if_array < (__size > 1), void * >::__type __cdecl __func(\
    __dsttype (&__arg1)[__size],\
    __type2 __attrib2 (__arg2),\
    __type3 __attrib3 (__arg3)) {\
      return __MINGW_CRT_NAME_CONCAT2(__func) (__arg1,__size * sizeof(__dsttype),__arg2,__arg3) == 0 ? __arg1 : NULL;\
    }\
  }
#else
# 69 "C:/Msys2/mingw64/include/_mingw_secapi.h" 3
#define __CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_MEMORY_0_3_(__ret,__func,__type1,__attrib1,__arg1,__type2,__attrib2,__arg2,__type3,__attrib3,__arg3)\
  _CRTIMP __ret __cdecl __func(__type1 * __attrib1 __arg1, __type2 __attrib2 __arg2, __type3 __attrib3 __arg3) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
#endif
# 72 "C:/Msys2/mingw64/include/_mingw_secapi.h" 3

#endif /*_INC_MINGW_SECAPI*/
# 74 "C:/Msys2/mingw64/include/_mingw_secapi.h" 3
# 12 "C:/Msys2/mingw64/include/_mingw.h" 2 3

/* Include _cygwin.h if we're building a Cygwin application. */
#ifdef __CYGWIN__
#if 0 /* expanded by -frewrite-includes */
#include "_cygwin.h"
#endif /* expanded by -frewrite-includes */
# 15 "C:/Msys2/mingw64/include/_mingw.h" 3
# 16 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif
# 17 "C:/Msys2/mingw64/include/_mingw.h" 3

/* Target specific macro replacement for type "long".  In the Windows API,
   the type long is always 32 bit, even if the target is 64 bit (LLP64).
   On 64 bit Cygwin, the type long is 64 bit (LP64).  So, to get the right
   sized definitions and declarations, all usage of type long in the Windows
   headers have to be replaced by the below defined macro __LONG32. */
#ifndef __LP64__	/* 32 bit target, 64 bit Mingw target */
#define __LONG32 long
#else			/* 64 bit Cygwin target */
# 26 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __LONG32 int
#endif
# 28 "C:/Msys2/mingw64/include/_mingw.h" 3

/* C/C++ specific language defines.  */
#ifdef _WIN64
#ifdef __stdcall
#undef __stdcall
#endif
# 34 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __stdcall
#endif
# 36 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef __GNUC__
# ifndef __MINGW_IMPORT
#  define __MINGW_IMPORT  __declspec(dllimport)
# endif
# 41 "C:/Msys2/mingw64/include/_mingw.h" 3
# ifndef _CRTIMP
#  define _CRTIMP  __declspec(dllimport)
# endif
# 44 "C:/Msys2/mingw64/include/_mingw.h" 3
# define __DECLSPEC_SUPPORTED
# define __attribute__(x) /* nothing */
#else /* __GNUC__ */
# 47 "C:/Msys2/mingw64/include/_mingw.h" 3
# ifdef __declspec
#  ifndef __MINGW_IMPORT
/* Note the extern. This is needed to work around GCC's
limitations in handling dllimport attribute.  */
#   define __MINGW_IMPORT  extern __attribute__ ((__dllimport__))
#  endif
# 53 "C:/Msys2/mingw64/include/_mingw.h" 3
#  ifndef _CRTIMP
#    undef __USE_CRTIMP
#if 0 /* disabled by -frewrite-includes */
#    if !defined (_CRTBLD) && !defined (_SYSCRT)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 56 "C:/Msys2/mingw64/include/_mingw.h" 3
#      define __USE_CRTIMP 1
#    endif
# 58 "C:/Msys2/mingw64/include/_mingw.h" 3
#    ifdef __USE_CRTIMP
#      define _CRTIMP  __attribute__ ((__dllimport__))
#    else
# 61 "C:/Msys2/mingw64/include/_mingw.h" 3
#      define _CRTIMP
#    endif
# 63 "C:/Msys2/mingw64/include/_mingw.h" 3
#  endif
# 64 "C:/Msys2/mingw64/include/_mingw.h" 3
#  define __DECLSPEC_SUPPORTED
# else /* __declspec */
# 66 "C:/Msys2/mingw64/include/_mingw.h" 3
#  undef __DECLSPEC_SUPPORTED
#  undef __MINGW_IMPORT
#  ifndef _CRTIMP
#   define _CRTIMP
#  endif
# 71 "C:/Msys2/mingw64/include/_mingw.h" 3
# endif /* __declspec */
# 72 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif /* __GNUC__ */
# 73 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifdef _MSC_VER
#define USE___UUIDOF	1
#else
# 77 "C:/Msys2/mingw64/include/_mingw.h" 3
#define USE___UUIDOF	0
#endif
# 79 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined(_MSC_VER) && !defined(_inline)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 81 "C:/Msys2/mingw64/include/_mingw.h" 3
#define _inline __inline
#endif
# 83 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifdef __cplusplus
# define __CRT_INLINE inline
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(_MSC_VER)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 87 "C:/Msys2/mingw64/include/_mingw.h" 3
# define __CRT_INLINE __inline
#else
# 89 "C:/Msys2/mingw64/include/_mingw.h" 3
#if 0 /* disabled by -frewrite-includes */
# if ((__MINGW_GNUC_PREREQ(4, 3) || defined(__clang__)) && __STDC_VERSION__ >= 199901L)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 90 "C:/Msys2/mingw64/include/_mingw.h" 3
#  define __CRT_INLINE extern inline __attribute__((__gnu_inline__))
# else
# 92 "C:/Msys2/mingw64/include/_mingw.h" 3
#  define __CRT_INLINE extern __inline__
# endif
# 94 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif
# 95 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined(__MINGW_INTRIN_INLINE) && defined(__GNUC__)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 97 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_INTRIN_INLINE extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
#endif
# 99 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef __CYGWIN__
#ifdef __NO_INLINE__
#undef __CRT__NO_INLINE
#define __CRT__NO_INLINE 1
#endif
# 105 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif
# 106 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifdef __cplusplus
# define __UNUSED_PARAM(x)
#else
# 110 "C:/Msys2/mingw64/include/_mingw.h" 3
# ifdef __GNUC__
#  define __UNUSED_PARAM(x) x __attribute__ ((__unused__))
# else
# 113 "C:/Msys2/mingw64/include/_mingw.h" 3
#  define __UNUSED_PARAM(x) x
# endif
# 115 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif
# 116 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef __GNUC__
# ifdef _MSC_VER
#  define __restrict__  __restrict
# else
# 121 "C:/Msys2/mingw64/include/_mingw.h" 3
#  define __restrict__	/* nothing */
# endif
# 123 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif /* !__GNUC__ */
# 124 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_GNUC_PREREQ (3,1) && !defined __GNUG__
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 126 "C:/Msys2/mingw64/include/_mingw.h" 3
# define __restrict_arr __restrict
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(_MSC_VER)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 128 "C:/Msys2/mingw64/include/_mingw.h" 3
# define __restrict_arr __restrict
#else
# 130 "C:/Msys2/mingw64/include/_mingw.h" 3
# ifdef __GNUC__
#  define __restrict_arr        /* Not supported in old GCC.  */
# else
# 133 "C:/Msys2/mingw64/include/_mingw.h" 3
#if 0 /* disabled by -frewrite-includes */
#  if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 134 "C:/Msys2/mingw64/include/_mingw.h" 3
#   define __restrict_arr       restrict
#  else
# 136 "C:/Msys2/mingw64/include/_mingw.h" 3
#   define __restrict_arr       /* Not supported.  */
#  endif
# 138 "C:/Msys2/mingw64/include/_mingw.h" 3
# endif
# 139 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif
# 140 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifdef __GNUC__
#define __MINGW_ATTRIB_NORETURN __attribute__ ((__noreturn__))
#define __MINGW_ATTRIB_CONST __attribute__ ((__const__))
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif __MINGW_MSC_PREREQ(12, 0)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 145 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_NORETURN __declspec(noreturn)
#define __MINGW_ATTRIB_CONST
#else
# 148 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_NORETURN
#define __MINGW_ATTRIB_CONST
#endif
# 151 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_GNUC_PREREQ (3, 0)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 153 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_MALLOC __attribute__ ((__malloc__))
#define __MINGW_ATTRIB_PURE __attribute__ ((__pure__))
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif __MINGW_MSC_PREREQ(14, 0)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 156 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_MALLOC __declspec(noalias) __declspec(restrict)
#define __MINGW_ATTRIB_PURE
#else
# 159 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_MALLOC
#define __MINGW_ATTRIB_PURE
#endif
# 162 "C:/Msys2/mingw64/include/_mingw.h" 3

/* Attribute `nonnull' was valid as of gcc 3.3.  We don't use GCC's
   variadiac macro facility, because variadic macros cause syntax
   errors with  --traditional-cpp.  */
#if 0 /* disabled by -frewrite-includes */
#if  __MINGW_GNUC_PREREQ (3, 3)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 167 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_NONNULL(arg) __attribute__ ((__nonnull__ (arg)))
#else
# 169 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_NONNULL(arg)
#endif /* GNUC >= 3.3 */
# 171 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifdef __GNUC__
#define __MINGW_ATTRIB_UNUSED __attribute__ ((__unused__))
#else
# 175 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_UNUSED
#endif /* ATTRIBUTE_UNUSED */
# 177 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if  __MINGW_GNUC_PREREQ (3, 1)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 179 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_USED __attribute__ ((__used__))
#define __MINGW_ATTRIB_DEPRECATED __attribute__ ((__deprecated__))
#if 0 /* disabled by -frewrite-includes */
#if __MINGW_GNUC_PREREQ (4, 5) || defined (__clang__)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 182 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_DEPRECATED_MSG(x) __attribute__ ((__deprecated__(x)))
#endif
# 184 "C:/Msys2/mingw64/include/_mingw.h" 3
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif __MINGW_MSC_PREREQ(12, 0)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 185 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_USED
#define __MINGW_ATTRIB_DEPRECATED __declspec(deprecated)
#else
# 188 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_USED __MINGW_ATTRIB_UNUSED
#define __MINGW_ATTRIB_DEPRECATED
#endif /* GNUC >= 3.1 */
# 191 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef __MINGW_ATTRIB_DEPRECATED_MSG
#define __MINGW_ATTRIB_DEPRECATED_MSG(x) __MINGW_ATTRIB_DEPRECATED
#endif
# 195 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if  __MINGW_GNUC_PREREQ (3, 3)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 197 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_NOTHROW __attribute__ ((__nothrow__))
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif __MINGW_MSC_PREREQ(12, 0) && defined (__cplusplus)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 199 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_NOTHROW __declspec(nothrow)
#else
# 201 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_NOTHROW
#endif
# 203 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_GNUC_PREREQ (4, 4)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 205 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_NO_OPTIMIZE __attribute__((__optimize__ ("0")))
#else
# 207 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_NO_OPTIMIZE
#endif
# 209 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_GNUC_PREREQ (4, 4)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 211 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_PRAGMA_PARAM(x) _Pragma (#x)
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif __MINGW_MSC_PREREQ (13, 1)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 213 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_PRAGMA_PARAM(x) __pragma (x)
#else
# 215 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_PRAGMA_PARAM(x)
#endif
# 217 "C:/Msys2/mingw64/include/_mingw.h" 3

#define __MINGW_BROKEN_INTERFACE(x) \
  __MINGW_PRAGMA_PARAM(message ("Interface " _CRT_STRINGIZE(x) \
  " has unverified layout."))

#ifndef __MSVCRT_VERSION__
/*  High byte is the major version, low byte is the minor. */
#if 0 /* disabled by -frewrite-includes */
# if defined(__CRTDLL__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 225 "C:/Msys2/mingw64/include/_mingw.h" 3
#  define __MSVCRT_VERSION__ 0x00
#if 0 /* disabled by -frewrite-includes */
#if 0
# elif defined(_UCRT)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 227 "C:/Msys2/mingw64/include/_mingw.h" 3
#  define __MSVCRT_VERSION__ 0xE00
# else
# 229 "C:/Msys2/mingw64/include/_mingw.h" 3
#  define __MSVCRT_VERSION__ 0x700
# endif
# 231 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif
# 232 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined(_UCRT) && ((__MSVCRT_VERSION__ >= 0x1400) || (__MSVCRT_VERSION__ >= 0xE00 && __MSVCRT_VERSION__ < 0x1000))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 234 "C:/Msys2/mingw64/include/_mingw.h" 3
/* Allow both 0x1400 and 0xE00 to identify UCRT */
#define _UCRT
#endif
# 237 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x601
#endif
# 241 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _INT128_DEFINED
#define _INT128_DEFINED
#ifdef __GNUC__
#define __int8 char
#define __int16 short
#define __int32 int
#define __int64 long long
#ifdef _WIN64
#if 0 /* disabled by -frewrite-includes */
#if (__clang_major__ > 3 || (__clang_major__ == 3 && __clang_minor__ >= 1)) && \
    !defined(__SIZEOF_INT128__) /* clang >= 3.1 has __int128 but no size macro */
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 252 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __SIZEOF_INT128__ 16
#endif
# 254 "C:/Msys2/mingw64/include/_mingw.h" 3
#ifndef __SIZEOF_INT128__
typedef int __int128 __attribute__ ((__mode__ (TI)));
#endif
# 257 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif
# 258 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif /* __GNUC__ */
# 259 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif /* _INT128_DEFINED */
# 260 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifdef __GNUC__
#define __ptr32
#define __ptr64
#ifndef __unaligned
#define __unaligned
#endif
# 267 "C:/Msys2/mingw64/include/_mingw.h" 3
#ifndef __w64
#define __w64
#endif
# 270 "C:/Msys2/mingw64/include/_mingw.h" 3
#ifdef __cplusplus
#define __forceinline inline __attribute__((__always_inline__))
#else
# 273 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __forceinline extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
#endif /* __cplusplus */
# 275 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif /* __GNUC__ */
# 276 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined(_WIN32) && !defined(__CYGWIN__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 278 "C:/Msys2/mingw64/include/_mingw.h" 3
#error Only Win32 target is supported!
#endif
# 280 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef __nothrow
#ifdef __cplusplus
#define __nothrow __MINGW_NOTHROW
#else
# 285 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __nothrow
#endif
# 287 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif /* __nothrow */
# 288 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* expanded by -frewrite-includes */
#include <vadefs.h>	/* other headers depend on this include */
#endif /* expanded by -frewrite-includes */
# 289 "C:/Msys2/mingw64/include/_mingw.h" 3
# 1 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 1 3
/* ===-------- vadefs.h ---------------------------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/* Only include this if we are aiming for MSVC compatibility. */
#ifndef _MSC_VER
#if 0 /* expanded by -frewrite-includes */
#include_next <vadefs.h>
#endif /* expanded by -frewrite-includes */
# 12 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3
# 1 "C:/Msys2/mingw64/include/vadefs.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _INC_VADEFS
#define _INC_VADEFS

#if 0 /* expanded by -frewrite-includes */
#include <_mingw.h>
#endif /* expanded by -frewrite-includes */
# 9 "C:/Msys2/mingw64/include/vadefs.h" 3
# 1 "C:/Msys2/mingw64/include/_mingw.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */

#ifndef _INC__MINGW_H
#define _INC__MINGW_H

#if 0 /* expanded by -frewrite-includes */
#include "_mingw_mac.h"
#endif /* expanded by -frewrite-includes */
# 10 "C:/Msys2/mingw64/include/_mingw.h" 3
# 11 "C:/Msys2/mingw64/include/_mingw.h" 3
#if 0 /* expanded by -frewrite-includes */
#include "_mingw_secapi.h"
#endif /* expanded by -frewrite-includes */
# 11 "C:/Msys2/mingw64/include/_mingw.h" 3
# 12 "C:/Msys2/mingw64/include/_mingw.h" 3

/* Include _cygwin.h if we're building a Cygwin application. */
#ifdef __CYGWIN__
#if 0 /* expanded by -frewrite-includes */
#include "_cygwin.h"
#endif /* expanded by -frewrite-includes */
# 15 "C:/Msys2/mingw64/include/_mingw.h" 3
# 16 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif
# 17 "C:/Msys2/mingw64/include/_mingw.h" 3

/* Target specific macro replacement for type "long".  In the Windows API,
   the type long is always 32 bit, even if the target is 64 bit (LLP64).
   On 64 bit Cygwin, the type long is 64 bit (LP64).  So, to get the right
   sized definitions and declarations, all usage of type long in the Windows
   headers have to be replaced by the below defined macro __LONG32. */
#ifndef __LP64__	/* 32 bit target, 64 bit Mingw target */
#define __LONG32 long
#else			/* 64 bit Cygwin target */
# 26 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __LONG32 int
#endif
# 28 "C:/Msys2/mingw64/include/_mingw.h" 3

/* C/C++ specific language defines.  */
#ifdef _WIN64
#ifdef __stdcall
#undef __stdcall
#endif
# 34 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __stdcall
#endif
# 36 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef __GNUC__
# ifndef __MINGW_IMPORT
#  define __MINGW_IMPORT  __declspec(dllimport)
# endif
# 41 "C:/Msys2/mingw64/include/_mingw.h" 3
# ifndef _CRTIMP
#  define _CRTIMP  __declspec(dllimport)
# endif
# 44 "C:/Msys2/mingw64/include/_mingw.h" 3
# define __DECLSPEC_SUPPORTED
# define __attribute__(x) /* nothing */
#else /* __GNUC__ */
# 47 "C:/Msys2/mingw64/include/_mingw.h" 3
# ifdef __declspec
#  ifndef __MINGW_IMPORT
/* Note the extern. This is needed to work around GCC's
limitations in handling dllimport attribute.  */
#   define __MINGW_IMPORT  extern __attribute__ ((__dllimport__))
#  endif
# 53 "C:/Msys2/mingw64/include/_mingw.h" 3
#  ifndef _CRTIMP
#    undef __USE_CRTIMP
#if 0 /* disabled by -frewrite-includes */
#    if !defined (_CRTBLD) && !defined (_SYSCRT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 56 "C:/Msys2/mingw64/include/_mingw.h" 3
#      define __USE_CRTIMP 1
#    endif
# 58 "C:/Msys2/mingw64/include/_mingw.h" 3
#    ifdef __USE_CRTIMP
#      define _CRTIMP  __attribute__ ((__dllimport__))
#    else
# 61 "C:/Msys2/mingw64/include/_mingw.h" 3
#      define _CRTIMP
#    endif
# 63 "C:/Msys2/mingw64/include/_mingw.h" 3
#  endif
# 64 "C:/Msys2/mingw64/include/_mingw.h" 3
#  define __DECLSPEC_SUPPORTED
# else /* __declspec */
# 66 "C:/Msys2/mingw64/include/_mingw.h" 3
#  undef __DECLSPEC_SUPPORTED
#  undef __MINGW_IMPORT
#  ifndef _CRTIMP
#   define _CRTIMP
#  endif
# 71 "C:/Msys2/mingw64/include/_mingw.h" 3
# endif /* __declspec */
# 72 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif /* __GNUC__ */
# 73 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifdef _MSC_VER
#define USE___UUIDOF	1
#else
# 77 "C:/Msys2/mingw64/include/_mingw.h" 3
#define USE___UUIDOF	0
#endif
# 79 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined(_MSC_VER) && !defined(_inline)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 81 "C:/Msys2/mingw64/include/_mingw.h" 3
#define _inline __inline
#endif
# 83 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifdef __cplusplus
# define __CRT_INLINE inline
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(_MSC_VER)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 87 "C:/Msys2/mingw64/include/_mingw.h" 3
# define __CRT_INLINE __inline
#else
# 89 "C:/Msys2/mingw64/include/_mingw.h" 3
#if 0 /* disabled by -frewrite-includes */
# if ((__MINGW_GNUC_PREREQ(4, 3) || defined(__clang__)) && __STDC_VERSION__ >= 199901L)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 90 "C:/Msys2/mingw64/include/_mingw.h" 3
#  define __CRT_INLINE extern inline __attribute__((__gnu_inline__))
# else
# 92 "C:/Msys2/mingw64/include/_mingw.h" 3
#  define __CRT_INLINE extern __inline__
# endif
# 94 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif
# 95 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined(__MINGW_INTRIN_INLINE) && defined(__GNUC__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 97 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_INTRIN_INLINE extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
#endif
# 99 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef __CYGWIN__
#ifdef __NO_INLINE__
#undef __CRT__NO_INLINE
#define __CRT__NO_INLINE 1
#endif
# 105 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif
# 106 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifdef __cplusplus
# define __UNUSED_PARAM(x)
#else
# 110 "C:/Msys2/mingw64/include/_mingw.h" 3
# ifdef __GNUC__
#  define __UNUSED_PARAM(x) x __attribute__ ((__unused__))
# else
# 113 "C:/Msys2/mingw64/include/_mingw.h" 3
#  define __UNUSED_PARAM(x) x
# endif
# 115 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif
# 116 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef __GNUC__
# ifdef _MSC_VER
#  define __restrict__  __restrict
# else
# 121 "C:/Msys2/mingw64/include/_mingw.h" 3
#  define __restrict__	/* nothing */
# endif
# 123 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif /* !__GNUC__ */
# 124 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_GNUC_PREREQ (3,1) && !defined __GNUG__
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 126 "C:/Msys2/mingw64/include/_mingw.h" 3
# define __restrict_arr __restrict
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(_MSC_VER)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 128 "C:/Msys2/mingw64/include/_mingw.h" 3
# define __restrict_arr __restrict
#else
# 130 "C:/Msys2/mingw64/include/_mingw.h" 3
# ifdef __GNUC__
#  define __restrict_arr        /* Not supported in old GCC.  */
# else
# 133 "C:/Msys2/mingw64/include/_mingw.h" 3
#if 0 /* disabled by -frewrite-includes */
#  if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 134 "C:/Msys2/mingw64/include/_mingw.h" 3
#   define __restrict_arr       restrict
#  else
# 136 "C:/Msys2/mingw64/include/_mingw.h" 3
#   define __restrict_arr       /* Not supported.  */
#  endif
# 138 "C:/Msys2/mingw64/include/_mingw.h" 3
# endif
# 139 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif
# 140 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifdef __GNUC__
#define __MINGW_ATTRIB_NORETURN __attribute__ ((__noreturn__))
#define __MINGW_ATTRIB_CONST __attribute__ ((__const__))
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif __MINGW_MSC_PREREQ(12, 0)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 145 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_NORETURN __declspec(noreturn)
#define __MINGW_ATTRIB_CONST
#else
# 148 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_NORETURN
#define __MINGW_ATTRIB_CONST
#endif
# 151 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_GNUC_PREREQ (3, 0)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 153 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_MALLOC __attribute__ ((__malloc__))
#define __MINGW_ATTRIB_PURE __attribute__ ((__pure__))
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif __MINGW_MSC_PREREQ(14, 0)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 156 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_MALLOC __declspec(noalias) __declspec(restrict)
#define __MINGW_ATTRIB_PURE
#else
# 159 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_MALLOC
#define __MINGW_ATTRIB_PURE
#endif
# 162 "C:/Msys2/mingw64/include/_mingw.h" 3

/* Attribute `nonnull' was valid as of gcc 3.3.  We don't use GCC's
   variadiac macro facility, because variadic macros cause syntax
   errors with  --traditional-cpp.  */
#if 0 /* disabled by -frewrite-includes */
#if  __MINGW_GNUC_PREREQ (3, 3)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 167 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_NONNULL(arg) __attribute__ ((__nonnull__ (arg)))
#else
# 169 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_NONNULL(arg)
#endif /* GNUC >= 3.3 */
# 171 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifdef __GNUC__
#define __MINGW_ATTRIB_UNUSED __attribute__ ((__unused__))
#else
# 175 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_UNUSED
#endif /* ATTRIBUTE_UNUSED */
# 177 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if  __MINGW_GNUC_PREREQ (3, 1)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 179 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_USED __attribute__ ((__used__))
#define __MINGW_ATTRIB_DEPRECATED __attribute__ ((__deprecated__))
#if 0 /* disabled by -frewrite-includes */
#if __MINGW_GNUC_PREREQ (4, 5) || defined (__clang__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 182 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_DEPRECATED_MSG(x) __attribute__ ((__deprecated__(x)))
#endif
# 184 "C:/Msys2/mingw64/include/_mingw.h" 3
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif __MINGW_MSC_PREREQ(12, 0)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 185 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_USED
#define __MINGW_ATTRIB_DEPRECATED __declspec(deprecated)
#else
# 188 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_USED __MINGW_ATTRIB_UNUSED
#define __MINGW_ATTRIB_DEPRECATED
#endif /* GNUC >= 3.1 */
# 191 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef __MINGW_ATTRIB_DEPRECATED_MSG
#define __MINGW_ATTRIB_DEPRECATED_MSG(x) __MINGW_ATTRIB_DEPRECATED
#endif
# 195 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if  __MINGW_GNUC_PREREQ (3, 3)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 197 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_NOTHROW __attribute__ ((__nothrow__))
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif __MINGW_MSC_PREREQ(12, 0) && defined (__cplusplus)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 199 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_NOTHROW __declspec(nothrow)
#else
# 201 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_NOTHROW
#endif
# 203 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_GNUC_PREREQ (4, 4)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 205 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_NO_OPTIMIZE __attribute__((__optimize__ ("0")))
#else
# 207 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_ATTRIB_NO_OPTIMIZE
#endif
# 209 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_GNUC_PREREQ (4, 4)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 211 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_PRAGMA_PARAM(x) _Pragma (#x)
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif __MINGW_MSC_PREREQ (13, 1)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 213 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_PRAGMA_PARAM(x) __pragma (x)
#else
# 215 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_PRAGMA_PARAM(x)
#endif
# 217 "C:/Msys2/mingw64/include/_mingw.h" 3

#define __MINGW_BROKEN_INTERFACE(x) \
  __MINGW_PRAGMA_PARAM(message ("Interface " _CRT_STRINGIZE(x) \
  " has unverified layout."))

#ifndef __MSVCRT_VERSION__
/*  High byte is the major version, low byte is the minor. */
#if 0 /* disabled by -frewrite-includes */
# if defined(__CRTDLL__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 225 "C:/Msys2/mingw64/include/_mingw.h" 3
#  define __MSVCRT_VERSION__ 0x00
#if 0 /* disabled by -frewrite-includes */
#if 0
# elif defined(_UCRT)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 227 "C:/Msys2/mingw64/include/_mingw.h" 3
#  define __MSVCRT_VERSION__ 0xE00
# else
# 229 "C:/Msys2/mingw64/include/_mingw.h" 3
#  define __MSVCRT_VERSION__ 0x700
# endif
# 231 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif
# 232 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined(_UCRT) && ((__MSVCRT_VERSION__ >= 0x1400) || (__MSVCRT_VERSION__ >= 0xE00 && __MSVCRT_VERSION__ < 0x1000))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 234 "C:/Msys2/mingw64/include/_mingw.h" 3
/* Allow both 0x1400 and 0xE00 to identify UCRT */
#define _UCRT
#endif
# 237 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x601
#endif
# 241 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _INT128_DEFINED
#define _INT128_DEFINED
#ifdef __GNUC__
#define __int8 char
#define __int16 short
#define __int32 int
#define __int64 long long
#ifdef _WIN64
#if 0 /* disabled by -frewrite-includes */
#if (__clang_major__ > 3 || (__clang_major__ == 3 && __clang_minor__ >= 1)) && \
    !defined(__SIZEOF_INT128__) /* clang >= 3.1 has __int128 but no size macro */
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 252 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __SIZEOF_INT128__ 16
#endif
# 254 "C:/Msys2/mingw64/include/_mingw.h" 3
#ifndef __SIZEOF_INT128__
typedef int __int128 __attribute__ ((__mode__ (TI)));
#endif
# 257 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif
# 258 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif /* __GNUC__ */
# 259 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif /* _INT128_DEFINED */
# 260 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifdef __GNUC__
#define __ptr32
#define __ptr64
#ifndef __unaligned
#define __unaligned
#endif
# 267 "C:/Msys2/mingw64/include/_mingw.h" 3
#ifndef __w64
#define __w64
#endif
# 270 "C:/Msys2/mingw64/include/_mingw.h" 3
#ifdef __cplusplus
#define __forceinline inline __attribute__((__always_inline__))
#else
# 273 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __forceinline extern __inline__ __attribute__((__always_inline__,__gnu_inline__))
#endif /* __cplusplus */
# 275 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif /* __GNUC__ */
# 276 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined(_WIN32) && !defined(__CYGWIN__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 278 "C:/Msys2/mingw64/include/_mingw.h" 3
#error Only Win32 target is supported!
#endif
# 280 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef __nothrow
#ifdef __cplusplus
#define __nothrow __MINGW_NOTHROW
#else
# 285 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __nothrow
#endif
# 287 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif /* __nothrow */
# 288 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* expanded by -frewrite-includes */
#include <vadefs.h>	/* other headers depend on this include */
#endif /* expanded by -frewrite-includes */
# 289 "C:/Msys2/mingw64/include/_mingw.h" 3
# 290 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CRT_STRINGIZE
#define __CRT_STRINGIZE(_Value) #_Value
#define _CRT_STRINGIZE(_Value) __CRT_STRINGIZE(_Value)
#endif /* _CRT_STRINGIZE */
# 295 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CRT_WIDE
#define __CRT_WIDE(_String) L ## _String
#define _CRT_WIDE(_String) __CRT_WIDE(_String)
#endif /* _CRT_WIDE */
# 300 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _W64
#define _W64
#endif
# 304 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CRTIMP_NOIA64
#ifdef __ia64__
#define _CRTIMP_NOIA64
#else
# 309 "C:/Msys2/mingw64/include/_mingw.h" 3
#define _CRTIMP_NOIA64 _CRTIMP
#endif
# 311 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif /* _CRTIMP_NOIA64 */
# 312 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CRTIMP2
#define _CRTIMP2 _CRTIMP
#endif
# 316 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CRTIMP_ALTERNATIVE
#define _CRTIMP_ALTERNATIVE _CRTIMP
#define _CRT_ALTERNATIVE_IMPORTED
#endif /* _CRTIMP_ALTERNATIVE */
# 321 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _MRTIMP2
#define _MRTIMP2  _CRTIMP
#endif
# 325 "C:/Msys2/mingw64/include/_mingw.h" 3

/* We have to define _DLL for gcc based mingw version. This define is set
   by VC, when DLL-based runtime is used. So, gcc based runtime just have
   DLL-base runtime, therefore this define has to be set.
   As our headers are possibly used by windows compiler having a static
   C-runtime, we make this definition gnu compiler specific here.  */
#if 0 /* disabled by -frewrite-includes */
#if !defined (_DLL) && defined (__GNUC__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 332 "C:/Msys2/mingw64/include/_mingw.h" 3
#define _DLL
#endif
# 334 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _MT
#define _MT
#endif
# 338 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _MCRTIMP
#define _MCRTIMP _CRTIMP
#endif
# 342 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CRTIMP_PURE
#define _CRTIMP_PURE _CRTIMP
#endif
# 346 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _PGLOBAL
#define _PGLOBAL
#endif
# 350 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _AGLOBAL
#define _AGLOBAL
#endif
# 354 "C:/Msys2/mingw64/include/_mingw.h" 3

#define _SECURECRT_FILL_BUFFER_PATTERN 0xFD
#define _CRT_DEPRECATE_TEXT(_Text) __declspec(deprecated)

#ifndef _CRT_INSECURE_DEPRECATE_MEMORY
#define _CRT_INSECURE_DEPRECATE_MEMORY(_Replacement)
#endif
# 361 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CRT_INSECURE_DEPRECATE_GLOBALS
#define _CRT_INSECURE_DEPRECATE_GLOBALS(_Replacement)
#endif
# 365 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CRT_MANAGED_HEAP_DEPRECATE
#define _CRT_MANAGED_HEAP_DEPRECATE
#endif
# 369 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CRT_OBSOLETE
#define _CRT_OBSOLETE(_NewItem)
#endif
# 373 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef __WIDL__

#if 0 /* disabled by -frewrite-includes */
#if defined (_WIN32) && !defined (_WIN64) && !defined (__MINGW_USE_VC2005_COMPAT) && !defined (_UCRT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 377 "C:/Msys2/mingw64/include/_mingw.h" 3
#ifndef _USE_32BIT_TIME_T
#define _USE_32BIT_TIME_T
#endif
# 380 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif
# 381 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CONST_RETURN
#define _CONST_RETURN
#endif
# 385 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef UNALIGNED
#if 0 /* disabled by -frewrite-includes */
#if defined(__ia64__) || defined(__x86_64__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 388 "C:/Msys2/mingw64/include/_mingw.h" 3
#define UNALIGNED __unaligned
#else
# 390 "C:/Msys2/mingw64/include/_mingw.h" 3
#define UNALIGNED
#endif
# 392 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif /* UNALIGNED */
# 393 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CRT_ALIGN
#ifdef  _MSC_VER
#define _CRT_ALIGN(x) __declspec(align(x))
#else /* __GNUC__ */
# 398 "C:/Msys2/mingw64/include/_mingw.h" 3
#define _CRT_ALIGN(x) __attribute__ ((__aligned__ (x)))
#endif
# 400 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif /* _CRT_ALIGN */
# 401 "C:/Msys2/mingw64/include/_mingw.h" 3

#endif /* __WIDL__ */
# 403 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef __CRTDECL
#define __CRTDECL __cdecl
#endif
# 407 "C:/Msys2/mingw64/include/_mingw.h" 3

#define _ARGMAX 100

#ifndef _TRUNCATE
#define _TRUNCATE ((size_t)-1)
#endif
# 413 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CRT_UNUSED
#define _CRT_UNUSED(x) (void)x
#endif
# 417 "C:/Msys2/mingw64/include/_mingw.h" 3

/* MSVC defines _NATIVE_NULLPTR_SUPPORTED when nullptr is supported. We emulate it here for GCC. */
#if 0 /* disabled by -frewrite-includes */
#if __MINGW_GNUC_PREREQ(4, 6)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 420 "C:/Msys2/mingw64/include/_mingw.h" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GNUC__) && (defined(__GXX_EXPERIMENTAL_CXX0X__) || __cplusplus >= 201103L)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 421 "C:/Msys2/mingw64/include/_mingw.h" 3
#define _NATIVE_NULLPTR_SUPPORTED
#endif
# 423 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif
# 424 "C:/Msys2/mingw64/include/_mingw.h" 3

/* We are activating __USE_MINGW_ANSI_STDIO for various define indicators.
 * printf ll modifier (unsupported by msvcrt.dll) is required by C99 and C++11 standards. */
#if 0 /* disabled by -frewrite-includes */
#if (defined (_POSIX) || defined (_POSIX_SOURCE) || defined (_POSIX_C_SOURCE) \
     || defined (_ISOC99_SOURCE) \
     || (defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L && __MSVCRT_VERSION__ < 0xE00) \
     || (defined (__cplusplus) && __cplusplus >= 201103L && __MSVCRT_VERSION__ < 0xE00) \
     || defined (_XOPEN_SOURCE) || defined (_XOPEN_SOURCE_EXTENDED) \
     || defined (_GNU_SOURCE) \
     || defined (_SVID_SOURCE)) \
    && !defined(__USE_MINGW_ANSI_STDIO)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 435 "C:/Msys2/mingw64/include/_mingw.h" 3
/* Enable __USE_MINGW_ANSI_STDIO if user did _not_ specify it explicitly... */
#  define __USE_MINGW_ANSI_STDIO			1
#endif
# 438 "C:/Msys2/mingw64/include/_mingw.h" 3

/* We are defining __USE_MINGW_ANSI_STDIO as 0 or 1 */
#if 0 /* disabled by -frewrite-includes */
#if !defined(__USE_MINGW_ANSI_STDIO)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 441 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __USE_MINGW_ANSI_STDIO 0      /* was not defined so it should be 0 */
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif (__USE_MINGW_ANSI_STDIO + 0) != 0 || (1 - __USE_MINGW_ANSI_STDIO - 1) == 2
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 443 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __USE_MINGW_ANSI_STDIO 1      /* was defined as nonzero or empty so it should be 1 */
#else
# 445 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __USE_MINGW_ANSI_STDIO 0      /* was defined as (int)zero and non-empty so it should be 0 */
#endif
# 447 "C:/Msys2/mingw64/include/_mingw.h" 3

/* _dowildcard is an int that controls the globbing of the command line.
 * The MinGW32 (mingw.org) runtime calls it _CRT_glob, so we are adding
 * a compatibility definition here:  you can use either of _CRT_glob or
 * _dowildcard .
 * If _dowildcard is non-zero, the command line will be globbed:  *.*
 * will be expanded to be all files in the startup directory.
 * In the mingw-w64 library a _dowildcard variable is defined as being
 * 0, therefore command line globbing is DISABLED by default. To turn it
 * on and to leave wildcard command line processing MS's globbing code,
 * include a line in one of your source modules defining _dowildcard and
 * setting it to -1, like so:
 * int _dowildcard = -1;
 */
#undef  _CRT_glob
#define _CRT_glob _dowildcard


#if 0 /* disabled by -frewrite-includes */
#if defined(_MSC_VER) && !defined(_MSC_EXTENSIONS)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 466 "C:/Msys2/mingw64/include/_mingw.h" 3
#define NONAMELESSUNION		1
#endif
# 468 "C:/Msys2/mingw64/include/_mingw.h" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(NONAMELESSSTRUCT) && \
   !defined(NONAMELESSUNION)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 470 "C:/Msys2/mingw64/include/_mingw.h" 3
#define NONAMELESSUNION		1
#endif
# 472 "C:/Msys2/mingw64/include/_mingw.h" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(NONAMELESSUNION)  && \
   !defined(NONAMELESSSTRUCT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 474 "C:/Msys2/mingw64/include/_mingw.h" 3
#define NONAMELESSSTRUCT	1
#endif
# 476 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef __ANONYMOUS_DEFINED
#define __ANONYMOUS_DEFINED
#define _ANONYMOUS_UNION  __MINGW_EXTENSION
#define _ANONYMOUS_STRUCT __MINGW_EXTENSION
#ifndef NONAMELESSUNION
#define _UNION_NAME(x)
#define _STRUCT_NAME(x)
#else /* NONAMELESSUNION */
# 485 "C:/Msys2/mingw64/include/_mingw.h" 3
#define _UNION_NAME(x)  x
#define _STRUCT_NAME(x) x
#endif
# 488 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif	/* __ANONYMOUS_DEFINED */
# 489 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef DUMMYUNIONNAME
# ifdef NONAMELESSUNION
#  define DUMMYUNIONNAME  u
#  define DUMMYUNIONNAME1 u1	/* Wine uses this variant */
#  define DUMMYUNIONNAME2 u2
#  define DUMMYUNIONNAME3 u3
#  define DUMMYUNIONNAME4 u4
#  define DUMMYUNIONNAME5 u5
#  define DUMMYUNIONNAME6 u6
#  define DUMMYUNIONNAME7 u7
#  define DUMMYUNIONNAME8 u8
#  define DUMMYUNIONNAME9 u9
# else /* NONAMELESSUNION */
# 503 "C:/Msys2/mingw64/include/_mingw.h" 3
#  define DUMMYUNIONNAME
#  define DUMMYUNIONNAME1	/* Wine uses this variant */
#  define DUMMYUNIONNAME2
#  define DUMMYUNIONNAME3
#  define DUMMYUNIONNAME4
#  define DUMMYUNIONNAME5
#  define DUMMYUNIONNAME6
#  define DUMMYUNIONNAME7
#  define DUMMYUNIONNAME8
#  define DUMMYUNIONNAME9
# endif
# 514 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif	/* DUMMYUNIONNAME */
# 515 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef DUMMYSTRUCTNAME
# ifdef NONAMELESSUNION
#  define DUMMYSTRUCTNAME  s
#  define DUMMYSTRUCTNAME1 s1	/* Wine uses this variant */
#  define DUMMYSTRUCTNAME2 s2
#  define DUMMYSTRUCTNAME3 s3
#  define DUMMYSTRUCTNAME4 s4
#  define DUMMYSTRUCTNAME5 s5
# else
# 525 "C:/Msys2/mingw64/include/_mingw.h" 3
#  define DUMMYSTRUCTNAME
#  define DUMMYSTRUCTNAME1	/* Wine uses this variant */
#  define DUMMYSTRUCTNAME2
#  define DUMMYSTRUCTNAME3
#  define DUMMYSTRUCTNAME4
#  define DUMMYSTRUCTNAME5
# endif
# 532 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif /* DUMMYSTRUCTNAME */
# 533 "C:/Msys2/mingw64/include/_mingw.h" 3


/* Macros for __uuidof template-based emulation */
#if 0 /* disabled by -frewrite-includes */
#if defined(__cplusplus) && (USE___UUIDOF == 0)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 537 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __cpp_constexpr >= 200704l && __cpp_inline_variables >= 201606L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 539 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __CRT_UUID_DECL(type,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)    \
    extern "C++" {                                               \
    template<> struct __mingw_uuidof_s<type> {                   \
        static constexpr IID __uuid_inst = {                     \
            l,w1,w2, {b1,b2,b3,b4,b5,b6,b7,b8}                   \
        };                                                       \
    };                                                           \
    template<> constexpr const GUID &__mingw_uuidof<type>() {    \
        return __mingw_uuidof_s<type>::__uuid_inst;              \
    }                                                            \
    template<> constexpr const GUID &__mingw_uuidof<type*>() {   \
        return  __mingw_uuidof_s<type>::__uuid_inst;             \
    }                                                            \
    }
#else
# 554 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __CRT_UUID_DECL(type,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)           \
    extern "C++" {                                                      \
    template<> inline const GUID &__mingw_uuidof<type>() {              \
        static const IID __uuid_inst = {l,w1,w2, {b1,b2,b3,b4,b5,b6,b7,b8}}; \
        return __uuid_inst;                                             \
    }                                                                   \
    template<> inline const GUID &__mingw_uuidof<type*>() {             \
        return __mingw_uuidof<type>();                                  \
    }                                                                   \
    }
#endif
# 565 "C:/Msys2/mingw64/include/_mingw.h" 3

#define __uuidof(type) __mingw_uuidof<__typeof(type)>()

#else
# 569 "C:/Msys2/mingw64/include/_mingw.h" 3

#define __CRT_UUID_DECL(type,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#endif
# 573 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifdef __cplusplus
extern "C" {
#endif
# 577 "C:/Msys2/mingw64/include/_mingw.h" 3


#ifdef __MINGW_INTRIN_INLINE
#ifdef __has_builtin
#define __MINGW_DEBUGBREAK_IMPL !__has_builtin(__debugbreak)
#else
# 583 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_DEBUGBREAK_IMPL 1
#endif
# 585 "C:/Msys2/mingw64/include/_mingw.h" 3
#if 0 /* disabled by -frewrite-includes */
#if __MINGW_DEBUGBREAK_IMPL == 1
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 586 "C:/Msys2/mingw64/include/_mingw.h" 3
void __cdecl __debugbreak(void);
__MINGW_INTRIN_INLINE void __cdecl __debugbreak(void)
{
#if 0 /* disabled by -frewrite-includes */
#if defined(__i386__) || defined(__x86_64__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 590 "C:/Msys2/mingw64/include/_mingw.h" 3
  __asm__ __volatile__("int {$}3":);
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(__arm__)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 592 "C:/Msys2/mingw64/include/_mingw.h" 3
  __asm__ __volatile__("udf #0xfe");
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(__aarch64__)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 594 "C:/Msys2/mingw64/include/_mingw.h" 3
  __asm__ __volatile__("brk #0xf000");
#else
# 596 "C:/Msys2/mingw64/include/_mingw.h" 3
  __asm__ __volatile__("unimplemented");
#endif
# 598 "C:/Msys2/mingw64/include/_mingw.h" 3
}
#endif
# 600 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif
# 601 "C:/Msys2/mingw64/include/_mingw.h" 3

/* mingw-w64 specific functions: */
const char *__mingw_get_crt_info (void);

#ifdef __cplusplus
}
#endif
# 608 "C:/Msys2/mingw64/include/_mingw.h" 3

#endif /* _INC__MINGW_H */
# 610 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef MINGW_SDK_INIT
#define MINGW_SDK_INIT

/* for backward compatibility */
#ifndef MINGW_HAS_SECURE_API
#define MINGW_HAS_SECURE_API 1
#endif
# 618 "C:/Msys2/mingw64/include/_mingw.h" 3

#define __STDC_SECURE_LIB__ 200411L
#define __GOT_SECURE_LIB__ __STDC_SECURE_LIB__

#ifndef __WIDL__
#if 0 /* expanded by -frewrite-includes */
#include "sdks/_mingw_ddk.h"
#endif /* expanded by -frewrite-includes */
# 623 "C:/Msys2/mingw64/include/_mingw.h" 3
# 1 "C:/Msys2/mingw64/include/sdks/_mingw_ddk.h" 1 3
#ifndef MINGW_DDK_H
#define MINGW_DDK_H
#if 0 /* disabled by -frewrite-includes */
#if 1
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 4 "C:/Msys2/mingw64/include/sdks/_mingw_ddk.h" 3
#define MINGW_HAS_DDK_H 1
#endif
# 6 "C:/Msys2/mingw64/include/sdks/_mingw_ddk.h" 3
#endif
# 7 "C:/Msys2/mingw64/include/sdks/_mingw_ddk.h" 3
# 624 "C:/Msys2/mingw64/include/_mingw.h" 2 3
#endif
# 625 "C:/Msys2/mingw64/include/_mingw.h" 3

#endif /* MINGW_SDK_INIT */
# 627 "C:/Msys2/mingw64/include/_mingw.h" 3
# 10 "C:/Msys2/mingw64/include/vadefs.h" 2 3

#ifndef __WIDL__
#undef _CRT_PACKING
#define _CRT_PACKING 8
#pragma pack(push,_CRT_PACKING)
#endif
# 16 "C:/Msys2/mingw64/include/vadefs.h" 3

#ifdef __cplusplus
extern "C" {
#endif
# 20 "C:/Msys2/mingw64/include/vadefs.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (__GNUC__)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 22 "C:/Msys2/mingw64/include/vadefs.h" 3
#ifndef __GNUC_VA_LIST
#define __GNUC_VA_LIST
  typedef __builtin_va_list __gnuc_va_list;
#endif
# 26 "C:/Msys2/mingw64/include/vadefs.h" 3
#endif /* __GNUC__ */
# 27 "C:/Msys2/mingw64/include/vadefs.h" 3

#ifndef _VA_LIST_DEFINED	/* if stdargs.h didn't define it */
#define _VA_LIST_DEFINED
#if 0 /* disabled by -frewrite-includes */
#if defined(__GNUC__)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 31 "C:/Msys2/mingw64/include/vadefs.h" 3
  typedef __gnuc_va_list va_list;
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(_MSC_VER)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 33 "C:/Msys2/mingw64/include/vadefs.h" 3
  typedef char *  va_list;
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif !defined(__WIDL__)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 35 "C:/Msys2/mingw64/include/vadefs.h" 3
#error VARARGS not implemented for this compiler
#endif
# 37 "C:/Msys2/mingw64/include/vadefs.h" 3
#endif /* _VA_LIST_DEFINED */
# 38 "C:/Msys2/mingw64/include/vadefs.h" 3

#ifdef __cplusplus
#define _ADDRESSOF(v) (&reinterpret_cast<const char &>(v))
#else
# 42 "C:/Msys2/mingw64/include/vadefs.h" 3
#define _ADDRESSOF(v) (&(v))
#endif
# 44 "C:/Msys2/mingw64/include/vadefs.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined (__GNUC__)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 46 "C:/Msys2/mingw64/include/vadefs.h" 3
/* Use GCC builtins */

#define _crt_va_start(v,l)	__builtin_va_start(v,l)
#define _crt_va_arg(v,l)	__builtin_va_arg(v,l)
#define _crt_va_end(v)		__builtin_va_end(v)
#define _crt_va_copy(d,s)	__builtin_va_copy(d,s)

#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(_MSC_VER)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 54 "C:/Msys2/mingw64/include/vadefs.h" 3
/* MSVC specific */

#if 0 /* disabled by -frewrite-includes */
#if defined(_M_IA64)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 57 "C:/Msys2/mingw64/include/vadefs.h" 3
#define _VA_ALIGN 8
#define _SLOTSIZEOF(t) ((sizeof(t) + _VA_ALIGN - 1) & ~(_VA_ALIGN - 1))
#define _VA_STRUCT_ALIGN 16
#define _ALIGNOF(ap) ((((ap)+_VA_STRUCT_ALIGN - 1) & ~(_VA_STRUCT_ALIGN -1)) - (ap))
#define _APALIGN(t,ap) (__alignof(t) > 8 ? _ALIGNOF((uintptr_t) ap) : 0)
#else
# 63 "C:/Msys2/mingw64/include/vadefs.h" 3
#define _SLOTSIZEOF(t) (sizeof(t))
#define _APALIGN(t,ap) (__alignof(t))
#endif
# 66 "C:/Msys2/mingw64/include/vadefs.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(_M_IX86)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 68 "C:/Msys2/mingw64/include/vadefs.h" 3

#define _INTSIZEOF(n) ((sizeof(n) + sizeof(int) - 1) & ~(sizeof(int) - 1))
#define _crt_va_start(v,l)	((v) = (va_list)_ADDRESSOF(l) + _INTSIZEOF(l))
#define _crt_va_arg(v,l)	(*(l *)(((v) += _INTSIZEOF(l)) - _INTSIZEOF(l)))
#define _crt_va_end(v)		((v) = (va_list)0)
#define _crt_va_copy(d,s)	((d) = (s))

#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(_M_AMD64)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 76 "C:/Msys2/mingw64/include/vadefs.h" 3

#define _PTRSIZEOF(n) ((sizeof(n) + sizeof(void*) - 1) & ~(sizeof(void*) - 1))
#define _ISSTRUCT(t)  ((sizeof(t) > sizeof(void*)) || (sizeof(t) & (sizeof(t) - 1)) != 0)
#define _crt_va_start(v,l)	((v) = (va_list)_ADDRESSOF(l) + _PTRSIZEOF(l))
#define _crt_va_arg(v,t)	_ISSTRUCT(t) ?						\
				 (**(t**)(((v) += sizeof(void*)) - sizeof(void*))) :	\
				 ( *(t *)(((v) += sizeof(void*)) - sizeof(void*)))
#define _crt_va_end(v)		((v) = (va_list)0)
#define _crt_va_copy(d,s)	((d) = (s))

#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(_M_IA64)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 87 "C:/Msys2/mingw64/include/vadefs.h" 3

#error VARARGS not implemented for IA64

#else
# 91 "C:/Msys2/mingw64/include/vadefs.h" 3

#error VARARGS not implemented for this TARGET

#endif /* cpu ifdefs */
# 95 "C:/Msys2/mingw64/include/vadefs.h" 3

#endif /* compiler ifdefs */
# 97 "C:/Msys2/mingw64/include/vadefs.h" 3

#ifdef __cplusplus
}
#endif
# 101 "C:/Msys2/mingw64/include/vadefs.h" 3

#ifndef __WIDL__
#pragma pack(pop)
#endif
# 105 "C:/Msys2/mingw64/include/vadefs.h" 3

#endif /* _INC_VADEFS */
# 107 "C:/Msys2/mingw64/include/vadefs.h" 3

# 13 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 2 3
#else
# 14 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3

#ifndef __clang_vadefs_h
#define __clang_vadefs_h

#if 0 /* expanded by -frewrite-includes */
#include_next <vadefs.h>
#endif /* expanded by -frewrite-includes */
# 18 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3
# 19 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3

/* Override macros from vadefs.h with definitions that work with Clang. */
#ifdef _crt_va_start
#undef _crt_va_start
#define _crt_va_start(ap, param) __builtin_va_start(ap, param)
#endif
# 25 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3
#ifdef _crt_va_end
#undef _crt_va_end
#define _crt_va_end(ap)          __builtin_va_end(ap)
#endif
# 29 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3
#ifdef _crt_va_arg
#undef _crt_va_arg
#define _crt_va_arg(ap, type)    __builtin_va_arg(ap, type)
#endif
# 33 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3

/* VS 2015 switched to double underscore names, which is an improvement, but now
 * we have to intercept those names too.
 */
#ifdef __crt_va_start
#undef __crt_va_start
#define __crt_va_start(ap, param) __builtin_va_start(ap, param)
#endif
# 41 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3
#ifdef __crt_va_end
#undef __crt_va_end
#define __crt_va_end(ap)          __builtin_va_end(ap)
#endif
# 45 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3
#ifdef __crt_va_arg
#undef __crt_va_arg
#define __crt_va_arg(ap, type)    __builtin_va_arg(ap, type)
#endif
# 49 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3

#endif
# 51 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3
#endif
# 52 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3
# 290 "C:/Msys2/mingw64/include/_mingw.h" 2 3

#ifndef _CRT_STRINGIZE
#define __CRT_STRINGIZE(_Value) #_Value
#define _CRT_STRINGIZE(_Value) __CRT_STRINGIZE(_Value)
#endif /* _CRT_STRINGIZE */
# 295 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CRT_WIDE
#define __CRT_WIDE(_String) L ## _String
#define _CRT_WIDE(_String) __CRT_WIDE(_String)
#endif /* _CRT_WIDE */
# 300 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _W64
#define _W64
#endif
# 304 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CRTIMP_NOIA64
#ifdef __ia64__
#define _CRTIMP_NOIA64
#else
# 309 "C:/Msys2/mingw64/include/_mingw.h" 3
#define _CRTIMP_NOIA64 _CRTIMP
#endif
# 311 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif /* _CRTIMP_NOIA64 */
# 312 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CRTIMP2
#define _CRTIMP2 _CRTIMP
#endif
# 316 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CRTIMP_ALTERNATIVE
#define _CRTIMP_ALTERNATIVE _CRTIMP
#define _CRT_ALTERNATIVE_IMPORTED
#endif /* _CRTIMP_ALTERNATIVE */
# 321 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _MRTIMP2
#define _MRTIMP2  _CRTIMP
#endif
# 325 "C:/Msys2/mingw64/include/_mingw.h" 3

/* We have to define _DLL for gcc based mingw version. This define is set
   by VC, when DLL-based runtime is used. So, gcc based runtime just have
   DLL-base runtime, therefore this define has to be set.
   As our headers are possibly used by windows compiler having a static
   C-runtime, we make this definition gnu compiler specific here.  */
#if 0 /* disabled by -frewrite-includes */
#if !defined (_DLL) && defined (__GNUC__)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 332 "C:/Msys2/mingw64/include/_mingw.h" 3
#define _DLL
#endif
# 334 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _MT
#define _MT
#endif
# 338 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _MCRTIMP
#define _MCRTIMP _CRTIMP
#endif
# 342 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CRTIMP_PURE
#define _CRTIMP_PURE _CRTIMP
#endif
# 346 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _PGLOBAL
#define _PGLOBAL
#endif
# 350 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _AGLOBAL
#define _AGLOBAL
#endif
# 354 "C:/Msys2/mingw64/include/_mingw.h" 3

#define _SECURECRT_FILL_BUFFER_PATTERN 0xFD
#define _CRT_DEPRECATE_TEXT(_Text) __declspec(deprecated)

#ifndef _CRT_INSECURE_DEPRECATE_MEMORY
#define _CRT_INSECURE_DEPRECATE_MEMORY(_Replacement)
#endif
# 361 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CRT_INSECURE_DEPRECATE_GLOBALS
#define _CRT_INSECURE_DEPRECATE_GLOBALS(_Replacement)
#endif
# 365 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CRT_MANAGED_HEAP_DEPRECATE
#define _CRT_MANAGED_HEAP_DEPRECATE
#endif
# 369 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CRT_OBSOLETE
#define _CRT_OBSOLETE(_NewItem)
#endif
# 373 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef __WIDL__

#if 0 /* disabled by -frewrite-includes */
#if defined (_WIN32) && !defined (_WIN64) && !defined (__MINGW_USE_VC2005_COMPAT) && !defined (_UCRT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 377 "C:/Msys2/mingw64/include/_mingw.h" 3
#ifndef _USE_32BIT_TIME_T
#define _USE_32BIT_TIME_T
#endif
# 380 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif
# 381 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CONST_RETURN
#define _CONST_RETURN
#endif
# 385 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef UNALIGNED
#if 0 /* disabled by -frewrite-includes */
#if defined(__ia64__) || defined(__x86_64__)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 388 "C:/Msys2/mingw64/include/_mingw.h" 3
#define UNALIGNED __unaligned
#else
# 390 "C:/Msys2/mingw64/include/_mingw.h" 3
#define UNALIGNED
#endif
# 392 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif /* UNALIGNED */
# 393 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CRT_ALIGN
#ifdef  _MSC_VER
#define _CRT_ALIGN(x) __declspec(align(x))
#else /* __GNUC__ */
# 398 "C:/Msys2/mingw64/include/_mingw.h" 3
#define _CRT_ALIGN(x) __attribute__ ((__aligned__ (x)))
#endif
# 400 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif /* _CRT_ALIGN */
# 401 "C:/Msys2/mingw64/include/_mingw.h" 3

#endif /* __WIDL__ */
# 403 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef __CRTDECL
#define __CRTDECL __cdecl
#endif
# 407 "C:/Msys2/mingw64/include/_mingw.h" 3

#define _ARGMAX 100

#ifndef _TRUNCATE
#define _TRUNCATE ((size_t)-1)
#endif
# 413 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef _CRT_UNUSED
#define _CRT_UNUSED(x) (void)x
#endif
# 417 "C:/Msys2/mingw64/include/_mingw.h" 3

/* MSVC defines _NATIVE_NULLPTR_SUPPORTED when nullptr is supported. We emulate it here for GCC. */
#if 0 /* disabled by -frewrite-includes */
#if __MINGW_GNUC_PREREQ(4, 6)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 420 "C:/Msys2/mingw64/include/_mingw.h" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GNUC__) && (defined(__GXX_EXPERIMENTAL_CXX0X__) || __cplusplus >= 201103L)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 421 "C:/Msys2/mingw64/include/_mingw.h" 3
#define _NATIVE_NULLPTR_SUPPORTED
#endif
# 423 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif
# 424 "C:/Msys2/mingw64/include/_mingw.h" 3

/* We are activating __USE_MINGW_ANSI_STDIO for various define indicators.
 * printf ll modifier (unsupported by msvcrt.dll) is required by C99 and C++11 standards. */
#if 0 /* disabled by -frewrite-includes */
#if (defined (_POSIX) || defined (_POSIX_SOURCE) || defined (_POSIX_C_SOURCE) \
     || defined (_ISOC99_SOURCE) \
     || (defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L && __MSVCRT_VERSION__ < 0xE00) \
     || (defined (__cplusplus) && __cplusplus >= 201103L && __MSVCRT_VERSION__ < 0xE00) \
     || defined (_XOPEN_SOURCE) || defined (_XOPEN_SOURCE_EXTENDED) \
     || defined (_GNU_SOURCE) \
     || defined (_SVID_SOURCE)) \
    && !defined(__USE_MINGW_ANSI_STDIO)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 435 "C:/Msys2/mingw64/include/_mingw.h" 3
/* Enable __USE_MINGW_ANSI_STDIO if user did _not_ specify it explicitly... */
#  define __USE_MINGW_ANSI_STDIO			1
#endif
# 438 "C:/Msys2/mingw64/include/_mingw.h" 3

/* We are defining __USE_MINGW_ANSI_STDIO as 0 or 1 */
#if 0 /* disabled by -frewrite-includes */
#if !defined(__USE_MINGW_ANSI_STDIO)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 441 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __USE_MINGW_ANSI_STDIO 0      /* was not defined so it should be 0 */
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif (__USE_MINGW_ANSI_STDIO + 0) != 0 || (1 - __USE_MINGW_ANSI_STDIO - 1) == 2
#endif
#endif /* disabled by -frewrite-includes */
#elif 1 /* evaluated by -frewrite-includes */
# 443 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __USE_MINGW_ANSI_STDIO 1      /* was defined as nonzero or empty so it should be 1 */
#else
# 445 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __USE_MINGW_ANSI_STDIO 0      /* was defined as (int)zero and non-empty so it should be 0 */
#endif
# 447 "C:/Msys2/mingw64/include/_mingw.h" 3

/* _dowildcard is an int that controls the globbing of the command line.
 * The MinGW32 (mingw.org) runtime calls it _CRT_glob, so we are adding
 * a compatibility definition here:  you can use either of _CRT_glob or
 * _dowildcard .
 * If _dowildcard is non-zero, the command line will be globbed:  *.*
 * will be expanded to be all files in the startup directory.
 * In the mingw-w64 library a _dowildcard variable is defined as being
 * 0, therefore command line globbing is DISABLED by default. To turn it
 * on and to leave wildcard command line processing MS's globbing code,
 * include a line in one of your source modules defining _dowildcard and
 * setting it to -1, like so:
 * int _dowildcard = -1;
 */
#undef  _CRT_glob
#define _CRT_glob _dowildcard


#if 0 /* disabled by -frewrite-includes */
#if defined(_MSC_VER) && !defined(_MSC_EXTENSIONS)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 466 "C:/Msys2/mingw64/include/_mingw.h" 3
#define NONAMELESSUNION		1
#endif
# 468 "C:/Msys2/mingw64/include/_mingw.h" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(NONAMELESSSTRUCT) && \
   !defined(NONAMELESSUNION)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 470 "C:/Msys2/mingw64/include/_mingw.h" 3
#define NONAMELESSUNION		1
#endif
# 472 "C:/Msys2/mingw64/include/_mingw.h" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(NONAMELESSUNION)  && \
   !defined(NONAMELESSSTRUCT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 474 "C:/Msys2/mingw64/include/_mingw.h" 3
#define NONAMELESSSTRUCT	1
#endif
# 476 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef __ANONYMOUS_DEFINED
#define __ANONYMOUS_DEFINED
#define _ANONYMOUS_UNION  __MINGW_EXTENSION
#define _ANONYMOUS_STRUCT __MINGW_EXTENSION
#ifndef NONAMELESSUNION
#define _UNION_NAME(x)
#define _STRUCT_NAME(x)
#else /* NONAMELESSUNION */
# 485 "C:/Msys2/mingw64/include/_mingw.h" 3
#define _UNION_NAME(x)  x
#define _STRUCT_NAME(x) x
#endif
# 488 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif	/* __ANONYMOUS_DEFINED */
# 489 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef DUMMYUNIONNAME
# ifdef NONAMELESSUNION
#  define DUMMYUNIONNAME  u
#  define DUMMYUNIONNAME1 u1	/* Wine uses this variant */
#  define DUMMYUNIONNAME2 u2
#  define DUMMYUNIONNAME3 u3
#  define DUMMYUNIONNAME4 u4
#  define DUMMYUNIONNAME5 u5
#  define DUMMYUNIONNAME6 u6
#  define DUMMYUNIONNAME7 u7
#  define DUMMYUNIONNAME8 u8
#  define DUMMYUNIONNAME9 u9
# else /* NONAMELESSUNION */
# 503 "C:/Msys2/mingw64/include/_mingw.h" 3
#  define DUMMYUNIONNAME
#  define DUMMYUNIONNAME1	/* Wine uses this variant */
#  define DUMMYUNIONNAME2
#  define DUMMYUNIONNAME3
#  define DUMMYUNIONNAME4
#  define DUMMYUNIONNAME5
#  define DUMMYUNIONNAME6
#  define DUMMYUNIONNAME7
#  define DUMMYUNIONNAME8
#  define DUMMYUNIONNAME9
# endif
# 514 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif	/* DUMMYUNIONNAME */
# 515 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef DUMMYSTRUCTNAME
# ifdef NONAMELESSUNION
#  define DUMMYSTRUCTNAME  s
#  define DUMMYSTRUCTNAME1 s1	/* Wine uses this variant */
#  define DUMMYSTRUCTNAME2 s2
#  define DUMMYSTRUCTNAME3 s3
#  define DUMMYSTRUCTNAME4 s4
#  define DUMMYSTRUCTNAME5 s5
# else
# 525 "C:/Msys2/mingw64/include/_mingw.h" 3
#  define DUMMYSTRUCTNAME
#  define DUMMYSTRUCTNAME1	/* Wine uses this variant */
#  define DUMMYSTRUCTNAME2
#  define DUMMYSTRUCTNAME3
#  define DUMMYSTRUCTNAME4
#  define DUMMYSTRUCTNAME5
# endif
# 532 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif /* DUMMYSTRUCTNAME */
# 533 "C:/Msys2/mingw64/include/_mingw.h" 3


/* Macros for __uuidof template-based emulation */
#if 0 /* disabled by -frewrite-includes */
#if defined(__cplusplus) && (USE___UUIDOF == 0)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 537 "C:/Msys2/mingw64/include/_mingw.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __cpp_constexpr >= 200704l && __cpp_inline_variables >= 201606L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 539 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __CRT_UUID_DECL(type,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)    \
    extern "C++" {                                               \
    template<> struct __mingw_uuidof_s<type> {                   \
        static constexpr IID __uuid_inst = {                     \
            l,w1,w2, {b1,b2,b3,b4,b5,b6,b7,b8}                   \
        };                                                       \
    };                                                           \
    template<> constexpr const GUID &__mingw_uuidof<type>() {    \
        return __mingw_uuidof_s<type>::__uuid_inst;              \
    }                                                            \
    template<> constexpr const GUID &__mingw_uuidof<type*>() {   \
        return  __mingw_uuidof_s<type>::__uuid_inst;             \
    }                                                            \
    }
#else
# 554 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __CRT_UUID_DECL(type,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)           \
    extern "C++" {                                                      \
    template<> inline const GUID &__mingw_uuidof<type>() {              \
        static const IID __uuid_inst = {l,w1,w2, {b1,b2,b3,b4,b5,b6,b7,b8}}; \
        return __uuid_inst;                                             \
    }                                                                   \
    template<> inline const GUID &__mingw_uuidof<type*>() {             \
        return __mingw_uuidof<type>();                                  \
    }                                                                   \
    }
#endif
# 565 "C:/Msys2/mingw64/include/_mingw.h" 3

#define __uuidof(type) __mingw_uuidof<__typeof(type)>()

#else
# 569 "C:/Msys2/mingw64/include/_mingw.h" 3

#define __CRT_UUID_DECL(type,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#endif
# 573 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifdef __cplusplus
extern "C" {
#endif
# 577 "C:/Msys2/mingw64/include/_mingw.h" 3


#ifdef __MINGW_INTRIN_INLINE
#ifdef __has_builtin
#define __MINGW_DEBUGBREAK_IMPL !__has_builtin(__debugbreak)
#else
# 583 "C:/Msys2/mingw64/include/_mingw.h" 3
#define __MINGW_DEBUGBREAK_IMPL 1
#endif
# 585 "C:/Msys2/mingw64/include/_mingw.h" 3
#if 0 /* disabled by -frewrite-includes */
#if __MINGW_DEBUGBREAK_IMPL == 1
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 586 "C:/Msys2/mingw64/include/_mingw.h" 3
void __cdecl __debugbreak(void);
__MINGW_INTRIN_INLINE void __cdecl __debugbreak(void)
{
#if 0 /* disabled by -frewrite-includes */
#if defined(__i386__) || defined(__x86_64__)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 590 "C:/Msys2/mingw64/include/_mingw.h" 3
  __asm__ __volatile__("int {$}3":);
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(__arm__)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 592 "C:/Msys2/mingw64/include/_mingw.h" 3
  __asm__ __volatile__("udf #0xfe");
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(__aarch64__)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 594 "C:/Msys2/mingw64/include/_mingw.h" 3
  __asm__ __volatile__("brk #0xf000");
#else
# 596 "C:/Msys2/mingw64/include/_mingw.h" 3
  __asm__ __volatile__("unimplemented");
#endif
# 598 "C:/Msys2/mingw64/include/_mingw.h" 3
}
#endif
# 600 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif
# 601 "C:/Msys2/mingw64/include/_mingw.h" 3

/* mingw-w64 specific functions: */
const char *__mingw_get_crt_info (void);

#ifdef __cplusplus
}
#endif
# 608 "C:/Msys2/mingw64/include/_mingw.h" 3

#endif /* _INC__MINGW_H */
# 610 "C:/Msys2/mingw64/include/_mingw.h" 3

#ifndef MINGW_SDK_INIT
#define MINGW_SDK_INIT

/* for backward compatibility */
#ifndef MINGW_HAS_SECURE_API
#define MINGW_HAS_SECURE_API 1
#endif
# 618 "C:/Msys2/mingw64/include/_mingw.h" 3

#define __STDC_SECURE_LIB__ 200411L
#define __GOT_SECURE_LIB__ __STDC_SECURE_LIB__

#ifndef __WIDL__
#if 0 /* expanded by -frewrite-includes */
#include "sdks/_mingw_ddk.h"
#endif /* expanded by -frewrite-includes */
# 623 "C:/Msys2/mingw64/include/_mingw.h" 3
# 624 "C:/Msys2/mingw64/include/_mingw.h" 3
#endif
# 625 "C:/Msys2/mingw64/include/_mingw.h" 3

#endif /* MINGW_SDK_INIT */
# 627 "C:/Msys2/mingw64/include/_mingw.h" 3
# 11 "C:/Msys2/mingw64/include/corecrt.h" 2 3

#ifndef __WIDL__
#undef _CRT_PACKING
#define _CRT_PACKING 8
#pragma pack(push,_CRT_PACKING)
#endif
# 17 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifdef __ERRCODE_DEFINED_MS
/* #define __ERRCODE_DEFINED_MS */
typedef int errcode;
#endif
# 22 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifndef _CRTNOALIAS
#define _CRTNOALIAS
#endif
# 26 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifndef _CRTRESTRICT
#define _CRTRESTRICT
#endif
# 30 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
#undef size_t
#ifdef _WIN64
__MINGW_EXTENSION typedef unsigned __int64 size_t;
#else
# 37 "C:/Msys2/mingw64/include/corecrt.h" 3
typedef unsigned int size_t;
#endif /* _WIN64 */
# 39 "C:/Msys2/mingw64/include/corecrt.h" 3
#endif /* _SIZE_T_DEFINED */
# 40 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifndef _SSIZE_T_DEFINED
#define _SSIZE_T_DEFINED
#undef ssize_t
#ifdef _WIN64
__MINGW_EXTENSION typedef __int64 ssize_t;
#else
# 47 "C:/Msys2/mingw64/include/corecrt.h" 3
typedef int ssize_t;
#endif /* _WIN64 */
# 49 "C:/Msys2/mingw64/include/corecrt.h" 3
#endif /* _SSIZE_T_DEFINED */
# 50 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifndef _RSIZE_T_DEFINED
typedef size_t rsize_t;
#define _RSIZE_T_DEFINED
#endif
# 55 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifndef _INTPTR_T_DEFINED
#define _INTPTR_T_DEFINED
#ifndef __intptr_t_defined
#define __intptr_t_defined
#undef intptr_t
#ifdef _WIN64
__MINGW_EXTENSION typedef __int64 intptr_t;
#else
# 64 "C:/Msys2/mingw64/include/corecrt.h" 3
typedef int intptr_t;
#endif /* _WIN64 */
# 66 "C:/Msys2/mingw64/include/corecrt.h" 3
#endif /* __intptr_t_defined */
# 67 "C:/Msys2/mingw64/include/corecrt.h" 3
#endif /* _INTPTR_T_DEFINED */
# 68 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifndef _UINTPTR_T_DEFINED
#define _UINTPTR_T_DEFINED
#ifndef __uintptr_t_defined
#define __uintptr_t_defined
#undef uintptr_t
#ifdef _WIN64
__MINGW_EXTENSION typedef unsigned __int64 uintptr_t;
#else
# 77 "C:/Msys2/mingw64/include/corecrt.h" 3
typedef unsigned int uintptr_t;
#endif /* _WIN64 */
# 79 "C:/Msys2/mingw64/include/corecrt.h" 3
#endif /* __uintptr_t_defined */
# 80 "C:/Msys2/mingw64/include/corecrt.h" 3
#endif /* _UINTPTR_T_DEFINED */
# 81 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifndef _PTRDIFF_T_DEFINED
#define _PTRDIFF_T_DEFINED
#ifndef _PTRDIFF_T_
#define _PTRDIFF_T_
#undef ptrdiff_t
#ifdef _WIN64
__MINGW_EXTENSION typedef __int64 ptrdiff_t;
#else
# 90 "C:/Msys2/mingw64/include/corecrt.h" 3
typedef int ptrdiff_t;
#endif /* _WIN64 */
# 92 "C:/Msys2/mingw64/include/corecrt.h" 3
#endif /* _PTRDIFF_T_ */
# 93 "C:/Msys2/mingw64/include/corecrt.h" 3
#endif /* _PTRDIFF_T_DEFINED */
# 94 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifndef _WCHAR_T_DEFINED
#define _WCHAR_T_DEFINED
#if 0 /* disabled by -frewrite-includes */
#if !defined(__cplusplus) && !defined(__WIDL__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 98 "C:/Msys2/mingw64/include/corecrt.h" 3
typedef unsigned short wchar_t;
#endif /* C++ */
# 100 "C:/Msys2/mingw64/include/corecrt.h" 3
#endif /* _WCHAR_T_DEFINED */
# 101 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifndef _WCTYPE_T_DEFINED
#define _WCTYPE_T_DEFINED
#ifndef _WINT_T
#define _WINT_T
typedef unsigned short wint_t;
typedef unsigned short wctype_t;
#endif /* _WINT_T */
# 109 "C:/Msys2/mingw64/include/corecrt.h" 3
#endif /* _WCTYPE_T_DEFINED */
# 110 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifndef _ERRCODE_DEFINED
#define _ERRCODE_DEFINED
typedef int errno_t;
#endif
# 115 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifndef _TIME32_T_DEFINED
#define _TIME32_T_DEFINED
typedef long __time32_t;
#endif
# 120 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifndef _TIME64_T_DEFINED
#define _TIME64_T_DEFINED
__MINGW_EXTENSION typedef __int64 __time64_t;
#endif /* _TIME64_T_DEFINED */
# 125 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifdef _USE_32BIT_TIME_T
#ifdef _WIN64
#error You cannot use 32-bit time_t (_USE_32BIT_TIME_T) with _WIN64
#undef _USE_32BIT_TIME_T
#endif
# 131 "C:/Msys2/mingw64/include/corecrt.h" 3
#endif /* _USE_32BIT_TIME_T */
# 132 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifndef _TIME_T_DEFINED
#define _TIME_T_DEFINED
#ifdef _USE_32BIT_TIME_T
typedef __time32_t time_t;
#else
# 138 "C:/Msys2/mingw64/include/corecrt.h" 3
typedef __time64_t time_t;
#endif
# 140 "C:/Msys2/mingw64/include/corecrt.h" 3
#endif /* _TIME_T_DEFINED */
# 141 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifndef _CRT_SECURE_CPP_NOTHROW
#define _CRT_SECURE_CPP_NOTHROW throw()
#endif
# 145 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifndef __CRTDECL
#if 0 /* disabled by -frewrite-includes */
#if !defined(__cplusplus) && defined(__GNUC__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 148 "C:/Msys2/mingw64/include/corecrt.h" 3
#define __CRTDECL __cdecl __attribute__ ((__unused__))
#else
# 150 "C:/Msys2/mingw64/include/corecrt.h" 3
#define __CRTDECL __cdecl
#endif
# 152 "C:/Msys2/mingw64/include/corecrt.h" 3
#endif
# 153 "C:/Msys2/mingw64/include/corecrt.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__cplusplus) && _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 155 "C:/Msys2/mingw64/include/corecrt.h" 3

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(__ret,__func,__dsttype,__dst) \
  extern "C++" { \
    template <size_t __size> \
    inline __ret __cdecl __func(__dsttype (&__dst)[__size]) { \
        return __func(__dst,__size); \
    } \
  }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(__ret,__func,__dsttype,__dst,__type1,__arg1) \
  extern "C++" {\
    template <size_t __size> \
    inline __ret __cdecl __func(__dsttype (&__dst)[__size], __type1 __arg1) { \
        return __func(__dst,__size,__arg1);  \
    }\
  }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(__ret,__func,__dsttype,__dst,__type1,__arg1,__type2,__arg2)\
  extern "C++" {\
    template <size_t __size> inline\
    __ret __cdecl __func(__dsttype (&__dst)[__size], __type1 __arg1, __type2 __arg2) { \
        return __func(__dst,__size,__arg1,__arg2);  \
    }\
  }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(__ret,__func,__dsttype,__dst,__type1,__arg1,__type2,__arg2,__type3,__arg3) \
  extern "C++" { \
    template <size_t __size> inline \
    __ret __cdecl __func(__dsttype (&__dst)[__size], __type1 __arg1, __type2 __arg2, __type3 __arg3) { \
        return __func(__dst,__size,__arg1,__arg2,__arg3); \
    }\
  }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(__ret,__func,__dsttype,__dst,__type1,__arg1,__type2,__arg2,__type3,__arg3,__type4,__arg4) \
  extern "C++" { \
    template <size_t __size> inline \
    __ret __cdecl __func(__dsttype (&__dst)[__size], __type1 __arg1, __type2 __arg2, __type3 __arg3, __type4 __arg4) { \
        return __func(__dst,__size,__arg1,__arg2,__arg3,__arg4); \
    }\
  }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(__ret,__func,__type0,__arg0,__dsttype,__dst,__type1,__arg1) \
  extern "C++" { \
    template <size_t __size> inline \
      __ret __cdecl __func(__type0 __arg0, __dsttype (&__dst)[__size], __type1 __arg1) { \
      return __func(__arg0, __dst, __size, __arg1); \
    } \
  }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(__ret,__func,__type0,__arg0,__dsttype,__dst,__type1,__arg1,__type2,__arg2) \
  extern "C++" { \
    template <size_t __size> inline \
    __ret __cdecl __func(__type0 __arg0, __dsttype (&__dst)[__size], __type1 __arg1, __type2 __arg2) { \
      return __func(__arg0, __dst, __size, __arg1, __arg2); \
    } \
  }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(__ret,__func,__type0,__arg0,__dsttype,__dst,__type1,__arg1,__type2,__arg2,__type3,__arg3) \
  extern "C++" { \
    template <size_t __size> inline \
      __ret __cdecl __func(__type0 __arg0, __dsttype (&__dst)[__size], __type1 __arg1, __type2 __arg2, __type3 __arg3) { \
      return __func(__arg0, __dst, __size, __arg1, __arg2, __arg3); \
    } \
  }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_2_0(__ret,__func,__type1,__arg1,__type2,__arg2,__dsttype,__dst) \
  extern "C++" { \
    template <size_t __size> inline \
    __ret __cdecl __func(__type1 __arg1, __type2 __arg2, __dsttype (&__dst)[__size]) { \
      return __func(__arg1, __arg2, __dst, __size); \
    } \
  }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(__ret,__func,__vfunc,__dsttype,__dst,__type1,__arg1) \
  extern "C++" {\
    template <size_t __size> \
    inline __ret __cdecl __func(__dsttype (&__dst)[__size], __type1 __arg1, ...) { \
      va_list __vaargs; \
      _crt_va_start(__vaargs, __arg1); \
      __ret __retval = __vfunc(__dst,__size,__arg1,__vaargs); \
      _crt_va_end(__vaargs); \
      return __retval; \
    }\
  }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(__ret,__func,__vfunc,__dsttype,__dst,__type1,__arg1,__type2,__arg2) \
  extern "C++" {\
    template <size_t __size> \
    inline __ret __cdecl __func(__dsttype (&__dst)[__size], __type1 __arg1, __type2 __arg2, ...) { \
      va_list __vaargs; \
      _crt_va_start(__vaargs, __arg2); \
      __ret __retval = __vfunc(__dst,__size,__arg1,__arg2,__vaargs); \
      _crt_va_end(__vaargs); \
      return __retval; \
    }\
  }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(__ret,__func,__dsttype,__src) \
  extern "C++" { \
    template <size_t __drive_size, size_t __dir_size, size_t __name_size, size_t __ext_size> inline \
    __ret __cdecl __func(const __dsttype *__src, __dsttype (&__drive)[__drive_size], __dsttype (&__dir)[__dir_size], __dsttype (&__name)[__name_size], __dsttype (&__ext)[__ext_size]) { \
        return __func(__src, __drive, __drive_size, __dir, __dir_size, __name, __name_size, __ext, __ext_size); \
    } \
  }

#else
# 261 "C:/Msys2/mingw64/include/corecrt.h" 3

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(__ret,__func,__dsttype,__dst)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(__ret,__func,__dsttype,__dst,__type1,__arg1)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(__ret,__func,__dsttype,__dst,__type1,__arg1,__type2,__arg2)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(__ret,__func,__dsttype,__dst,__type1,__arg1,__type2,__arg2,__type3,__arg3)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(__ret,__func,__dsttype,__dst,__type1,__arg1,__type2,__arg2,__type3,__arg3,__type4,__arg4)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(__ret,__func,__type0,__arg0,__dsttype,__dst,__type1,__arg1)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(__ret,__func,__type0,__arg0,__dsttype,__dst,__type1,__arg1,__type2,__arg2)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(__ret,__func,__type0,__arg0,__dsttype,__dst,__type1,__arg1,__type2,__arg2,__type3,__arg3)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_2_0(__ret,__func,__type1,__arg1,__type2,__arg2,__dsttype,__dst)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(__ret,__func,__vfunc,__dsttype,__dst,__type1,__arg1)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(__ret,__func,__vfunc,__dsttype,__dst,__type1,__arg1,__type2,__arg2)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(__ret,__func,__dsttype,__src)

#endif
# 276 "C:/Msys2/mingw64/include/corecrt.h" 3

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(__ret_type, __ret_policy, __decl_spec, __func_name, __func_name##_s, __dst_attr, __dst_type, __dst)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(__ret_type, __ret_policy, __decl_spec, __func_name, __func_name##_s, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(__ret_type, __ret_policy, __decl_spec, __func_name, __func_name##_s, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(__ret_type, __ret_policy, __decl_spec, __func_name, __func_name##_s, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4(__ret_type, __ret_policy, __decl_spec, __name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3, __arg4_type, __arg4) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(__ret_type, __ret_policy, __decl_spec, __func_name, __func_name##_s, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3, __arg4_type, __arg4)

#if 0 /* disabled by -frewrite-includes */
#if defined(__cplusplus) && _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 289 "C:/Msys2/mingw64/include/corecrt.h" 3

#define __RETURN_POLICY_SAME(__func_call, __dst) return (__func_call)
#define __RETURN_POLICY_DST(__func_call, __dst) return ((__func_call) == 0 ? __dst : 0)
#define __RETURN_POLICY_VOID(__func_call, __dst) (__func_call); return
#define __EMPTY_DECLSPEC

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst) \
    __inline __ret_type __CRTDECL __insecure_##__name(__dst_attr __dst_type *__dst) \
    { \
        __decl_spec __ret_type __cdecl __name(__dst_type *__dst); \
        return __name(__dst); \
    } \
    extern "C++" { \
    template <typename _T> \
    inline __ret_type __CRTDECL __name(_T &__dst) _CRT_SECURE_CPP_NOTHROW { \
        return __insecure_##__name(static_cast<__dst_type*>(__dst)); \
    } \
    template <typename _T> \
    inline __ret_type __CRTDECL __name(const _T &__dst) _CRT_SECURE_CPP_NOTHROW { \
        return __insecure_##__name(static_cast<__dst_type *>(__dst)); \
    } \
    template <> \
    inline __ret_type __CRTDECL __name(__dst_type *&__dst) _CRT_SECURE_CPP_NOTHROW { \
        return __insecure_##__name(__dst); \
    } \
    template <size_t __size> \
    inline __ret_type __CRTDECL __name(__dst_type (&__dst)[__size]) _CRT_SECURE_CPP_NOTHROW { \
        __ret_policy(__sec_name(__dst, __size), __dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __sec_dst_type, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2) \
    __inline __ret_type __CRTDECL __insecure_##__name(__dst_attr __dst_type *__dst, __arg1_type __arg1, __arg2_type __arg2) \
    { \
        __decl_spec __ret_type __cdecl __name(__dst_type *__dst, __arg1_type, __arg2_type); \
        return __name(__dst, __arg1, __arg2); \
    } \
    extern "C++" { \
    template <typename _T> \
    inline __ret_type __CRTDECL __name(_T &__dst, __arg1_type __arg1, __arg2_type __arg2) _CRT_SECURE_CPP_NOTHROW { \
        return __insecure_##__name(static_cast<__dst_type*>(__dst), __arg1, __arg2); \
    } \
    template <typename _T> \
    inline __ret_type __CRTDECL __name(const _T &__dst, __arg1_type __arg1, __arg2_type __arg2) _CRT_SECURE_CPP_NOTHROW { \
        return __insecure_##__name(static_cast<__dst_type *>(__dst), __arg1, __arg2); \
    } \
    template <> \
    inline __ret_type __CRTDECL __name(__dst_type *&__dst, __arg1_type __arg1, __arg2_type __arg2) _CRT_SECURE_CPP_NOTHROW { \
        return __insecure_##__name(__dst, __arg1, __arg2); \
    } \
    template <size_t __size> \
    inline __ret_type __CRTDECL __name(__sec_dst_type (&__dst)[__size], __arg1_type __arg1, __arg2_type __arg2) _CRT_SECURE_CPP_NOTHROW { \
        __ret_policy(__sec_name(__dst, __size), __dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __sec_dst_type, __dst_attr, __dst_type, __dst, __arg1_type, __arg1) \
    __inline __ret_type __CRTDECL __insecure_##__name(__dst_attr __dst_type *__dst, __arg1_type __arg1) \
    { \
        __decl_spec __ret_type __cdecl __name(__dst_type *__dst, __arg1_type); \
        return __name(__dst, __arg1); \
    } \
    extern "C++" { \
    template <typename _T> \
    inline __ret_type __CRTDECL __name(_T &__dst, __arg1_type __arg1) _CRT_SECURE_CPP_NOTHROW { \
        return __insecure_##__name(static_cast<__dst_type*>(__dst), __arg1); \
    } \
    template <typename _T> \
    inline __ret_type __CRTDECL __name(const _T &__dst, __arg1_type __arg1) _CRT_SECURE_CPP_NOTHROW { \
        return __insecure_##__name(static_cast<__dst_type *>(__dst), __arg1); \
    } \
    template <> \
    inline __ret_type __CRTDECL __name(__dst_type *&__dst, __arg1_type __arg1) _CRT_SECURE_CPP_NOTHROW { \
        return __insecure_##__name(__dst, __arg1); \
    } \
    template <size_t __size> \
    inline __ret_type __CRTDECL __name(__sec_dst_type (&__dst)[__size], __arg1_type __arg1) _CRT_SECURE_CPP_NOTHROW { \
        __ret_policy(__sec_name(__dst, __size), __dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __sec_dst_type, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3) \
    __inline __ret_type __CRTDECL __insecure_##__name(__dst_attr __dst_type *__dst, __arg1_type __arg1, __arg2_type __arg2, __arg3_type __arg3) \
    { \
        __decl_spec __ret_type __cdecl __name(__dst_type *__dst, __arg1_type, __arg2_type, __arg3_type); \
        return __name(__dst, __arg1, __arg2, __arg3); \
    } \
    extern "C++" { \
    template <typename _T> \
    inline __ret_type __CRTDECL __name(_T &__dst, __arg1_type __arg1, __arg2_type __arg2, __arg3_type __arg3) _CRT_SECURE_CPP_NOTHROW { \
        return __insecure_##__name(static_cast<__dst_type*>(__dst), __arg1, __arg2, __arg3); \
    } \
    template <typename _T> \
    inline __ret_type __CRTDECL __name(const _T &__dst, __arg1_type __arg1, __arg2_type __arg2, __arg3_type __arg3) _CRT_SECURE_CPP_NOTHROW { \
        return __insecure_##__name(static_cast<__dst_type *>(__dst), __arg1, __arg2, __arg3); \
    } \
    template <> \
    inline __ret_type __CRTDECL __name(__dst_type *&__dst, __arg1_type __arg1, __arg2_type __arg2, __arg3_type __arg3) _CRT_SECURE_CPP_NOTHROW { \
        return __insecure_##__name(__dst, __arg1, __arg2, __arg3); \
    } \
    template <size_t __size> \
    inline __ret_type __CRTDECL __name(__sec_dst_type (&__dst)[__size], __arg1_type __arg1, __arg2_type __arg2, __arg3_type __arg3) _CRT_SECURE_CPP_NOTHROW { \
        __ret_policy(__sec_name(__dst, __size), __dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __sec_dst_type, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3, __arg4_type, __arg4) \
    __inline __ret_type __CRTDECL __insecure_##__name(__dst_attr __dst_type *__dst, __arg1_type __arg1, __arg2_type __arg2, __arg3_type __arg3, __arg4_type __arg4) \
    { \
        __decl_spec __ret_type __cdecl __name(__dst_type *__dst, __arg1_type, __arg2_type, __arg3_type, __arg4_type); \
        return __name(__dst, __arg1, __arg2, __arg3, __arg4); \
    } \
    extern "C++" { \
    template <typename _T> \
    inline __ret_type __CRTDECL __name(_T &__dst, __arg1_type __arg1, __arg2_type __arg2, __arg3_type __arg3, __arg4_type __arg4) _CRT_SECURE_CPP_NOTHROW { \
        return __insecure_##__name(static_cast<__dst_type*>(__dst), __arg1, __arg2, __arg3, __arg4); \
    } \
    template <typename _T> \
    inline __ret_type __CRTDECL __name(const _T &__dst, __arg1_type __arg1, __arg2_type __arg2, __arg3_type __arg3, __arg4_type __arg4) _CRT_SECURE_CPP_NOTHROW { \
        return __insecure_##__name(static_cast<__dst_type *>(__dst), __arg1, __arg2, __arg3, __arg4); \
    } \
    template <> \
    inline __ret_type __CRTDECL __name(__dst_type *&__dst, __arg1_type __arg1, __arg2_type __arg2, __arg3_type __arg3, __arg4_type __arg4) _CRT_SECURE_CPP_NOTHROW { \
        return __insecure_##__name(__dst, __arg1, __arg2, __arg3, __arg4); \
    } \
    template <size_t __size> \
    inline __ret_type __CRTDECL __name(__sec_dst_type (&__dst)[__size], __arg1_type __arg1, __arg2_type __arg2, __arg3_type __arg3, __arg4_type __arg4) _CRT_SECURE_CPP_NOTHROW { \
        __ret_policy(__sec_name(__dst, __size)); \
    } \
    }

#else
# 421 "C:/Msys2/mingw64/include/corecrt.h" 3

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3)
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(__ret_type, __ret_policy, __decl_spec, __name, __sec_name, __dst_attr, __dst_type, __dst, __arg1_type, __arg1, __arg2_type, __arg2, __arg3_type, __arg3, __arg4_type, __arg4)

#endif
# 429 "C:/Msys2/mingw64/include/corecrt.h" 3

struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;

#ifndef _TAGLC_ID_DEFINED
#define _TAGLC_ID_DEFINED
typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;
#endif /* _TAGLC_ID_DEFINED */
# 449 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifndef _THREADLOCALEINFO
#define _THREADLOCALEINFO
typedef struct threadlocaleinfostruct {
#ifdef _UCRT
  const unsigned short *_locale_pctype;
  int _locale_mb_cur_max;
  unsigned int _locale_lc_codepage;
#else
# 458 "C:/Msys2/mingw64/include/corecrt.h" 3
  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6];
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct lconv *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  struct __lc_time_data *lc_time_curr;
#endif
# 482 "C:/Msys2/mingw64/include/corecrt.h" 3
} threadlocinfo;
#endif /* _THREADLOCALEINFO */
# 484 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifndef __crt_typefix
#define __crt_typefix(ctype)
#endif
# 488 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifndef _CRT_USE_WINAPI_FAMILY_DESKTOP_APP
#ifdef WINAPI_FAMILY
#if 0 /* expanded by -frewrite-includes */
#include <winapifamily.h>
#endif /* expanded by -frewrite-includes */
# 491 "C:/Msys2/mingw64/include/corecrt.h" 3
# 492 "C:/Msys2/mingw64/include/corecrt.h" 3
#if 0 /* disabled by -frewrite-includes */
#if WINAPI_FAMILY_PARTITION (WINAPI_PARTITION_DESKTOP)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 493 "C:/Msys2/mingw64/include/corecrt.h" 3
#define _CRT_USE_WINAPI_FAMILY_DESKTOP_APP
#endif
# 495 "C:/Msys2/mingw64/include/corecrt.h" 3
#else /* !WINAPI_FAMILY */
# 496 "C:/Msys2/mingw64/include/corecrt.h" 3
#define _CRT_USE_WINAPI_FAMILY_DESKTOP_APP
#endif /* !WINAPI_FAMILY */
# 498 "C:/Msys2/mingw64/include/corecrt.h" 3
#endif /* _CRT_USE_WINAPI_FAMILY_DESKTOP_APP */
# 499 "C:/Msys2/mingw64/include/corecrt.h" 3

#ifndef __WIDL__
#pragma pack(pop)
#endif
# 503 "C:/Msys2/mingw64/include/corecrt.h" 3

#endif /* _INC_CORECRT */
# 505 "C:/Msys2/mingw64/include/corecrt.h" 3
# 11 "C:/Msys2/mingw64/include/corecrt_stdio_config.h" 2 3

#define _CRT_INTERNAL_PRINTF_LEGACY_VSPRINTF_NULL_TERMINATION  0x0001ULL
#define _CRT_INTERNAL_PRINTF_STANDARD_SNPRINTF_BEHAVIOR        0x0002ULL
#define _CRT_INTERNAL_PRINTF_LEGACY_WIDE_SPECIFIERS            0x0004ULL
#define _CRT_INTERNAL_PRINTF_LEGACY_MSVCRT_COMPATIBILITY       0x0008ULL
#define _CRT_INTERNAL_PRINTF_LEGACY_THREE_DIGIT_EXPONENTS      0x0010ULL

#define _CRT_INTERNAL_SCANF_SECURECRT                    0x0001ULL
#define _CRT_INTERNAL_SCANF_LEGACY_WIDE_SPECIFIERS       0x0002ULL
#define _CRT_INTERNAL_SCANF_LEGACY_MSVCRT_COMPATIBILITY  0x0004ULL

#ifndef _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS
#define _CRT_INTERNAL_LOCAL_PRINTF_OPTIONS  _CRT_INTERNAL_PRINTF_LEGACY_WIDE_SPECIFIERS
#endif
# 25 "C:/Msys2/mingw64/include/corecrt_stdio_config.h" 3

#ifndef _CRT_INTERNAL_LOCAL_SCANF_OPTIONS
#define _CRT_INTERNAL_LOCAL_SCANF_OPTIONS   _CRT_INTERNAL_SCANF_LEGACY_WIDE_SPECIFIERS
#endif
# 29 "C:/Msys2/mingw64/include/corecrt_stdio_config.h" 3

#endif /* _STDIO_CONFIG_DEFINED */
# 31 "C:/Msys2/mingw64/include/corecrt_stdio_config.h" 3
# 10 "C:/Msys2/mingw64/include/stdio.h" 2 3

#pragma pack(push,_CRT_PACKING)

#pragma push_macro("snprintf")
#undef snprintf
#pragma push_macro("vsnprintf")
#undef vsnprintf
#pragma push_macro("snwprintf")
#undef snwprintf
#pragma push_macro("vsnwprintf")
#undef vsnwprintf

#ifdef __cplusplus
extern "C" {
#endif
# 25 "C:/Msys2/mingw64/include/stdio.h" 3

#define BUFSIZ 512
#define _NFILE _NSTREAM_
#define _NSTREAM_ 512
#define _IOB_ENTRIES 20
#define EOF (-1)

#ifndef _FILE_DEFINED
  struct _iobuf {
#ifdef _UCRT
    void *_Placeholder;
#else
# 37 "C:/Msys2/mingw64/include/stdio.h" 3
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
#endif
# 46 "C:/Msys2/mingw64/include/stdio.h" 3
  };
  typedef struct _iobuf FILE;
#define _FILE_DEFINED
#endif
# 50 "C:/Msys2/mingw64/include/stdio.h" 3

#ifdef _POSIX_
#define _P_tmpdir "/"
#define _wP_tmpdir L"/"
#else
# 55 "C:/Msys2/mingw64/include/stdio.h" 3
#define _P_tmpdir "\\"
#define _wP_tmpdir L"\\"
#endif
# 58 "C:/Msys2/mingw64/include/stdio.h" 3

#define L_tmpnam (sizeof(_P_tmpdir) + 12)

#ifdef _POSIX_
#define L_ctermid 9
#define L_cuserid 32
#endif
# 65 "C:/Msys2/mingw64/include/stdio.h" 3

#define SEEK_CUR 1
#define SEEK_END 2
#define SEEK_SET 0

#define	STDIN_FILENO	0
#define	STDOUT_FILENO	1
#define	STDERR_FILENO	2

#define FILENAME_MAX 260
#define FOPEN_MAX 20
#define _SYS_OPEN 20
#define TMP_MAX 32767

#ifndef NULL
#ifdef __cplusplus
#ifndef _WIN64
#define NULL 0
#else
# 84 "C:/Msys2/mingw64/include/stdio.h" 3
#define NULL 0LL
#endif  /* W64 */
# 86 "C:/Msys2/mingw64/include/stdio.h" 3
#else
# 87 "C:/Msys2/mingw64/include/stdio.h" 3
#define NULL ((void *)0)
#endif
# 89 "C:/Msys2/mingw64/include/stdio.h" 3
#endif
# 90 "C:/Msys2/mingw64/include/stdio.h" 3

#if 0 /* expanded by -frewrite-includes */
#include <_mingw_off_t.h>
#endif /* expanded by -frewrite-includes */
# 91 "C:/Msys2/mingw64/include/stdio.h" 3
# 1 "C:/Msys2/mingw64/include/_mingw_off_t.h" 1 3
#ifndef _OFF_T_DEFINED
#define _OFF_T_DEFINED
#ifndef _OFF_T_
#define _OFF_T_
  typedef long _off_t;
#if 0 /* disabled by -frewrite-includes */
#if !defined(NO_OLDNAMES) || defined(_POSIX)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 7 "C:/Msys2/mingw64/include/_mingw_off_t.h" 3
  typedef long off32_t;
#endif
# 9 "C:/Msys2/mingw64/include/_mingw_off_t.h" 3
#endif
# 10 "C:/Msys2/mingw64/include/_mingw_off_t.h" 3

#ifndef _OFF64_T_DEFINED
#define _OFF64_T_DEFINED
  __MINGW_EXTENSION typedef long long _off64_t;
#if 0 /* disabled by -frewrite-includes */
#if !defined(NO_OLDNAMES) || defined(_POSIX)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 15 "C:/Msys2/mingw64/include/_mingw_off_t.h" 3
  __MINGW_EXTENSION typedef long long off64_t;
#endif
# 17 "C:/Msys2/mingw64/include/_mingw_off_t.h" 3
#endif /*_OFF64_T_DEFINED */
# 18 "C:/Msys2/mingw64/include/_mingw_off_t.h" 3


#ifndef _FILE_OFFSET_BITS_SET_OFFT
#define _FILE_OFFSET_BITS_SET_OFFT
#if 0 /* disabled by -frewrite-includes */
#if !defined(NO_OLDNAMES) || defined(_POSIX)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 23 "C:/Msys2/mingw64/include/_mingw_off_t.h" 3
#if 0 /* disabled by -frewrite-includes */
#if (defined(_FILE_OFFSET_BITS) && (_FILE_OFFSET_BITS == 64))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 24 "C:/Msys2/mingw64/include/_mingw_off_t.h" 3
typedef off64_t off_t;
#else
# 26 "C:/Msys2/mingw64/include/_mingw_off_t.h" 3
typedef off32_t off_t;
#endif /* #if !defined(NO_OLDNAMES) || defined(_POSIX) */
# 28 "C:/Msys2/mingw64/include/_mingw_off_t.h" 3
#endif /* (defined(_FILE_OFFSET_BITS) && (_FILE_OFFSET_BITS == 64)) */
# 29 "C:/Msys2/mingw64/include/_mingw_off_t.h" 3
#endif /* _FILE_OFFSET_BITS_SET_OFFT */
# 30 "C:/Msys2/mingw64/include/_mingw_off_t.h" 3


#endif /* _OFF_T_DEFINED */
# 33 "C:/Msys2/mingw64/include/_mingw_off_t.h" 3
# 92 "C:/Msys2/mingw64/include/stdio.h" 2 3

_CRTIMP FILE *__cdecl __acrt_iob_func(unsigned index);
#ifndef _STDIO_DEFINED
#ifdef _WIN64
  _CRTIMP FILE *__cdecl __iob_func(void);
#define _iob  __iob_func()
#else
# 99 "C:/Msys2/mingw64/include/stdio.h" 3
#ifdef _MSVCRT_
extern FILE _iob[];	/* A pointer to an array of FILE */
#define __iob_func()	(_iob)
#else
# 103 "C:/Msys2/mingw64/include/stdio.h" 3
extern FILE (* __MINGW_IMP_SYMBOL(_iob))[];	/* A pointer to an array of FILE */
#define __iob_func()	(* __MINGW_IMP_SYMBOL(_iob))
#define _iob __iob_func()
#endif
# 107 "C:/Msys2/mingw64/include/stdio.h" 3
#endif
# 108 "C:/Msys2/mingw64/include/stdio.h" 3
#endif
# 109 "C:/Msys2/mingw64/include/stdio.h" 3

#ifndef _FPOS_T_DEFINED
#define _FPOS_T_DEFINED
#undef _FPOSOFF

#if 0 /* disabled by -frewrite-includes */
#if (!defined(NO_OLDNAMES) || defined(__GNUC__))
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 115 "C:/Msys2/mingw64/include/stdio.h" 3
  __MINGW_EXTENSION typedef __int64 fpos_t;
#define _FPOSOFF(fp) ((long)(fp))
#else
# 118 "C:/Msys2/mingw64/include/stdio.h" 3
  __MINGW_EXTENSION typedef long long fpos_t;
#define _FPOSOFF(fp) ((long)(fp))
#endif
# 121 "C:/Msys2/mingw64/include/stdio.h" 3

#endif
# 123 "C:/Msys2/mingw64/include/stdio.h" 3

#ifndef _STDSTREAM_DEFINED
#define _STDSTREAM_DEFINED

#define stdin (__acrt_iob_func(0))
#define stdout (__acrt_iob_func(1))
#define stderr (__acrt_iob_func(2))
#endif
# 131 "C:/Msys2/mingw64/include/stdio.h" 3

#define _IOFBF 0x0000
#define _IOLBF 0x0040
#define _IONBF 0x0004

#ifndef _UCRT
#define _IOREAD 0x0001
#define _IOWRT 0x0002
#define _IOMYBUF 0x0008
#define _IOEOF 0x0010
#define _IOERR 0x0020
#define _IOSTRG 0x0040
#define _IORW 0x0080
#ifdef _POSIX_
#define _IOAPPEND 0x0200
#endif
# 147 "C:/Msys2/mingw64/include/stdio.h" 3
#endif
# 148 "C:/Msys2/mingw64/include/stdio.h" 3

#define _TWO_DIGIT_EXPONENT 0x1

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_LEVEL > 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 152 "C:/Msys2/mingw64/include/stdio.h" 3
__mingw_bos_declare;
#endif
# 154 "C:/Msys2/mingw64/include/stdio.h" 3

#ifndef _STDIO_DEFINED
extern
  __attribute__((__format__ (gnu_scanf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);
extern
  __attribute__((__format__ (gnu_scanf, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __mingw_scanf(const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __mingw_vscanf(const char * __restrict__ Format, va_list argp);
extern
  __attribute__((__format__ (gnu_scanf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);

extern
  __attribute__((__format__ (gnu_printf, 3, 0))) __MINGW_ATTRIB_NONNULL(3)
  int __cdecl __mingw_vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,
                               va_list _ArgList);
extern
  __attribute__((__format__ (gnu_printf, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
  int __cdecl __mingw_snprintf(char * __restrict__ s, size_t n, const char * __restrict__  format, ...);
extern
  __attribute__((__format__ (gnu_printf, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __mingw_printf(const char * __restrict__ , ... ) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (gnu_printf, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __mingw_vprintf (const char * __restrict__ , va_list) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_sprintf (char * __restrict__ , const char * __restrict__ , ...) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__((nonnull (1,2)))
  int __cdecl __mingw_asprintf(char ** __restrict__ , const char * __restrict__ , ...) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__((nonnull (1,2)))
  int __cdecl __mingw_vasprintf(char ** __restrict__ , const char * __restrict__ , va_list) __MINGW_NOTHROW;

extern
  __attribute__((__format__ (ms_scanf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (ms_scanf, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __ms_scanf(const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (ms_scanf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);

extern
  __attribute__((__format__ (ms_printf, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __ms_printf(const char * __restrict__ , ... ) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (ms_printf, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __ms_vprintf (const char * __restrict__ , va_list) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (ms_printf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (ms_printf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (ms_printf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_sprintf (char * __restrict__ , const char * __restrict__ , ...) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (ms_printf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __MINGW_NOTHROW;

#ifdef _UCRT
  int __cdecl __stdio_common_vsprintf(unsigned __int64 options, char *str, size_t len, const char *format, _locale_t locale, va_list valist);
  int __cdecl __stdio_common_vfprintf(unsigned __int64 options, FILE *file, const char *format, _locale_t locale, va_list valist);
  int __cdecl __stdio_common_vsscanf(unsigned __int64 options, const char *input, size_t length, const char *format, _locale_t locale, va_list valist);
  int __cdecl __stdio_common_vfscanf(unsigned __int64 options, FILE *file, const char *format, _locale_t locale, va_list valist);
#endif
# 242 "C:/Msys2/mingw64/include/stdio.h" 3

#undef __MINGW_PRINTF_FORMAT
#undef __MINGW_SCANF_FORMAT

#if 0 /* disabled by -frewrite-includes */
#if defined(__clang__)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 247 "C:/Msys2/mingw64/include/stdio.h" 3
#define __MINGW_PRINTF_FORMAT printf
#define __MINGW_SCANF_FORMAT  scanf
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(_UCRT) || __USE_MINGW_ANSI_STDIO
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 250 "C:/Msys2/mingw64/include/stdio.h" 3
#define __MINGW_PRINTF_FORMAT gnu_printf
#define __MINGW_SCANF_FORMAT  gnu_scanf
#else
# 253 "C:/Msys2/mingw64/include/stdio.h" 3
#define __MINGW_PRINTF_FORMAT ms_printf
#define __MINGW_SCANF_FORMAT  ms_scanf
#endif
# 256 "C:/Msys2/mingw64/include/stdio.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __USE_MINGW_ANSI_STDIO && !defined(_CRTBLD)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 258 "C:/Msys2/mingw64/include/stdio.h" 3
/*
 * User has expressed a preference for C99 conformance...
 */

#ifdef _GNU_SOURCE
__mingw_ovr
__attribute__ ((__format__ (gnu_printf, 2, 3))) __attribute__((nonnull (1,2)))
int asprintf(char **__ret, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vasprintf( __ret, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

__mingw_ovr
__attribute__ ((__format__ (gnu_printf, 2, 0))) __attribute__((nonnull (1,2)))
int vasprintf(char **__ret, const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vasprintf( __ret, __format, __local_argv );
}
#endif /* _GNU_SOURCE */
# 281 "C:/Msys2/mingw64/include/stdio.h" 3

/* There seems to be a bug about builtins and static overrides of them
   in g++.  So we need to do here some trickery.  */
#ifdef __cplusplus
extern "C++" {
#endif
# 287 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_ovr
__attribute__((__format__ (gnu_scanf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
int sscanf(const char *__source, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vsscanf( __source, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

__mingw_ovr
__attribute__((__format__ (gnu_scanf, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
int scanf(const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfscanf( stdin, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

__mingw_ovr
__attribute__((__format__ (gnu_scanf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
int fscanf(FILE *__stream, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfscanf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

#ifndef __NO_ISOCEXT  /* externs in libmingwex.a */
#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"
#endif
# 326 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_ovr
__attribute__((__format__ (gnu_scanf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
int vsscanf (const char *__source, const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vsscanf( __source, __format, __local_argv );
}

__mingw_ovr
__attribute__((__format__ (gnu_scanf, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
int vscanf(const char *__format,  __builtin_va_list __local_argv)
{
  return __mingw_vfscanf( stdin, __format, __local_argv );
}

__mingw_ovr
__attribute__((__format__ (gnu_scanf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
int vfscanf (FILE *__stream,  const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfscanf( __stream, __format, __local_argv );
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif
# 351 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* __NO_ISOCEXT */
# 352 "C:/Msys2/mingw64/include/stdio.h" 3



__mingw_ovr
__attribute__((__format__ (gnu_printf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
int fprintf (FILE *__stream, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfprintf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

__mingw_ovr
__attribute__((__format__ (gnu_printf, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
int printf (const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfprintf( stdout, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_VA_ARG
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 378 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_bos_ovr
__attribute__((__format__ (gnu_printf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
int sprintf (char *__stream, const char *__format, ...)
{
  if (__mingw_bos_known(__stream)) {
    int __retval = __mingw_snprintf( __stream, __mingw_bos(__stream, 1), __format, __builtin_va_arg_pack() );
    if (__retval >= 0)
      __mingw_bos_ptr_chk(__stream, (size_t)__retval + 1, 1);
    return __retval;
  }
  return __mingw_sprintf( __stream, __format, __builtin_va_arg_pack() );
}

#else /* !__MINGW_FORTIFY_VA_ARG */
# 393 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_ovr
__attribute__((__format__ (gnu_printf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
int sprintf (char *__stream, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vsprintf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

#endif /* __MINGW_FORTIFY_VA_ARG */
# 406 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_ovr
__attribute__((__format__ (gnu_printf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
int vfprintf (FILE *__stream, const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfprintf( __stream, __format, __local_argv );
}

__mingw_ovr
__attribute__((__format__ (gnu_printf, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
int vprintf (const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfprintf( stdout, __format, __local_argv );
}

__mingw_bos_ovr
__attribute__((__format__ (gnu_printf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
int vsprintf (char *__stream, const char *__format, __builtin_va_list __local_argv)
{
#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_LEVEL > 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 426 "C:/Msys2/mingw64/include/stdio.h" 3
  if (__mingw_bos_known(__stream)) {
    int __retval = __mingw_vsnprintf( __stream, __mingw_bos(__stream, 1), __format, __local_argv );
    if (__retval >= 0)
      __mingw_bos_ptr_chk(__stream, (size_t)__retval + 1, 1);
    return __retval;
  }
#endif
# 433 "C:/Msys2/mingw64/include/stdio.h" 3
  return __mingw_vsprintf( __stream, __format, __local_argv );
}
/* #ifndef __NO_ISOCEXT */  /* externs in libmingwex.a */

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_VA_ARG
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 438 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_bos_ovr
__attribute__((__format__ (gnu_printf, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
int snprintf (char *__stream, size_t __n, const char *__format, ...)
{
  __mingw_bos_ptr_chk_warn(__stream, __n, 1);
  return __mingw_snprintf( __stream, __n, __format, __builtin_va_arg_pack() );
}

#else /* !__MINGW_FORTIFY_VA_ARG */
# 448 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_ovr
__attribute__((__format__ (gnu_printf, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
int snprintf (char *__stream, size_t __n, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vsnprintf( __stream, __n, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

#endif /* __MINGW_FORTIFY_VA_ARG */
# 461 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_bos_ovr
__attribute__((__format__ (gnu_printf, 3, 0))) __MINGW_ATTRIB_NONNULL(3)
int vsnprintf (char *__stream, size_t __n, const char *__format, __builtin_va_list __local_argv)
{
#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_LEVEL > 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 467 "C:/Msys2/mingw64/include/stdio.h" 3
  __mingw_bos_ptr_chk_warn(__stream, __n, 1);
#endif
# 469 "C:/Msys2/mingw64/include/stdio.h" 3
  return __mingw_vsnprintf( __stream, __n, __format, __local_argv );
}

/* Override __builtin_printf-routines ... Kludge for libstdc++ ...*/
#define __builtin_vsnprintf __mingw_vsnprintf
#define __builtin_vsprintf __mingw_vsprintf

/* #endif */ /* __NO_ISOCEXT */

#ifdef __cplusplus
}
#endif
# 481 "C:/Msys2/mingw64/include/stdio.h" 3

#else /* !__USE_MINGW_ANSI_STDIO */
# 483 "C:/Msys2/mingw64/include/stdio.h" 3

#undef __builtin_vsnprintf
#undef __builtin_vsprintf

/*
 * Default configuration: simply direct all calls to MSVCRT...
 */
#ifdef _UCRT
#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"
#endif
# 495 "C:/Msys2/mingw64/include/stdio.h" 3
  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl fprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl printf(const char * __restrict__ _Format,...);
  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl sprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;

  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl vfprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,va_list _ArgList);
  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl vprintf(const char * __restrict__ _Format,va_list _ArgList);
  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl vsprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,va_list _Args) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;

  __MINGW_ATTRIB_DEPRECATED_SEC_WARN
  __attribute__((__format__ (__MINGW_SCANF_FORMAT, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
  __MINGW_ATTRIB_DEPRECATED_SEC_WARN
  __attribute__((__format__ (__MINGW_SCANF_FORMAT, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl scanf(const char * __restrict__ _Format,...);
  __MINGW_ATTRIB_DEPRECATED_SEC_WARN
  __attribute__((__format__ (__MINGW_SCANF_FORMAT, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...);
#ifdef _GNU_SOURCE
  __attribute__ ((__format__ (__MINGW_PRINTF_FORMAT, 2, 0)))
  int __cdecl vasprintf(char ** __restrict__ _Ret,const char * __restrict__ _Format,va_list _Args);
  __attribute__ ((__format__ (__MINGW_PRINTF_FORMAT, 2, 3)))
  int __cdecl asprintf(char ** __restrict__ _Ret,const char * __restrict__ _Format,...);
#endif /*_GNU_SOURCE*/
# 524 "C:/Msys2/mingw64/include/stdio.h" 3

  __attribute__((__format__ (__MINGW_SCANF_FORMAT, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int vfscanf (FILE *__stream,  const char *__format, __builtin_va_list __local_argv);

  __attribute__((__format__ (__MINGW_SCANF_FORMAT, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int vsscanf (const char * __restrict__ __source, const char * __restrict__ __format, __builtin_va_list __local_argv);
  __attribute__((__format__ (__MINGW_SCANF_FORMAT, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
  int vscanf(const char *__format,  __builtin_va_list __local_argv);

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif
# 536 "C:/Msys2/mingw64/include/stdio.h" 3

#else
# 538 "C:/Msys2/mingw64/include/stdio.h" 3
  __attribute__((__format__ (ms_printf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl fprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
  __attribute__((__format__ (ms_printf, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl printf(const char * __restrict__ _Format,...);
  __attribute__((__format__ (ms_printf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl sprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;

  __attribute__((__format__ (ms_printf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl vfprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,va_list _ArgList);
  __attribute__((__format__ (ms_printf, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl vprintf(const char * __restrict__ _Format,va_list _ArgList);
  __attribute__((__format__ (ms_printf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl vsprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,va_list _Args) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;

  __attribute__((__format__ (ms_scanf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  __attribute__((__format__ (ms_scanf, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl scanf(const char * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  __attribute__((__format__ (ms_scanf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
#ifdef _GNU_SOURCE
  int __cdecl vasprintf(char ** __restrict__ __ret,const char * __restrict__ __format,va_list __ap)  __attribute__ ((format (__MINGW_PRINTF_FORMAT, 2, 0)));
  int __cdecl asprintf(char ** __restrict__ __ret,const char * __restrict__ __format,...) __attribute__ ((format (__MINGW_PRINTF_FORMAT, 2, 3)));
#endif /*_GNU_SOURCE*/
# 562 "C:/Msys2/mingw64/include/stdio.h" 3
#ifndef __NO_ISOCEXT  /* externs in libmingwex.a */
#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"
#endif
# 567 "C:/Msys2/mingw64/include/stdio.h" 3

  __attribute__((__format__ (ms_scanf, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __ms_vscanf(const char * __restrict__ Format, va_list argp);
  __attribute__((__format__ (ms_scanf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);
  __attribute__((__format__ (ms_scanf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);

  __mingw_ovr
  __attribute__((__format__ (ms_scanf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int vfscanf (FILE *__stream,  const char *__format, __builtin_va_list __local_argv)
  {
    return __ms_vfscanf (__stream, __format, __local_argv);
  }

  __mingw_ovr
  __attribute__((__format__ (ms_scanf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int vsscanf (const char * __restrict__ __source, const char * __restrict__ __format, __builtin_va_list __local_argv)
  {
    return __ms_vsscanf( __source, __format, __local_argv );
  }
  __mingw_ovr
  __attribute__((__format__ (ms_scanf, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
  int vscanf(const char *__format,  __builtin_va_list __local_argv)
  {
    return __ms_vscanf (__format, __local_argv);
  }

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif
# 598 "C:/Msys2/mingw64/include/stdio.h" 3

#endif /* __NO_ISOCEXT */
# 600 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* _UCRT */
# 601 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* __USE_MINGW_ANSI_STDIO */
# 602 "C:/Msys2/mingw64/include/stdio.h" 3

  _CRTIMP int __cdecl _filbuf(FILE *_File);
  _CRTIMP int __cdecl _flsbuf(int _Ch,FILE *_File);
#ifdef _POSIX_
  _CRTIMP FILE *__cdecl _fsopen(const char *_Filename,const char *_Mode);
#else
# 608 "C:/Msys2/mingw64/include/stdio.h" 3
  _CRTIMP FILE *__cdecl _fsopen(const char *_Filename,const char *_Mode,int _ShFlag);
#endif
# 610 "C:/Msys2/mingw64/include/stdio.h" 3
  void __cdecl clearerr(FILE *_File);
  int __cdecl fclose(FILE *_File);
  _CRTIMP int __cdecl _fcloseall(void);
#ifdef _POSIX_
  FILE *__cdecl fdopen(int _FileHandle,const char *_Mode) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
#else
# 616 "C:/Msys2/mingw64/include/stdio.h" 3
  _CRTIMP FILE *__cdecl _fdopen(int _FileHandle,const char *_Mode);
#endif
# 618 "C:/Msys2/mingw64/include/stdio.h" 3
  int __cdecl feof(FILE *_File);
  int __cdecl ferror(FILE *_File);
  int __cdecl fflush(FILE *_File);
  int __cdecl fgetc(FILE *_File);
  _CRTIMP int __cdecl _fgetchar(void);
  int __cdecl fgetpos(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos); /* 64bit only, no 32bit version */
  int __cdecl fgetpos64(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos); /* fgetpos already 64bit */
  char *__cdecl fgets(char * __restrict__ _Buf,int _MaxCount,FILE * __restrict__ _File);
  _CRTIMP int __cdecl _fileno(FILE *_File);
#ifdef _POSIX_
  int __cdecl fileno(FILE *_File) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
#endif
# 630 "C:/Msys2/mingw64/include/stdio.h" 3
  _CRTIMP char *__cdecl _tempnam(const char *_DirName,const char *_FilePrefix);
  _CRTIMP int __cdecl _flushall(void);
  FILE *__cdecl fopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  FILE *fopen64(const char * __restrict__ filename,const char * __restrict__  mode);
  int __cdecl fputc(int _Ch,FILE *_File);
  _CRTIMP int __cdecl _fputchar(int _Ch);
  int __cdecl fputs(const char * __restrict__ _Str,FILE * __restrict__ _File);
  size_t __cdecl fread(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  FILE *__cdecl freopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode,FILE * __restrict__ _File) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  int __cdecl fsetpos(FILE *_File,const fpos_t *_Pos);
  int __cdecl fsetpos64(FILE *_File,const fpos_t *_Pos); /* fsetpos already 64bit */
  int __cdecl fseek(FILE *_File,long _Offset,int _Origin);
  long __cdecl ftell(FILE *_File);

  /* Shouldn't be any fseeko32 in glibc, 32bit to 64bit casting should be fine */
  /* int fseeko32(FILE* stream, _off_t offset, int whence);*/ /* fseeko32 redirects to fseeko64 */
  _CRTIMP int __cdecl _fseeki64(FILE *_File,__int64 _Offset,int _Origin);
  _CRTIMP __int64 __cdecl _ftelli64(FILE *_File);
#ifdef _UCRT
  __mingw_static_ovr int fseeko(FILE *_File, _off_t _Offset, int _Origin) {
    return fseek(_File, _Offset, _Origin);
  }
  __mingw_static_ovr int fseeko64(FILE *_File, _off64_t _Offset, int _Origin) {
    return _fseeki64(_File, _Offset, _Origin);
  }
  __mingw_static_ovr _off_t ftello(FILE *_File) {
    return ftell(_File);
  }
  __mingw_static_ovr _off64_t ftello64(FILE *_File) {
    return _ftelli64(_File);
  }
#else
# 662 "C:/Msys2/mingw64/include/stdio.h" 3
  int fseeko64(FILE* stream, _off64_t offset, int whence);
  int fseeko(FILE* stream, _off_t offset, int whence);
  /* Returns truncated 64bit off_t */
  _off_t ftello(FILE * stream);
  _off64_t ftello64(FILE * stream);
#endif
# 668 "C:/Msys2/mingw64/include/stdio.h" 3

#ifndef _FILE_OFFSET_BITS_SET_FSEEKO
#define _FILE_OFFSET_BITS_SET_FSEEKO
#if 0 /* disabled by -frewrite-includes */
#if (defined(_FILE_OFFSET_BITS) && (_FILE_OFFSET_BITS == 64))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 672 "C:/Msys2/mingw64/include/stdio.h" 3
#define fseeko fseeko64
#endif /* (defined(_FILE_OFFSET_BITS) && (_FILE_OFFSET_BITS == 64)) */
# 674 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* _FILE_OFFSET_BITS_SET_FSEEKO */
# 675 "C:/Msys2/mingw64/include/stdio.h" 3

#ifndef _FILE_OFFSET_BITS_SET_FTELLO
#define _FILE_OFFSET_BITS_SET_FTELLO
#if 0 /* disabled by -frewrite-includes */
#if (defined(_FILE_OFFSET_BITS) && (_FILE_OFFSET_BITS == 64))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 679 "C:/Msys2/mingw64/include/stdio.h" 3
#define ftello ftello64
#endif /* (defined(_FILE_OFFSET_BITS) && (_FILE_OFFSET_BITS == 64)) */
# 681 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* _FILE_OFFSET_BITS_SET_FTELLO */
# 682 "C:/Msys2/mingw64/include/stdio.h" 3

  size_t __cdecl fwrite(const void * __restrict__ _Str,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  int __cdecl getc(FILE *_File);
  int __cdecl getchar(void);
  _CRTIMP int __cdecl _getmaxstdio(void);
  char *__cdecl gets(char *_Buffer) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  int __cdecl _getw(FILE *_File);
#ifndef _CRT_PERROR_DEFINED
#define _CRT_PERROR_DEFINED
  void __cdecl perror(const char *_ErrMsg);
#endif
# 693 "C:/Msys2/mingw64/include/stdio.h" 3
#ifdef _CRT_USE_WINAPI_FAMILY_DESKTOP_APP
  _CRTIMP int __cdecl _pclose(FILE *_File);
  _CRTIMP FILE *__cdecl _popen(const char *_Command,const char *_Mode);
#if 0 /* disabled by -frewrite-includes */
#if !defined(NO_OLDNAMES) && !defined(popen)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 697 "C:/Msys2/mingw64/include/stdio.h" 3
#define popen	_popen
#define pclose	_pclose
#endif
# 700 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* _CRT_USE_WINAPI_FAMILY_DESKTOP_APP */
# 701 "C:/Msys2/mingw64/include/stdio.h" 3
  int __cdecl putc(int _Ch,FILE *_File);
  int __cdecl putchar(int _Ch);
  int __cdecl puts(const char *_Str);
  _CRTIMP int __cdecl _putw(int _Word,FILE *_File);
#ifndef _CRT_DIRECTORY_DEFINED
#define _CRT_DIRECTORY_DEFINED
  int __cdecl remove(const char *_Filename);
  int __cdecl rename(const char *_OldFilename,const char *_NewFilename);
  _CRTIMP int __cdecl _unlink(const char *_Filename);
#ifndef	NO_OLDNAMES
  int __cdecl unlink(const char *_Filename) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
#endif
# 713 "C:/Msys2/mingw64/include/stdio.h" 3
#endif
# 714 "C:/Msys2/mingw64/include/stdio.h" 3
  void __cdecl rewind(FILE *_File);
  _CRTIMP int __cdecl _rmtmp(void);
  void __cdecl setbuf(FILE * __restrict__ _File,char * __restrict__ _Buffer) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP int __cdecl _setmaxstdio(int _Max);
  _CRTIMP unsigned int __cdecl _set_output_format(unsigned int _Format);
  _CRTIMP unsigned int __cdecl _get_output_format(void);
  int __cdecl setvbuf(FILE * __restrict__ _File,char * __restrict__ _Buf,int _Mode,size_t _Size);
#ifdef _UCRT
  __mingw_ovr
  __MINGW_ATTRIB_PURE
  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl _scprintf(const char * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vsprintf(_CRT_INTERNAL_PRINTF_STANDARD_SNPRINTF_BEHAVIOR, NULL, 0, _Format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  __mingw_ovr __MINGW_ATTRIB_DEPRECATED_SEC_WARN
  __attribute__((__format__ (__MINGW_SCANF_FORMAT, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
  int __cdecl _snscanf(const char * __restrict__ _Src,size_t _MaxCount,const char * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vsscanf(0, _Src, _MaxCount, _Format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
#else
# 746 "C:/Msys2/mingw64/include/stdio.h" 3
  __MINGW_ATTRIB_PURE
  __attribute__((__format__ (ms_printf, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
  _CRTIMP int __cdecl _scprintf(const char * __restrict__ _Format,...);
  __attribute__((__format__ (ms_scanf, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
  _CRTIMP int __cdecl _snscanf(const char * __restrict__ _Src,size_t _MaxCount,const char * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
#endif
# 752 "C:/Msys2/mingw64/include/stdio.h" 3
  __MINGW_ATTRIB_PURE
  __attribute__((__format__ (ms_printf, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
  _CRTIMP int __cdecl _vscprintf(const char * __restrict__ _Format,va_list _ArgList);
  FILE *__cdecl tmpfile(void) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  char *__cdecl tmpnam(char *_Buffer);
  int __cdecl ungetc(int _Ch,FILE *_File);

#ifdef _UCRT
  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 3, 0))) __MINGW_ATTRIB_NONNULL(3)
  int __cdecl _vsnprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,va_list _Args) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  __mingw_ovr __MINGW_ATTRIB_DEPRECATED_SEC_WARN
  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
  int __cdecl _snprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = _vsnprintf(_Dest, _Count, _Format, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
#else
# 774 "C:/Msys2/mingw64/include/stdio.h" 3
  __attribute__((__format__ (ms_printf, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
  _CRTIMP int __cdecl _snprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  __attribute__((__format__ (ms_printf, 3, 0))) __MINGW_ATTRIB_NONNULL(3)
  _CRTIMP int __cdecl _vsnprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,va_list _Args) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
#endif
# 779 "C:/Msys2/mingw64/include/stdio.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_LEVEL > 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 781 "C:/Msys2/mingw64/include/stdio.h" 3

char * __cdecl __gets_chk(char *, size_t);
char * __cdecl __mingw_call_gets_warn(char *) __MINGW_ASM_CALL(gets)
  __attribute__((__warning__("Using gets() is always unsafe - use fgets() instead")));
char * __cdecl __mingw_call_fgets(char * __restrict__, int, FILE * __restrict__) __MINGW_ASM_CALL(fgets);
size_t __cdecl __mingw_call_fread(void * __restrict__, size_t, size_t, FILE * __restrict__) __MINGW_ASM_CALL(fread);
char * __cdecl __mingw_call_tmpnam(char *) __MINGW_ASM_CALL(tmpnam);

__mingw_bos_extern_ovr
char * gets(char * __dst)
{
  if (__mingw_bos_known(__dst))
    return __gets_chk(__dst, __mingw_bos(__dst, 1));
  return __mingw_call_gets_warn(__dst);
}

__mingw_bos_extern_ovr
char * fgets(char * __restrict__ __dst, int __n, FILE * __restrict__ __f)
{
  __mingw_bos_ptr_chk_warn(__dst, __n, 1);
  return __mingw_call_fgets(__dst, __n, __f);
}

__mingw_bos_extern_ovr
size_t fread(void * __restrict__ __dst, size_t __sz, size_t __n, FILE * __restrict__ __f)
{
  __mingw_bos_ptr_chk_warn(__dst, __sz * __n, 0);
  return __mingw_call_fread(__dst, __sz, __n, __f);
}

__mingw_bos_extern_ovr
char * tmpnam(char * __dst)
{
  __mingw_bos_ptr_chk_warn(__dst, L_tmpnam, 1);
  return __mingw_call_tmpnam(__dst);
}

#endif /* __MINGW_FORTIFY_LEVEL > 0 */
# 819 "C:/Msys2/mingw64/include/stdio.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __USE_MINGW_ANSI_STDIO == 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 821 "C:/Msys2/mingw64/include/stdio.h" 3

#ifdef _UCRT
#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"
#endif
# 827 "C:/Msys2/mingw64/include/stdio.h" 3
  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 3, 0))) __MINGW_ATTRIB_NONNULL(3)
  int vsnprintf (char * __restrict__ __stream, size_t __n, const char * __restrict__ __format, va_list __local_argv);

  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
  int snprintf (char * __restrict__ __stream, size_t __n, const char * __restrict__ __format, ...);
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif
# 835 "C:/Msys2/mingw64/include/stdio.h" 3
#else
# 836 "C:/Msys2/mingw64/include/stdio.h" 3

/* this is here to deal with software defining
 * vsnprintf as _vsnprintf, eg. libxml2.  */

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"
#endif
# 844 "C:/Msys2/mingw64/include/stdio.h" 3

  __attribute__((__format__ (ms_printf, 3, 0))) __MINGW_ATTRIB_NONNULL(3)
  int __cdecl __ms_vsnprintf(char * __restrict__ d,size_t n,const char * __restrict__ format,va_list arg)
    __MINGW_ATTRIB_DEPRECATED_MSVC2005 __MINGW_ATTRIB_DEPRECATED_SEC_WARN;

  __mingw_bos_ovr
  __attribute__((__format__ (ms_printf, 3, 0))) __MINGW_ATTRIB_NONNULL(3)
  int vsnprintf (char * __restrict__ __stream, size_t __n, const char * __restrict__ __format, va_list __local_argv)
  {
#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_LEVEL > 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 854 "C:/Msys2/mingw64/include/stdio.h" 3
    __mingw_bos_ptr_chk_warn(__stream, __n, 1);
#endif
# 856 "C:/Msys2/mingw64/include/stdio.h" 3
    if (__builtin_constant_p(__n) && __n == 0)
      return _vscprintf(__format, __local_argv);
    return __ms_vsnprintf (__stream, __n, __format, __local_argv);
  }

  __attribute__((__format__ (ms_printf, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
  int __cdecl __ms_snprintf(char * __restrict__ s, size_t n, const char * __restrict__  format, ...);

#ifndef __NO_ISOCEXT
#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_VA_ARG
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 866 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_bos_ovr
__attribute__((__format__ (ms_printf, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
int snprintf (char * __restrict__ __stream, size_t __n, const char * __restrict__ __format, ...)
{
  __mingw_bos_ptr_chk_warn(__stream, __n, 1);
  if (__builtin_constant_p(__n) && __n == 0)
    return _scprintf(__format, __builtin_va_arg_pack());
  return __ms_snprintf(__stream, __n, __format, __builtin_va_arg_pack());
}

#else /* !__MINGW_FORTIFY_VA_ARG */
# 878 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_ovr
__attribute__((__format__ (ms_printf, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
int snprintf (char * __restrict__ __stream, size_t __n, const char * __restrict__ __format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  if (__builtin_constant_p(__n) && __n == 0)
    __retval = _vscprintf(__format, __local_argv);
  else
    __retval = __ms_vsnprintf (__stream, __n, __format, __local_argv);
  __builtin_va_end( __local_argv );
  return __retval;
}

#endif /* !__MINGW_FORTIFY_VA_ARG */
# 894 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* !__NO_ISOCEXT */
# 895 "C:/Msys2/mingw64/include/stdio.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_VA_ARG
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 897 "C:/Msys2/mingw64/include/stdio.h" 3

int __cdecl __mingw_call_ms_sprintf(char * __restrict__, const char * __restrict__, ...) __MINGW_ASM_CALL(sprintf);

__mingw_bos_extern_ovr
__attribute__((__format__ (ms_printf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
int sprintf (char * __restrict__ __stream, const char * __restrict__ __format, ...)
{
  if (__mingw_bos_known(__stream)) {
    int __retval = __ms_snprintf( __stream, __mingw_bos(__stream, 1), __format, __builtin_va_arg_pack() );
    if (__retval >= 0)
      __mingw_bos_ptr_chk(__stream, (size_t)__retval + 1, 1);
    return __retval;
  }
  return __mingw_call_ms_sprintf( __stream, __format, __builtin_va_arg_pack() );
}

#endif /* __MINGW_FORTIFY_VA_ARG */
# 914 "C:/Msys2/mingw64/include/stdio.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_LEVEL > 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 916 "C:/Msys2/mingw64/include/stdio.h" 3

int __cdecl __mingw_call_ms_vsprintf(char * __restrict__, const char * __restrict__, va_list) __MINGW_ASM_CALL(vsprintf);

__mingw_bos_extern_ovr
__attribute__((__format__ (ms_printf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
int vsprintf (char * __restrict__ __stream, const char * __restrict__ __format, va_list __local_argv)
{
  if (__mingw_bos_known(__stream)) {
    int __retval = __ms_vsnprintf( __stream, __mingw_bos(__stream, 1), __format, __local_argv );
    if (__retval >= 0)
      __mingw_bos_ptr_chk(__stream, (size_t)__retval + 1, 1);
    return __retval;
  }
  return __mingw_call_ms_vsprintf( __stream, __format, __local_argv );
}

#endif /* __MINGW_FORTIFY_LEVEL > 0 */
# 933 "C:/Msys2/mingw64/include/stdio.h" 3

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif
# 937 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* _UCRT */
# 938 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* __USE_MINGW_ANSI_STDIO */
# 939 "C:/Msys2/mingw64/include/stdio.h" 3

  _CRTIMP int __cdecl _set_printf_count_output(int _Value);
  _CRTIMP int __cdecl _get_printf_count_output(void);

#ifndef _WSTDIO_DEFINED
#define _WSTDIO_DEFINED

/* __attribute__((__format__ (gnu_wscanf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (gnu_wscanf, 2, 0))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_vswscanf (const wchar_t * __restrict__ _Str,const wchar_t * __restrict__ Format,va_list argp);
/* __attribute__((__format__ (gnu_wscanf, 1, 2))) */ __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __mingw_wscanf(const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (gnu_wscanf, 1, 0))) */ __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __mingw_vwscanf(const wchar_t * __restrict__ Format, va_list argp);
/* __attribute__((__format__ (gnu_wscanf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (gnu_wscanf, 2, 0))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_vfwscanf (FILE * __restrict__ fp, const wchar_t * __restrict__ Format,va_list argp);

/* __attribute__((__format__ (gnu_wprintf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (gnu_wprintf, 1, 2))) */ __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __mingw_wprintf(const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (gnu_wprintf, 2, 0))) */__MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
/*__attribute__((__format__ (gnu_wprintf, 1, 0))) */ __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __mingw_vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
/* __attribute__((__format__ (gnu_wprintf, 3, 4))) */ __MINGW_ATTRIB_NONNULL(3)
  int __cdecl __mingw_snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
/* __attribute__((__format__ (gnu_wprintf, 3, 0))) */ __MINGW_ATTRIB_NONNULL(3)
  int __cdecl __mingw_vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);
/* __attribute__((__format__ (gnu_wprintf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...);
/* __attribute__((__format__ (gnu_wprintf, 2, 0))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list);

/* __attribute__((__format__ (ms_wscanf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (ms_wscanf, 1, 2))) */ __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __ms_wscanf(const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (ms_wscanf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);

/* __attribute__((__format__ (ms_wprintf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (ms_wprintf, 1, 2))) */ __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __ms_wprintf(const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (ms_wprintf, 2, 0))) */__MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
/*__attribute__((__format__ (ms_wprintf, 1, 0))) */ __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __ms_vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
/* __attribute__((__format__ (ms_wprintf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...);
/* __attribute__((__format__ (ms_wprintf, 2, 0))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list);

#ifdef _UCRT
  int __cdecl __stdio_common_vswprintf(unsigned __int64 options, wchar_t *str, size_t len, const wchar_t *format, _locale_t locale, va_list valist);
  int __cdecl __stdio_common_vfwprintf(unsigned __int64 options, FILE *file, const wchar_t *format, _locale_t locale, va_list valist);
  int __cdecl __stdio_common_vswscanf(unsigned __int64 options, const wchar_t *input, size_t length, const wchar_t *format, _locale_t locale, va_list valist);
  int __cdecl __stdio_common_vfwscanf(unsigned __int64 options, FILE *file, const wchar_t *format, _locale_t locale, va_list valist);
#endif
# 1002 "C:/Msys2/mingw64/include/stdio.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __USE_MINGW_ANSI_STDIO && !defined(_CRTBLD)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 1004 "C:/Msys2/mingw64/include/stdio.h" 3
/*
 * User has expressed a preference for C99 conformance...
 */

__mingw_ovr
/* __attribute__((__format__ (gnu_wscanf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
int swscanf(const wchar_t *__source, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vswscanf( __source, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

__mingw_ovr
/* __attribute__((__format__ (gnu_wscanf, 1, 2))) */ __MINGW_ATTRIB_NONNULL(1)
int wscanf(const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfwscanf( stdin, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

__mingw_ovr
/* __attribute__((__format__ (gnu_wscanf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
int fwscanf(FILE *__stream, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfwscanf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

#ifndef __NO_ISOCEXT  /* externs in libmingwex.a */
__mingw_ovr
/* __attribute__((__format__ (gnu_wscanf, 2, 0))) */ __MINGW_ATTRIB_NONNULL(2)
int vswscanf (const wchar_t * __restrict__ __source, const wchar_t * __restrict__ __format, __builtin_va_list __local_argv)
{
  return __mingw_vswscanf( __source, __format, __local_argv );
}

__mingw_ovr
/* __attribute__((__format__ (gnu_wscanf, 1, 0))) */ __MINGW_ATTRIB_NONNULL(1)
int vwscanf(const wchar_t *__format,  __builtin_va_list __local_argv)
{
  return __mingw_vfwscanf( stdin, __format, __local_argv );
}

__mingw_ovr
/* __attribute__((__format__ (gnu_wscanf, 2, 0))) */ __MINGW_ATTRIB_NONNULL(2)
int vfwscanf (FILE *__stream,  const wchar_t *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfwscanf( __stream, __format, __local_argv );
}
#endif /* __NO_ISOCEXT */
# 1063 "C:/Msys2/mingw64/include/stdio.h" 3



__mingw_ovr
/* __attribute__((__format__ (gnu_wprintf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
int fwprintf (FILE *__stream, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfwprintf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

__mingw_ovr
/* __attribute__((__format__ (gnu_wprintf, 1, 2))) */ __MINGW_ATTRIB_NONNULL(1)
int wprintf (const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfwprintf( stdout, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

__mingw_ovr
/* __attribute__((__format__ (gnu_wprintf, 2, 0))) */ __MINGW_ATTRIB_NONNULL(2)
int vfwprintf (FILE *__stream, const wchar_t *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfwprintf( __stream, __format, __local_argv );
}

__mingw_ovr
/* __attribute__((__format__ (gnu_wprintf, 1, 0))) */ __MINGW_ATTRIB_NONNULL(1)
int vwprintf (const wchar_t *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfwprintf( stdout, __format, __local_argv );
}

#ifndef __NO_ISOCEXT  /* externs in libmingwex.a */

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_VA_ARG
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1105 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_bos_ovr
/* __attribute__((__format__ (gnu_wprintf, 3, 4))) */ __MINGW_ATTRIB_NONNULL(3)
int snwprintf (wchar_t *__stream, size_t __n, const wchar_t *__format, ...)
{
  __mingw_bos_ptr_chk_warn(__stream, __n * sizeof(wchar_t), 1);
  return __mingw_snwprintf( __stream, __n, __format, __builtin_va_arg_pack() );
}

#else /* !__MINGW_FORTIFY_VA_ARG */
# 1115 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_ovr
/* __attribute__((__format__ (gnu_wprintf, 3, 4))) */ __MINGW_ATTRIB_NONNULL(3)
int snwprintf (wchar_t *__stream, size_t __n, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vsnwprintf( __stream, __n, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

#endif /* __MINGW_FORTIFY_VA_ARG */
# 1128 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_bos_ovr
/* __attribute__((__format__ (gnu_wprintf, 3, 0))) */ __MINGW_ATTRIB_NONNULL(3)
int vsnwprintf (wchar_t *__stream, size_t __n, const wchar_t *__format, __builtin_va_list __local_argv)
{
#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_LEVEL > 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1134 "C:/Msys2/mingw64/include/stdio.h" 3
  __mingw_bos_ptr_chk_warn(__stream, __n * sizeof(wchar_t), 1);
#endif
# 1136 "C:/Msys2/mingw64/include/stdio.h" 3
  return __mingw_vsnwprintf( __stream, __n, __format, __local_argv );
}
#endif /* __NO_ISOCEXT */
# 1139 "C:/Msys2/mingw64/include/stdio.h" 3

#else /* !__USE_MINGW_ANSI_STDIO */
# 1141 "C:/Msys2/mingw64/include/stdio.h" 3

#ifdef _UCRT
  __mingw_ovr __MINGW_ATTRIB_DEPRECATED_SEC_WARN
  int __cdecl fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vfwscanf(_CRT_INTERNAL_LOCAL_SCANF_OPTIONS, _File, _Format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  __mingw_ovr __MINGW_ATTRIB_DEPRECATED_SEC_WARN
  int __cdecl swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vswscanf(_CRT_INTERNAL_LOCAL_SCANF_OPTIONS, _Src, (size_t)-1, _Format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  __mingw_ovr __MINGW_ATTRIB_DEPRECATED_SEC_WARN
  int __cdecl wscanf(const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vfwscanf(_CRT_INTERNAL_LOCAL_SCANF_OPTIONS, stdin, _Format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  __mingw_ovr
  __MINGW_ATTRIB_NONNULL(2)
  int vfwscanf (FILE *__stream,  const wchar_t *__format, va_list __local_argv)
  {
    return __stdio_common_vfwscanf(_CRT_INTERNAL_LOCAL_SCANF_OPTIONS, __stream, __format, NULL, __local_argv);
  }

  __mingw_ovr
  __MINGW_ATTRIB_NONNULL(2)
  int vswscanf (const wchar_t * __restrict__ __source, const wchar_t * __restrict__ __format, va_list __local_argv)
  {
    return __stdio_common_vswscanf(_CRT_INTERNAL_LOCAL_SCANF_OPTIONS, __source, (size_t)-1, __format, NULL, __local_argv);
  }
  __mingw_ovr
  __MINGW_ATTRIB_NONNULL(1)
  int vwscanf(const wchar_t *__format, va_list __local_argv)
  {
    return __stdio_common_vfwscanf(_CRT_INTERNAL_LOCAL_SCANF_OPTIONS, stdin, __format, NULL, __local_argv);
  }

  __mingw_static_ovr
  int __cdecl fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vfwprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _File, _Format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  __mingw_ovr
  int __cdecl wprintf(const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vfwprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, stdout, _Format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  __mingw_ovr
  int __cdecl vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList)
  {
    return __stdio_common_vfwprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _File, _Format, NULL, _ArgList);
  }
  __mingw_ovr
  int __cdecl vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList)
  {
    return __stdio_common_vfwprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, stdout, _Format, NULL, _ArgList);
  }
#else
# 1224 "C:/Msys2/mingw64/include/stdio.h" 3

  int __cdecl fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  int __cdecl swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  int __cdecl wscanf(const wchar_t * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
#ifndef __NO_ISOCEXT  /* externs in libmingwex.a */
  int __cdecl __ms_vwscanf (const wchar_t * __restrict__ , va_list);
  int __cdecl __ms_vfwscanf (FILE * __restrict__ ,const wchar_t * __restrict__ ,va_list);
  int __cdecl __ms_vswscanf (const wchar_t * __restrict__ ,const wchar_t * __restrict__ ,va_list);

  __mingw_ovr
  __MINGW_ATTRIB_NONNULL(2)
  int vfwscanf (FILE *__stream,  const wchar_t *__format, __builtin_va_list __local_argv)
  {
    return __ms_vfwscanf (__stream, __format, __local_argv);
  }

  __mingw_ovr
  __MINGW_ATTRIB_NONNULL(2)
  int vswscanf (const wchar_t * __restrict__ __source, const wchar_t * __restrict__ __format, __builtin_va_list __local_argv)
  {
    return __ms_vswscanf( __source, __format, __local_argv );
  }
  __mingw_ovr
  __MINGW_ATTRIB_NONNULL(1)
  int vwscanf(const wchar_t *__format,  __builtin_va_list __local_argv)
  {
    return __ms_vwscanf (__format, __local_argv);
  }

#endif /* __NO_ISOCEXT */
# 1254 "C:/Msys2/mingw64/include/stdio.h" 3

  int __cdecl fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  int __cdecl wprintf(const wchar_t * __restrict__ _Format,...);
  int __cdecl vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  int __cdecl vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
#endif /* _UCRT */
# 1260 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* __USE_MINGW_ANSI_STDIO */
# 1261 "C:/Msys2/mingw64/include/stdio.h" 3

#ifndef WEOF
#define WEOF (wint_t)(0xFFFF)
#endif
# 1265 "C:/Msys2/mingw64/include/stdio.h" 3

#ifdef _POSIX_
  _CRTIMP FILE *__cdecl _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode);
#else
# 1269 "C:/Msys2/mingw64/include/stdio.h" 3
  _CRTIMP FILE *__cdecl _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);
#endif
# 1271 "C:/Msys2/mingw64/include/stdio.h" 3

  wint_t __cdecl fgetwc(FILE *_File);
  _CRTIMP wint_t __cdecl _fgetwchar(void);
  wint_t __cdecl fputwc(wchar_t _Ch,FILE *_File);
  _CRTIMP wint_t __cdecl _fputwchar(wchar_t _Ch);
  wint_t __cdecl getwc(FILE *_File);
  wint_t __cdecl getwchar(void);
  wint_t __cdecl putwc(wchar_t _Ch,FILE *_File);
  wint_t __cdecl putwchar(wchar_t _Ch);
  wint_t __cdecl ungetwc(wint_t _Ch,FILE *_File);
  wchar_t *__cdecl fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int __cdecl fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  _CRTIMP wchar_t *__cdecl _getws(wchar_t *_String) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP int __cdecl _putws(const wchar_t *_Str);

#ifdef _UCRT
  __mingw_ovr
  int __cdecl _scwprintf(const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vswprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS | _CRT_INTERNAL_PRINTF_STANDARD_SNPRINTF_BEHAVIOR, NULL, 0, _Format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  __mingw_static_ovr __MINGW_ATTRIB_DEPRECATED_SEC_WARN
  int __cdecl _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vswprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS | _CRT_INTERNAL_PRINTF_LEGACY_VSPRINTF_NULL_TERMINATION, _Dest, _Count, _Format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  int __cdecl _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;

#if 0 /* disabled by -frewrite-includes */
#if __USE_MINGW_ANSI_STDIO == 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1310 "C:/Msys2/mingw64/include/stdio.h" 3
  __mingw_ovr
  int snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, format);
    __ret = __stdio_common_vswprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS | _CRT_INTERNAL_PRINTF_STANDARD_SNPRINTF_BEHAVIOR, s, n, format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  __mingw_ovr
  int __cdecl vsnwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, va_list arg)
  {
    int __ret = __stdio_common_vswprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, s, n, format, NULL, arg);
    return __ret < 0 ? -1 : __ret;
  }
#endif
# 1327 "C:/Msys2/mingw64/include/stdio.h" 3

  __mingw_ovr
  int __cdecl _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vswprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _Dest, (size_t)-1, _Format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  __mingw_ovr
  int __cdecl _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args)
  {
    return __stdio_common_vswprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _Dest, (size_t)-1, _Format, NULL, _Args);
  }

  __mingw_ovr
  int __cdecl _vscwprintf(const wchar_t * __restrict__ _Format, va_list _ArgList)
  {
      int _Result = __stdio_common_vswprintf(_CRT_INTERNAL_PRINTF_STANDARD_SNPRINTF_BEHAVIOR, NULL, 0, _Format, NULL, _ArgList);
      return _Result < 0 ? -1 : _Result;
  }
#else
# 1351 "C:/Msys2/mingw64/include/stdio.h" 3
  _CRTIMP int __cdecl _scwprintf(const wchar_t * __restrict__ _Format,...);
  _CRTIMP int __cdecl _swprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,...);
  _CRTIMP int __cdecl _vswprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,va_list _ArgList);
  _CRTIMP int __cdecl _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP int __cdecl _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP int __cdecl _vscwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);

#ifndef __NO_ISOCEXT  /* externs in libmingwex.a */

#if 0 /* disabled by -frewrite-includes */
#if __USE_MINGW_ANSI_STDIO == 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1361 "C:/Msys2/mingw64/include/stdio.h" 3
  int __cdecl __ms_snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
  int __cdecl __ms_vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);
  __mingw_ovr
  int snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...)
  {
    int r;
    va_list argp;
    __builtin_va_start (argp, format);
    r = _vsnwprintf (s, n, format, argp);
    __builtin_va_end (argp);
    return r;
  }
  __mingw_ovr
  int __cdecl vsnwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, va_list arg)
  {
    return _vsnwprintf(s,n,format,arg);
  }
#endif
# 1379 "C:/Msys2/mingw64/include/stdio.h" 3

#endif /* ! __NO_ISOCEXT */
# 1381 "C:/Msys2/mingw64/include/stdio.h" 3
  _CRTIMP int __cdecl _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  _CRTIMP int __cdecl _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);
#endif /* _UCRT */
# 1384 "C:/Msys2/mingw64/include/stdio.h" 3

#ifndef RC_INVOKED
#if 0 /* expanded by -frewrite-includes */
#include <swprintf.inl>
#endif /* expanded by -frewrite-includes */
# 1386 "C:/Msys2/mingw64/include/stdio.h" 3
# 1 "C:/Msys2/mingw64/include/swprintf.inl" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */

#ifndef _INC_SWPRINTF_INL
#define _INC_SWPRINTF_INL

#if 0 /* expanded by -frewrite-includes */
#include <vadefs.h>
#endif /* expanded by -frewrite-includes */
# 10 "C:/Msys2/mingw64/include/swprintf.inl" 3
# 1 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 1 3
/* ===-------- vadefs.h ---------------------------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/* Only include this if we are aiming for MSVC compatibility. */
#ifndef _MSC_VER
#if 0 /* expanded by -frewrite-includes */
#include_next <vadefs.h>
#endif /* expanded by -frewrite-includes */
# 12 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3
# 13 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3
#else
# 14 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3

#ifndef __clang_vadefs_h
#define __clang_vadefs_h

#if 0 /* expanded by -frewrite-includes */
#include_next <vadefs.h>
#endif /* expanded by -frewrite-includes */
# 18 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3
# 19 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3

/* Override macros from vadefs.h with definitions that work with Clang. */
#ifdef _crt_va_start
#undef _crt_va_start
#define _crt_va_start(ap, param) __builtin_va_start(ap, param)
#endif
# 25 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3
#ifdef _crt_va_end
#undef _crt_va_end
#define _crt_va_end(ap)          __builtin_va_end(ap)
#endif
# 29 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3
#ifdef _crt_va_arg
#undef _crt_va_arg
#define _crt_va_arg(ap, type)    __builtin_va_arg(ap, type)
#endif
# 33 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3

/* VS 2015 switched to double underscore names, which is an improvement, but now
 * we have to intercept those names too.
 */
#ifdef __crt_va_start
#undef __crt_va_start
#define __crt_va_start(ap, param) __builtin_va_start(ap, param)
#endif
# 41 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3
#ifdef __crt_va_end
#undef __crt_va_end
#define __crt_va_end(ap)          __builtin_va_end(ap)
#endif
# 45 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3
#ifdef __crt_va_arg
#undef __crt_va_arg
#define __crt_va_arg(ap, type)    __builtin_va_arg(ap, type)
#endif
# 49 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3

#endif
# 51 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3
#endif
# 52 "C:/Msys2/mingw64/lib/clang/14.0.0/include/vadefs.h" 3
# 11 "C:/Msys2/mingw64/include/swprintf.inl" 2 3

#undef __mingw_ovr
#if 0 /* disabled by -frewrite-includes */
#if defined (__GNUC__)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 14 "C:/Msys2/mingw64/include/swprintf.inl" 3
#define __mingw_ovr static __attribute__ ((__unused__)) __inline__ __cdecl
#ifdef __mingw_static_ovr
#undef __mingw_static_ovr
#define __mingw_static_ovr __mingw_ovr
#endif
# 19 "C:/Msys2/mingw64/include/swprintf.inl" 3
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(__cplusplus)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 20 "C:/Msys2/mingw64/include/swprintf.inl" 3
#define __mingw_ovr inline __cdecl
#else
# 22 "C:/Msys2/mingw64/include/swprintf.inl" 3
#define __mingw_ovr static __cdecl
#endif
# 24 "C:/Msys2/mingw64/include/swprintf.inl" 3

__mingw_ovr
/* __attribute__((__format__ (gnu_wprintf, 3, 0))) */ __MINGW_ATTRIB_NONNULL(3)
int vswprintf (wchar_t *__stream, size_t __count, const wchar_t *__format, __builtin_va_list __local_argv)
{
  return vsnwprintf( __stream, __count, __format, __local_argv );
}

__mingw_ovr
/* __attribute__((__format__ (gnu_wprintf, 3, 4))) */ __MINGW_ATTRIB_NONNULL(3)
int swprintf (wchar_t *__stream, size_t __count, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv;

  __builtin_va_start( __local_argv, __format );
  __retval = vswprintf( __stream, __count, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

#ifdef __cplusplus

extern "C++" {

__mingw_ovr
/* __attribute__((__format__ (gnu_wprintf, 2, 0))) */ __MINGW_ATTRIB_NONNULL(2)
int vswprintf (wchar_t *__stream, const wchar_t *__format, __builtin_va_list __local_argv)
{
#if 0 /* disabled by -frewrite-includes */
#if __USE_MINGW_ANSI_STDIO
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 54 "C:/Msys2/mingw64/include/swprintf.inl" 3
  return __mingw_vswprintf( __stream, __format, __local_argv );
#else
# 56 "C:/Msys2/mingw64/include/swprintf.inl" 3
  return _vswprintf( __stream, __format, __local_argv );
#endif
# 58 "C:/Msys2/mingw64/include/swprintf.inl" 3
}

__mingw_ovr
/* __attribute__((__format__ (gnu_wprintf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
int swprintf (wchar_t *__stream, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv;

  __builtin_va_start( __local_argv, __format );
  __retval = vswprintf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

}

#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(_CRT_NON_CONFORMING_SWPRINTFS)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 76 "C:/Msys2/mingw64/include/swprintf.inl" 3

#if 0 /* disabled by -frewrite-includes */
#if __USE_MINGW_ANSI_STDIO
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 78 "C:/Msys2/mingw64/include/swprintf.inl" 3
#define swprintf __mingw_swprintf
#define vswprintf __mingw_vswprintf
#else
# 81 "C:/Msys2/mingw64/include/swprintf.inl" 3
#define swprintf _swprintf
#define vswprintf _vswprintf
#endif
# 84 "C:/Msys2/mingw64/include/swprintf.inl" 3

#endif /* __cplusplus */
# 86 "C:/Msys2/mingw64/include/swprintf.inl" 3

#endif /* _INC_SWPRINTF_INL */
# 88 "C:/Msys2/mingw64/include/swprintf.inl" 3
# 1387 "C:/Msys2/mingw64/include/stdio.h" 2 3
#endif
# 1388 "C:/Msys2/mingw64/include/stdio.h" 3

#ifdef _CRT_NON_CONFORMING_SWPRINTFS
#ifndef __cplusplus
#define _swprintf_l __swprintf_l
#define _vswprintf_l __vswprintf_l
#endif
# 1394 "C:/Msys2/mingw64/include/stdio.h" 3
#endif
# 1395 "C:/Msys2/mingw64/include/stdio.h" 3

  _CRTIMP wchar_t *__cdecl _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);
  _CRTIMP int __cdecl _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  _CRTIMP FILE *__cdecl _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  _CRTIMP FILE *__cdecl _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t *__restrict__  _Mode) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP FILE *__cdecl _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;

#ifndef _CRT_WPERROR_DEFINED
#define _CRT_WPERROR_DEFINED
  _CRTIMP void __cdecl _wperror(const wchar_t *_ErrMsg);
#endif
# 1406 "C:/Msys2/mingw64/include/stdio.h" 3
  _CRTIMP FILE *__cdecl _wpopen(const wchar_t *_Command,const wchar_t *_Mode);
#if 0 /* disabled by -frewrite-includes */
#if !defined(NO_OLDNAMES) && !defined(wpopen)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 1408 "C:/Msys2/mingw64/include/stdio.h" 3
#define wpopen	_wpopen
#endif
# 1410 "C:/Msys2/mingw64/include/stdio.h" 3

  _CRTIMP int __cdecl _wremove(const wchar_t *_Filename);
  _CRTIMP wchar_t *__cdecl _wtmpnam(wchar_t *_Buffer);
#if 0 /* disabled by -frewrite-includes */
#if __MSVCRT_VERSION__ >= 0x800
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1414 "C:/Msys2/mingw64/include/stdio.h" 3
  _CRTIMP wint_t __cdecl _fgetwc_nolock(FILE *_File);
  _CRTIMP wint_t __cdecl _fputwc_nolock(wchar_t _Ch,FILE *_File);
  _CRTIMP wint_t __cdecl _ungetwc_nolock(wint_t _Ch,FILE *_File);
#endif
# 1418 "C:/Msys2/mingw64/include/stdio.h" 3

#undef _CRT_GETPUTWCHAR_NOINLINE

#if 0 /* disabled by -frewrite-includes */
#if !defined(__cplusplus) || defined(_CRT_GETPUTWCHAR_NOINLINE) || defined (__CRT__NO_INLINE)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 1422 "C:/Msys2/mingw64/include/stdio.h" 3
#define getwchar() fgetwc(stdin)
#define putwchar(_c) fputwc((_c),stdout)
#else
# 1425 "C:/Msys2/mingw64/include/stdio.h" 3
  __CRT_INLINE wint_t __cdecl getwchar() {return (fgetwc(stdin)); }
  __CRT_INLINE wint_t __cdecl putwchar(wchar_t _C) {return (fputwc(_C,stdout)); }
#endif
# 1428 "C:/Msys2/mingw64/include/stdio.h" 3

#define getwc(_stm) fgetwc(_stm)
#define putwc(_c,_stm) fputwc(_c,_stm)
#if 0 /* disabled by -frewrite-includes */
#if __MSVCRT_VERSION__ >= 0x800
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1432 "C:/Msys2/mingw64/include/stdio.h" 3
#define _putwc_nolock(_c,_stm) _fputwc_nolock(_c,_stm)
#define _getwc_nolock(_c) _fgetwc_nolock(_c)
#endif
# 1435 "C:/Msys2/mingw64/include/stdio.h" 3
#endif
# 1436 "C:/Msys2/mingw64/include/stdio.h" 3

#define _STDIO_DEFINED
#endif
# 1439 "C:/Msys2/mingw64/include/stdio.h" 3

#ifdef _UCRT
  _CRTIMP int __cdecl _fgetc_nolock(FILE *_File);
  _CRTIMP int __cdecl _fputc_nolock(int _Char, FILE *_File);
  _CRTIMP int __cdecl _getc_nolock(FILE *_File);
  _CRTIMP int __cdecl _putc_nolock(int _Char, FILE *_File);
#else
# 1446 "C:/Msys2/mingw64/include/stdio.h" 3
#define _fgetc_nolock(_stream) (--(_stream)->_cnt >= 0 ? 0xff & *(_stream)->_ptr++ : _filbuf(_stream))
#define _fputc_nolock(_c,_stream) (--(_stream)->_cnt >= 0 ? 0xff & (*(_stream)->_ptr++ = (char)(_c)) : _flsbuf((_c),(_stream)))
#define _getc_nolock(_stream) _fgetc_nolock(_stream)
#define _putc_nolock(_c,_stream) _fputc_nolock(_c,_stream)
#endif
# 1451 "C:/Msys2/mingw64/include/stdio.h" 3
#define _getchar_nolock() _getc_nolock(stdin)
#define _putchar_nolock(_c) _putc_nolock((_c),stdout)
#define _getwchar_nolock() _getwc_nolock(stdin)
#define _putwchar_nolock(_c) _putwc_nolock((_c),stdout)

  _CRTIMP void __cdecl _lock_file(FILE *_File);
  _CRTIMP void __cdecl _unlock_file(FILE *_File);
#if 0 /* disabled by -frewrite-includes */
#if __MSVCRT_VERSION__ >= 0x800
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1459 "C:/Msys2/mingw64/include/stdio.h" 3
  _CRTIMP int __cdecl _fclose_nolock(FILE *_File);
  _CRTIMP int __cdecl _fflush_nolock(FILE *_File);
  _CRTIMP size_t __cdecl _fread_nolock(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  _CRTIMP int __cdecl _fseek_nolock(FILE *_File,long _Offset,int _Origin);
  _CRTIMP long __cdecl _ftell_nolock(FILE *_File);
  __MINGW_EXTENSION _CRTIMP int __cdecl _fseeki64_nolock(FILE *_File,__int64 _Offset,int _Origin);
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _ftelli64_nolock(FILE *_File);
  _CRTIMP size_t __cdecl _fwrite_nolock(const void * __restrict__ _DstBuf,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  _CRTIMP int __cdecl _ungetc_nolock(int _Ch,FILE *_File);
#endif
# 1469 "C:/Msys2/mingw64/include/stdio.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined(NO_OLDNAMES) || !defined(_POSIX)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 1471 "C:/Msys2/mingw64/include/stdio.h" 3
#define P_tmpdir _P_tmpdir
#define SYS_OPEN _SYS_OPEN

  char *__cdecl tempnam(const char *_Directory,const char *_FilePrefix) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  int __cdecl fcloseall(void) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  FILE *__cdecl fdopen(int _FileHandle,const char *_Format) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  int __cdecl fgetchar(void) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  int __cdecl fileno(FILE *_File) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  int __cdecl flushall(void) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  int __cdecl fputchar(int _Ch) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  int __cdecl getw(FILE *_File) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  int __cdecl putw(int _Ch,FILE *_File) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  int __cdecl rmtmp(void) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
#endif
# 1485 "C:/Msys2/mingw64/include/stdio.h" 3

#ifndef __MINGW_MBWC_CONVERT_DEFINED
#define __MINGW_MBWC_CONVERT_DEFINED

/**
 * __mingw_str_wide_utf8
 * Converts a null terminated UCS-2 string to a multibyte (UTF-8) equivalent.
 * Caller is supposed to free allocated buffer with __mingw_str_free().
 * @param[in] wptr Pointer to wide string.
 * @param[out] mbptr Pointer to multibyte string.
 * @param[out] buflen Optional parameter for length of allocated buffer.
 * @return Number of characters converted, 0 for failure.
 *
 * WideCharToMultiByte - http://msdn.microsoft.com/en-us/library/dd374130(VS.85).aspx
 */
int __cdecl __mingw_str_wide_utf8 (const wchar_t * const wptr, char **mbptr, size_t * buflen);

/**
 * __mingw_str_utf8_wide
 * Converts a null terminated UTF-8 string to a UCS-2 equivalent.
 * Caller is supposed to free allocated buffer with __mingw_str_free().
 * @param[out] mbptr Pointer to multibyte string.
 * @param[in] wptr Pointer to wide string.
 * @param[out] buflen Optional parameter for length of allocated buffer.
 * @return Number of characters converted, 0 for failure.
 *
 * MultiByteToWideChar - http://msdn.microsoft.com/en-us/library/dd319072(VS.85).aspx
 */

int __cdecl __mingw_str_utf8_wide (const char *const mbptr, wchar_t ** wptr, size_t * buflen);

/**
 * __mingw_str_free
 * Frees buffer create by __mingw_str_wide_utf8 and __mingw_str_utf8_wide.
 * @param[in] ptr memory block to free.
 *
 */

void __cdecl __mingw_str_free(void *ptr);

#endif /* __MINGW_MBWC_CONVERT_DEFINED */
# 1526 "C:/Msys2/mingw64/include/stdio.h" 3

#ifdef _CRT_USE_WINAPI_FAMILY_DESKTOP_APP
#ifndef _WSPAWN_DEFINED
#define _WSPAWN_DEFINED
  _CRTIMP intptr_t __cdecl _wspawnl(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  _CRTIMP intptr_t __cdecl _wspawnle(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  _CRTIMP intptr_t __cdecl _wspawnlp(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  _CRTIMP intptr_t __cdecl _wspawnlpe(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  _CRTIMP intptr_t __cdecl _wspawnv(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  _CRTIMP intptr_t __cdecl _wspawnve(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  _CRTIMP intptr_t __cdecl _wspawnvp(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  _CRTIMP intptr_t __cdecl _wspawnvpe(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
#endif
# 1539 "C:/Msys2/mingw64/include/stdio.h" 3

#ifndef _P_WAIT
#define _P_WAIT 0
#define _P_NOWAIT 1
#define _OLD_P_OVERLAY 2
#define _P_NOWAITO 3
#define _P_DETACH 4
#define _P_OVERLAY 2

#define _WAIT_CHILD 0
#define _WAIT_GRANDCHILD 1
#endif
# 1551 "C:/Msys2/mingw64/include/stdio.h" 3

#ifndef _SPAWNV_DEFINED
#define _SPAWNV_DEFINED
  _CRTIMP intptr_t __cdecl _spawnv(int _Mode,const char *_Filename,const char *const *_ArgList);
  _CRTIMP intptr_t __cdecl _spawnve(int _Mode,const char *_Filename,const char *const *_ArgList,const char *const *_Env);
  _CRTIMP intptr_t __cdecl _spawnvp(int _Mode,const char *_Filename,const char *const *_ArgList);
  _CRTIMP intptr_t __cdecl _spawnvpe(int _Mode,const char *_Filename,const char *const *_ArgList,const char *const *_Env);
#endif
# 1559 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* _CRT_USE_WINAPI_FAMILY_DESKTOP_APP */
# 1560 "C:/Msys2/mingw64/include/stdio.h" 3

#ifdef __cplusplus
}
#endif
# 1564 "C:/Msys2/mingw64/include/stdio.h" 3

#pragma pop_macro("snprintf")
#pragma pop_macro("vsnprintf")
#pragma pop_macro("snwprintf")
#pragma pop_macro("vsnwprintf")

#pragma pack(pop)

#if 0 /* expanded by -frewrite-includes */
#include <sec_api/stdio_s.h>
#endif /* expanded by -frewrite-includes */
# 1572 "C:/Msys2/mingw64/include/stdio.h" 3
# 1 "C:/Msys2/mingw64/include/sec_api/stdio_s.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _INC_STDIO_S
#define _INC_STDIO_S

#if 0 /* expanded by -frewrite-includes */
#include <stdio.h>
#endif /* expanded by -frewrite-includes */
# 9 "C:/Msys2/mingw64/include/sec_api/stdio_s.h" 3
# 1 "C:/Msys2/mingw64/include/stdio.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _INC_STDIO
#define _INC_STDIO

#if 0 /* expanded by -frewrite-includes */
#include <corecrt_stdio_config.h>
#endif /* expanded by -frewrite-includes */
# 9 "C:/Msys2/mingw64/include/stdio.h" 3
# 10 "C:/Msys2/mingw64/include/stdio.h" 3

#pragma pack(push,_CRT_PACKING)

#pragma push_macro("snprintf")
#undef snprintf
#pragma push_macro("vsnprintf")
#undef vsnprintf
#pragma push_macro("snwprintf")
#undef snwprintf
#pragma push_macro("vsnwprintf")
#undef vsnwprintf

#ifdef __cplusplus
extern "C" {
#endif
# 25 "C:/Msys2/mingw64/include/stdio.h" 3

#define BUFSIZ 512
#define _NFILE _NSTREAM_
#define _NSTREAM_ 512
#define _IOB_ENTRIES 20
#define EOF (-1)

#ifndef _FILE_DEFINED
  struct _iobuf {
#ifdef _UCRT
    void *_Placeholder;
#else
# 37 "C:/Msys2/mingw64/include/stdio.h" 3
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
#endif
# 46 "C:/Msys2/mingw64/include/stdio.h" 3
  };
  typedef struct _iobuf FILE;
#define _FILE_DEFINED
#endif
# 50 "C:/Msys2/mingw64/include/stdio.h" 3

#ifdef _POSIX_
#define _P_tmpdir "/"
#define _wP_tmpdir L"/"
#else
# 55 "C:/Msys2/mingw64/include/stdio.h" 3
#define _P_tmpdir "\\"
#define _wP_tmpdir L"\\"
#endif
# 58 "C:/Msys2/mingw64/include/stdio.h" 3

#define L_tmpnam (sizeof(_P_tmpdir) + 12)

#ifdef _POSIX_
#define L_ctermid 9
#define L_cuserid 32
#endif
# 65 "C:/Msys2/mingw64/include/stdio.h" 3

#define SEEK_CUR 1
#define SEEK_END 2
#define SEEK_SET 0

#define	STDIN_FILENO	0
#define	STDOUT_FILENO	1
#define	STDERR_FILENO	2

#define FILENAME_MAX 260
#define FOPEN_MAX 20
#define _SYS_OPEN 20
#define TMP_MAX 32767

#ifndef NULL
#ifdef __cplusplus
#ifndef _WIN64
#define NULL 0
#else
# 84 "C:/Msys2/mingw64/include/stdio.h" 3
#define NULL 0LL
#endif  /* W64 */
# 86 "C:/Msys2/mingw64/include/stdio.h" 3
#else
# 87 "C:/Msys2/mingw64/include/stdio.h" 3
#define NULL ((void *)0)
#endif
# 89 "C:/Msys2/mingw64/include/stdio.h" 3
#endif
# 90 "C:/Msys2/mingw64/include/stdio.h" 3

#if 0 /* expanded by -frewrite-includes */
#include <_mingw_off_t.h>
#endif /* expanded by -frewrite-includes */
# 91 "C:/Msys2/mingw64/include/stdio.h" 3
# 92 "C:/Msys2/mingw64/include/stdio.h" 3

_CRTIMP FILE *__cdecl __acrt_iob_func(unsigned index);
#ifndef _STDIO_DEFINED
#ifdef _WIN64
  _CRTIMP FILE *__cdecl __iob_func(void);
#define _iob  __iob_func()
#else
# 99 "C:/Msys2/mingw64/include/stdio.h" 3
#ifdef _MSVCRT_
extern FILE _iob[];	/* A pointer to an array of FILE */
#define __iob_func()	(_iob)
#else
# 103 "C:/Msys2/mingw64/include/stdio.h" 3
extern FILE (* __MINGW_IMP_SYMBOL(_iob))[];	/* A pointer to an array of FILE */
#define __iob_func()	(* __MINGW_IMP_SYMBOL(_iob))
#define _iob __iob_func()
#endif
# 107 "C:/Msys2/mingw64/include/stdio.h" 3
#endif
# 108 "C:/Msys2/mingw64/include/stdio.h" 3
#endif
# 109 "C:/Msys2/mingw64/include/stdio.h" 3

#ifndef _FPOS_T_DEFINED
#define _FPOS_T_DEFINED
#undef _FPOSOFF

#if 0 /* disabled by -frewrite-includes */
#if (!defined(NO_OLDNAMES) || defined(__GNUC__))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 115 "C:/Msys2/mingw64/include/stdio.h" 3
  __MINGW_EXTENSION typedef __int64 fpos_t;
#define _FPOSOFF(fp) ((long)(fp))
#else
# 118 "C:/Msys2/mingw64/include/stdio.h" 3
  __MINGW_EXTENSION typedef long long fpos_t;
#define _FPOSOFF(fp) ((long)(fp))
#endif
# 121 "C:/Msys2/mingw64/include/stdio.h" 3

#endif
# 123 "C:/Msys2/mingw64/include/stdio.h" 3

#ifndef _STDSTREAM_DEFINED
#define _STDSTREAM_DEFINED

#define stdin (__acrt_iob_func(0))
#define stdout (__acrt_iob_func(1))
#define stderr (__acrt_iob_func(2))
#endif
# 131 "C:/Msys2/mingw64/include/stdio.h" 3

#define _IOFBF 0x0000
#define _IOLBF 0x0040
#define _IONBF 0x0004

#ifndef _UCRT
#define _IOREAD 0x0001
#define _IOWRT 0x0002
#define _IOMYBUF 0x0008
#define _IOEOF 0x0010
#define _IOERR 0x0020
#define _IOSTRG 0x0040
#define _IORW 0x0080
#ifdef _POSIX_
#define _IOAPPEND 0x0200
#endif
# 147 "C:/Msys2/mingw64/include/stdio.h" 3
#endif
# 148 "C:/Msys2/mingw64/include/stdio.h" 3

#define _TWO_DIGIT_EXPONENT 0x1

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_LEVEL > 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 152 "C:/Msys2/mingw64/include/stdio.h" 3
__mingw_bos_declare;
#endif
# 154 "C:/Msys2/mingw64/include/stdio.h" 3

#ifndef _STDIO_DEFINED
extern
  __attribute__((__format__ (gnu_scanf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);
extern
  __attribute__((__format__ (gnu_scanf, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __mingw_scanf(const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __mingw_vscanf(const char * __restrict__ Format, va_list argp);
extern
  __attribute__((__format__ (gnu_scanf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (gnu_scanf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);

extern
  __attribute__((__format__ (gnu_printf, 3, 0))) __MINGW_ATTRIB_NONNULL(3)
  int __cdecl __mingw_vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,
                               va_list _ArgList);
extern
  __attribute__((__format__ (gnu_printf, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
  int __cdecl __mingw_snprintf(char * __restrict__ s, size_t n, const char * __restrict__  format, ...);
extern
  __attribute__((__format__ (gnu_printf, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __mingw_printf(const char * __restrict__ , ... ) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (gnu_printf, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __mingw_vprintf (const char * __restrict__ , va_list) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_sprintf (char * __restrict__ , const char * __restrict__ , ...) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__((nonnull (1,2)))
  int __cdecl __mingw_asprintf(char ** __restrict__ , const char * __restrict__ , ...) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__((nonnull (1,2)))
  int __cdecl __mingw_vasprintf(char ** __restrict__ , const char * __restrict__ , va_list) __MINGW_NOTHROW;

extern
  __attribute__((__format__ (ms_scanf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (ms_scanf, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __ms_scanf(const char * __restrict__ _Format,...);
extern
  __attribute__((__format__ (ms_scanf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);

extern
  __attribute__((__format__ (ms_printf, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __ms_printf(const char * __restrict__ , ... ) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (ms_printf, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __ms_vprintf (const char * __restrict__ , va_list) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (ms_printf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (ms_printf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (ms_printf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_sprintf (char * __restrict__ , const char * __restrict__ , ...) __MINGW_NOTHROW;
extern
  __attribute__((__format__ (ms_printf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __MINGW_NOTHROW;

#ifdef _UCRT
  int __cdecl __stdio_common_vsprintf(unsigned __int64 options, char *str, size_t len, const char *format, _locale_t locale, va_list valist);
  int __cdecl __stdio_common_vfprintf(unsigned __int64 options, FILE *file, const char *format, _locale_t locale, va_list valist);
  int __cdecl __stdio_common_vsscanf(unsigned __int64 options, const char *input, size_t length, const char *format, _locale_t locale, va_list valist);
  int __cdecl __stdio_common_vfscanf(unsigned __int64 options, FILE *file, const char *format, _locale_t locale, va_list valist);
#endif
# 242 "C:/Msys2/mingw64/include/stdio.h" 3

#undef __MINGW_PRINTF_FORMAT
#undef __MINGW_SCANF_FORMAT

#if 0 /* disabled by -frewrite-includes */
#if defined(__clang__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 247 "C:/Msys2/mingw64/include/stdio.h" 3
#define __MINGW_PRINTF_FORMAT printf
#define __MINGW_SCANF_FORMAT  scanf
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(_UCRT) || __USE_MINGW_ANSI_STDIO
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 250 "C:/Msys2/mingw64/include/stdio.h" 3
#define __MINGW_PRINTF_FORMAT gnu_printf
#define __MINGW_SCANF_FORMAT  gnu_scanf
#else
# 253 "C:/Msys2/mingw64/include/stdio.h" 3
#define __MINGW_PRINTF_FORMAT ms_printf
#define __MINGW_SCANF_FORMAT  ms_scanf
#endif
# 256 "C:/Msys2/mingw64/include/stdio.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __USE_MINGW_ANSI_STDIO && !defined(_CRTBLD)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 258 "C:/Msys2/mingw64/include/stdio.h" 3
/*
 * User has expressed a preference for C99 conformance...
 */

#ifdef _GNU_SOURCE
__mingw_ovr
__attribute__ ((__format__ (gnu_printf, 2, 3))) __attribute__((nonnull (1,2)))
int asprintf(char **__ret, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vasprintf( __ret, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

__mingw_ovr
__attribute__ ((__format__ (gnu_printf, 2, 0))) __attribute__((nonnull (1,2)))
int vasprintf(char **__ret, const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vasprintf( __ret, __format, __local_argv );
}
#endif /* _GNU_SOURCE */
# 281 "C:/Msys2/mingw64/include/stdio.h" 3

/* There seems to be a bug about builtins and static overrides of them
   in g++.  So we need to do here some trickery.  */
#ifdef __cplusplus
extern "C++" {
#endif
# 287 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_ovr
__attribute__((__format__ (gnu_scanf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
int sscanf(const char *__source, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vsscanf( __source, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

__mingw_ovr
__attribute__((__format__ (gnu_scanf, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
int scanf(const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfscanf( stdin, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

__mingw_ovr
__attribute__((__format__ (gnu_scanf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
int fscanf(FILE *__stream, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfscanf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

#ifndef __NO_ISOCEXT  /* externs in libmingwex.a */
#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"
#endif
# 326 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_ovr
__attribute__((__format__ (gnu_scanf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
int vsscanf (const char *__source, const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vsscanf( __source, __format, __local_argv );
}

__mingw_ovr
__attribute__((__format__ (gnu_scanf, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
int vscanf(const char *__format,  __builtin_va_list __local_argv)
{
  return __mingw_vfscanf( stdin, __format, __local_argv );
}

__mingw_ovr
__attribute__((__format__ (gnu_scanf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
int vfscanf (FILE *__stream,  const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfscanf( __stream, __format, __local_argv );
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif
# 351 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* __NO_ISOCEXT */
# 352 "C:/Msys2/mingw64/include/stdio.h" 3



__mingw_ovr
__attribute__((__format__ (gnu_printf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
int fprintf (FILE *__stream, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfprintf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

__mingw_ovr
__attribute__((__format__ (gnu_printf, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
int printf (const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfprintf( stdout, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_VA_ARG
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 378 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_bos_ovr
__attribute__((__format__ (gnu_printf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
int sprintf (char *__stream, const char *__format, ...)
{
  if (__mingw_bos_known(__stream)) {
    int __retval = __mingw_snprintf( __stream, __mingw_bos(__stream, 1), __format, __builtin_va_arg_pack() );
    if (__retval >= 0)
      __mingw_bos_ptr_chk(__stream, (size_t)__retval + 1, 1);
    return __retval;
  }
  return __mingw_sprintf( __stream, __format, __builtin_va_arg_pack() );
}

#else /* !__MINGW_FORTIFY_VA_ARG */
# 393 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_ovr
__attribute__((__format__ (gnu_printf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
int sprintf (char *__stream, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vsprintf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

#endif /* __MINGW_FORTIFY_VA_ARG */
# 406 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_ovr
__attribute__((__format__ (gnu_printf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
int vfprintf (FILE *__stream, const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfprintf( __stream, __format, __local_argv );
}

__mingw_ovr
__attribute__((__format__ (gnu_printf, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
int vprintf (const char *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfprintf( stdout, __format, __local_argv );
}

__mingw_bos_ovr
__attribute__((__format__ (gnu_printf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
int vsprintf (char *__stream, const char *__format, __builtin_va_list __local_argv)
{
#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_LEVEL > 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 426 "C:/Msys2/mingw64/include/stdio.h" 3
  if (__mingw_bos_known(__stream)) {
    int __retval = __mingw_vsnprintf( __stream, __mingw_bos(__stream, 1), __format, __local_argv );
    if (__retval >= 0)
      __mingw_bos_ptr_chk(__stream, (size_t)__retval + 1, 1);
    return __retval;
  }
#endif
# 433 "C:/Msys2/mingw64/include/stdio.h" 3
  return __mingw_vsprintf( __stream, __format, __local_argv );
}
/* #ifndef __NO_ISOCEXT */  /* externs in libmingwex.a */

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_VA_ARG
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 438 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_bos_ovr
__attribute__((__format__ (gnu_printf, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
int snprintf (char *__stream, size_t __n, const char *__format, ...)
{
  __mingw_bos_ptr_chk_warn(__stream, __n, 1);
  return __mingw_snprintf( __stream, __n, __format, __builtin_va_arg_pack() );
}

#else /* !__MINGW_FORTIFY_VA_ARG */
# 448 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_ovr
__attribute__((__format__ (gnu_printf, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
int snprintf (char *__stream, size_t __n, const char *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vsnprintf( __stream, __n, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

#endif /* __MINGW_FORTIFY_VA_ARG */
# 461 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_bos_ovr
__attribute__((__format__ (gnu_printf, 3, 0))) __MINGW_ATTRIB_NONNULL(3)
int vsnprintf (char *__stream, size_t __n, const char *__format, __builtin_va_list __local_argv)
{
#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_LEVEL > 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 467 "C:/Msys2/mingw64/include/stdio.h" 3
  __mingw_bos_ptr_chk_warn(__stream, __n, 1);
#endif
# 469 "C:/Msys2/mingw64/include/stdio.h" 3
  return __mingw_vsnprintf( __stream, __n, __format, __local_argv );
}

/* Override __builtin_printf-routines ... Kludge for libstdc++ ...*/
#define __builtin_vsnprintf __mingw_vsnprintf
#define __builtin_vsprintf __mingw_vsprintf

/* #endif */ /* __NO_ISOCEXT */

#ifdef __cplusplus
}
#endif
# 481 "C:/Msys2/mingw64/include/stdio.h" 3

#else /* !__USE_MINGW_ANSI_STDIO */
# 483 "C:/Msys2/mingw64/include/stdio.h" 3

#undef __builtin_vsnprintf
#undef __builtin_vsprintf

/*
 * Default configuration: simply direct all calls to MSVCRT...
 */
#ifdef _UCRT
#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"
#endif
# 495 "C:/Msys2/mingw64/include/stdio.h" 3
  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl fprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl printf(const char * __restrict__ _Format,...);
  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl sprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;

  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl vfprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,va_list _ArgList);
  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl vprintf(const char * __restrict__ _Format,va_list _ArgList);
  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl vsprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,va_list _Args) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;

  __MINGW_ATTRIB_DEPRECATED_SEC_WARN
  __attribute__((__format__ (__MINGW_SCANF_FORMAT, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
  __MINGW_ATTRIB_DEPRECATED_SEC_WARN
  __attribute__((__format__ (__MINGW_SCANF_FORMAT, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl scanf(const char * __restrict__ _Format,...);
  __MINGW_ATTRIB_DEPRECATED_SEC_WARN
  __attribute__((__format__ (__MINGW_SCANF_FORMAT, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...);
#ifdef _GNU_SOURCE
  __attribute__ ((__format__ (__MINGW_PRINTF_FORMAT, 2, 0)))
  int __cdecl vasprintf(char ** __restrict__ _Ret,const char * __restrict__ _Format,va_list _Args);
  __attribute__ ((__format__ (__MINGW_PRINTF_FORMAT, 2, 3)))
  int __cdecl asprintf(char ** __restrict__ _Ret,const char * __restrict__ _Format,...);
#endif /*_GNU_SOURCE*/
# 524 "C:/Msys2/mingw64/include/stdio.h" 3

  __attribute__((__format__ (__MINGW_SCANF_FORMAT, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int vfscanf (FILE *__stream,  const char *__format, __builtin_va_list __local_argv);

  __attribute__((__format__ (__MINGW_SCANF_FORMAT, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int vsscanf (const char * __restrict__ __source, const char * __restrict__ __format, __builtin_va_list __local_argv);
  __attribute__((__format__ (__MINGW_SCANF_FORMAT, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
  int vscanf(const char *__format,  __builtin_va_list __local_argv);

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif
# 536 "C:/Msys2/mingw64/include/stdio.h" 3

#else
# 538 "C:/Msys2/mingw64/include/stdio.h" 3
  __attribute__((__format__ (ms_printf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl fprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
  __attribute__((__format__ (ms_printf, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl printf(const char * __restrict__ _Format,...);
  __attribute__((__format__ (ms_printf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl sprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;

  __attribute__((__format__ (ms_printf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl vfprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,va_list _ArgList);
  __attribute__((__format__ (ms_printf, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl vprintf(const char * __restrict__ _Format,va_list _ArgList);
  __attribute__((__format__ (ms_printf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl vsprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,va_list _Args) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;

  __attribute__((__format__ (ms_scanf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  __attribute__((__format__ (ms_scanf, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl scanf(const char * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  __attribute__((__format__ (ms_scanf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
#ifdef _GNU_SOURCE
  int __cdecl vasprintf(char ** __restrict__ __ret,const char * __restrict__ __format,va_list __ap)  __attribute__ ((format (__MINGW_PRINTF_FORMAT, 2, 0)));
  int __cdecl asprintf(char ** __restrict__ __ret,const char * __restrict__ __format,...) __attribute__ ((format (__MINGW_PRINTF_FORMAT, 2, 3)));
#endif /*_GNU_SOURCE*/
# 562 "C:/Msys2/mingw64/include/stdio.h" 3
#ifndef __NO_ISOCEXT  /* externs in libmingwex.a */
#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"
#endif
# 567 "C:/Msys2/mingw64/include/stdio.h" 3

  __attribute__((__format__ (ms_scanf, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __ms_vscanf(const char * __restrict__ Format, va_list argp);
  __attribute__((__format__ (ms_scanf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);
  __attribute__((__format__ (ms_scanf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);

  __mingw_ovr
  __attribute__((__format__ (ms_scanf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int vfscanf (FILE *__stream,  const char *__format, __builtin_va_list __local_argv)
  {
    return __ms_vfscanf (__stream, __format, __local_argv);
  }

  __mingw_ovr
  __attribute__((__format__ (ms_scanf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
  int vsscanf (const char * __restrict__ __source, const char * __restrict__ __format, __builtin_va_list __local_argv)
  {
    return __ms_vsscanf( __source, __format, __local_argv );
  }
  __mingw_ovr
  __attribute__((__format__ (ms_scanf, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
  int vscanf(const char *__format,  __builtin_va_list __local_argv)
  {
    return __ms_vscanf (__format, __local_argv);
  }

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif
# 598 "C:/Msys2/mingw64/include/stdio.h" 3

#endif /* __NO_ISOCEXT */
# 600 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* _UCRT */
# 601 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* __USE_MINGW_ANSI_STDIO */
# 602 "C:/Msys2/mingw64/include/stdio.h" 3

  _CRTIMP int __cdecl _filbuf(FILE *_File);
  _CRTIMP int __cdecl _flsbuf(int _Ch,FILE *_File);
#ifdef _POSIX_
  _CRTIMP FILE *__cdecl _fsopen(const char *_Filename,const char *_Mode);
#else
# 608 "C:/Msys2/mingw64/include/stdio.h" 3
  _CRTIMP FILE *__cdecl _fsopen(const char *_Filename,const char *_Mode,int _ShFlag);
#endif
# 610 "C:/Msys2/mingw64/include/stdio.h" 3
  void __cdecl clearerr(FILE *_File);
  int __cdecl fclose(FILE *_File);
  _CRTIMP int __cdecl _fcloseall(void);
#ifdef _POSIX_
  FILE *__cdecl fdopen(int _FileHandle,const char *_Mode) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
#else
# 616 "C:/Msys2/mingw64/include/stdio.h" 3
  _CRTIMP FILE *__cdecl _fdopen(int _FileHandle,const char *_Mode);
#endif
# 618 "C:/Msys2/mingw64/include/stdio.h" 3
  int __cdecl feof(FILE *_File);
  int __cdecl ferror(FILE *_File);
  int __cdecl fflush(FILE *_File);
  int __cdecl fgetc(FILE *_File);
  _CRTIMP int __cdecl _fgetchar(void);
  int __cdecl fgetpos(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos); /* 64bit only, no 32bit version */
  int __cdecl fgetpos64(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos); /* fgetpos already 64bit */
  char *__cdecl fgets(char * __restrict__ _Buf,int _MaxCount,FILE * __restrict__ _File);
  _CRTIMP int __cdecl _fileno(FILE *_File);
#ifdef _POSIX_
  int __cdecl fileno(FILE *_File) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
#endif
# 630 "C:/Msys2/mingw64/include/stdio.h" 3
  _CRTIMP char *__cdecl _tempnam(const char *_DirName,const char *_FilePrefix);
  _CRTIMP int __cdecl _flushall(void);
  FILE *__cdecl fopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  FILE *fopen64(const char * __restrict__ filename,const char * __restrict__  mode);
  int __cdecl fputc(int _Ch,FILE *_File);
  _CRTIMP int __cdecl _fputchar(int _Ch);
  int __cdecl fputs(const char * __restrict__ _Str,FILE * __restrict__ _File);
  size_t __cdecl fread(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  FILE *__cdecl freopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode,FILE * __restrict__ _File) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  int __cdecl fsetpos(FILE *_File,const fpos_t *_Pos);
  int __cdecl fsetpos64(FILE *_File,const fpos_t *_Pos); /* fsetpos already 64bit */
  int __cdecl fseek(FILE *_File,long _Offset,int _Origin);
  long __cdecl ftell(FILE *_File);

  /* Shouldn't be any fseeko32 in glibc, 32bit to 64bit casting should be fine */
  /* int fseeko32(FILE* stream, _off_t offset, int whence);*/ /* fseeko32 redirects to fseeko64 */
  _CRTIMP int __cdecl _fseeki64(FILE *_File,__int64 _Offset,int _Origin);
  _CRTIMP __int64 __cdecl _ftelli64(FILE *_File);
#ifdef _UCRT
  __mingw_static_ovr int fseeko(FILE *_File, _off_t _Offset, int _Origin) {
    return fseek(_File, _Offset, _Origin);
  }
  __mingw_static_ovr int fseeko64(FILE *_File, _off64_t _Offset, int _Origin) {
    return _fseeki64(_File, _Offset, _Origin);
  }
  __mingw_static_ovr _off_t ftello(FILE *_File) {
    return ftell(_File);
  }
  __mingw_static_ovr _off64_t ftello64(FILE *_File) {
    return _ftelli64(_File);
  }
#else
# 662 "C:/Msys2/mingw64/include/stdio.h" 3
  int fseeko64(FILE* stream, _off64_t offset, int whence);
  int fseeko(FILE* stream, _off_t offset, int whence);
  /* Returns truncated 64bit off_t */
  _off_t ftello(FILE * stream);
  _off64_t ftello64(FILE * stream);
#endif
# 668 "C:/Msys2/mingw64/include/stdio.h" 3

#ifndef _FILE_OFFSET_BITS_SET_FSEEKO
#define _FILE_OFFSET_BITS_SET_FSEEKO
#if 0 /* disabled by -frewrite-includes */
#if (defined(_FILE_OFFSET_BITS) && (_FILE_OFFSET_BITS == 64))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 672 "C:/Msys2/mingw64/include/stdio.h" 3
#define fseeko fseeko64
#endif /* (defined(_FILE_OFFSET_BITS) && (_FILE_OFFSET_BITS == 64)) */
# 674 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* _FILE_OFFSET_BITS_SET_FSEEKO */
# 675 "C:/Msys2/mingw64/include/stdio.h" 3

#ifndef _FILE_OFFSET_BITS_SET_FTELLO
#define _FILE_OFFSET_BITS_SET_FTELLO
#if 0 /* disabled by -frewrite-includes */
#if (defined(_FILE_OFFSET_BITS) && (_FILE_OFFSET_BITS == 64))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 679 "C:/Msys2/mingw64/include/stdio.h" 3
#define ftello ftello64
#endif /* (defined(_FILE_OFFSET_BITS) && (_FILE_OFFSET_BITS == 64)) */
# 681 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* _FILE_OFFSET_BITS_SET_FTELLO */
# 682 "C:/Msys2/mingw64/include/stdio.h" 3

  size_t __cdecl fwrite(const void * __restrict__ _Str,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  int __cdecl getc(FILE *_File);
  int __cdecl getchar(void);
  _CRTIMP int __cdecl _getmaxstdio(void);
  char *__cdecl gets(char *_Buffer) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  int __cdecl _getw(FILE *_File);
#ifndef _CRT_PERROR_DEFINED
#define _CRT_PERROR_DEFINED
  void __cdecl perror(const char *_ErrMsg);
#endif
# 693 "C:/Msys2/mingw64/include/stdio.h" 3
#ifdef _CRT_USE_WINAPI_FAMILY_DESKTOP_APP
  _CRTIMP int __cdecl _pclose(FILE *_File);
  _CRTIMP FILE *__cdecl _popen(const char *_Command,const char *_Mode);
#if 0 /* disabled by -frewrite-includes */
#if !defined(NO_OLDNAMES) && !defined(popen)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 697 "C:/Msys2/mingw64/include/stdio.h" 3
#define popen	_popen
#define pclose	_pclose
#endif
# 700 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* _CRT_USE_WINAPI_FAMILY_DESKTOP_APP */
# 701 "C:/Msys2/mingw64/include/stdio.h" 3
  int __cdecl putc(int _Ch,FILE *_File);
  int __cdecl putchar(int _Ch);
  int __cdecl puts(const char *_Str);
  _CRTIMP int __cdecl _putw(int _Word,FILE *_File);
#ifndef _CRT_DIRECTORY_DEFINED
#define _CRT_DIRECTORY_DEFINED
  int __cdecl remove(const char *_Filename);
  int __cdecl rename(const char *_OldFilename,const char *_NewFilename);
  _CRTIMP int __cdecl _unlink(const char *_Filename);
#ifndef	NO_OLDNAMES
  int __cdecl unlink(const char *_Filename) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
#endif
# 713 "C:/Msys2/mingw64/include/stdio.h" 3
#endif
# 714 "C:/Msys2/mingw64/include/stdio.h" 3
  void __cdecl rewind(FILE *_File);
  _CRTIMP int __cdecl _rmtmp(void);
  void __cdecl setbuf(FILE * __restrict__ _File,char * __restrict__ _Buffer) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP int __cdecl _setmaxstdio(int _Max);
  _CRTIMP unsigned int __cdecl _set_output_format(unsigned int _Format);
  _CRTIMP unsigned int __cdecl _get_output_format(void);
  int __cdecl setvbuf(FILE * __restrict__ _File,char * __restrict__ _Buf,int _Mode,size_t _Size);
#ifdef _UCRT
  __mingw_ovr
  __MINGW_ATTRIB_PURE
  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
  int __cdecl _scprintf(const char * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vsprintf(_CRT_INTERNAL_PRINTF_STANDARD_SNPRINTF_BEHAVIOR, NULL, 0, _Format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  __mingw_ovr __MINGW_ATTRIB_DEPRECATED_SEC_WARN
  __attribute__((__format__ (__MINGW_SCANF_FORMAT, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
  int __cdecl _snscanf(const char * __restrict__ _Src,size_t _MaxCount,const char * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vsscanf(0, _Src, _MaxCount, _Format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
#else
# 746 "C:/Msys2/mingw64/include/stdio.h" 3
  __MINGW_ATTRIB_PURE
  __attribute__((__format__ (ms_printf, 1, 2))) __MINGW_ATTRIB_NONNULL(1)
  _CRTIMP int __cdecl _scprintf(const char * __restrict__ _Format,...);
  __attribute__((__format__ (ms_scanf, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
  _CRTIMP int __cdecl _snscanf(const char * __restrict__ _Src,size_t _MaxCount,const char * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
#endif
# 752 "C:/Msys2/mingw64/include/stdio.h" 3
  __MINGW_ATTRIB_PURE
  __attribute__((__format__ (ms_printf, 1, 0))) __MINGW_ATTRIB_NONNULL(1)
  _CRTIMP int __cdecl _vscprintf(const char * __restrict__ _Format,va_list _ArgList);
  FILE *__cdecl tmpfile(void) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  char *__cdecl tmpnam(char *_Buffer);
  int __cdecl ungetc(int _Ch,FILE *_File);

#ifdef _UCRT
  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 3, 0))) __MINGW_ATTRIB_NONNULL(3)
  int __cdecl _vsnprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,va_list _Args) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  __mingw_ovr __MINGW_ATTRIB_DEPRECATED_SEC_WARN
  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
  int __cdecl _snprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = _vsnprintf(_Dest, _Count, _Format, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
#else
# 774 "C:/Msys2/mingw64/include/stdio.h" 3
  __attribute__((__format__ (ms_printf, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
  _CRTIMP int __cdecl _snprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  __attribute__((__format__ (ms_printf, 3, 0))) __MINGW_ATTRIB_NONNULL(3)
  _CRTIMP int __cdecl _vsnprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,va_list _Args) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
#endif
# 779 "C:/Msys2/mingw64/include/stdio.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_LEVEL > 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 781 "C:/Msys2/mingw64/include/stdio.h" 3

char * __cdecl __gets_chk(char *, size_t);
char * __cdecl __mingw_call_gets_warn(char *) __MINGW_ASM_CALL(gets)
  __attribute__((__warning__("Using gets() is always unsafe - use fgets() instead")));
char * __cdecl __mingw_call_fgets(char * __restrict__, int, FILE * __restrict__) __MINGW_ASM_CALL(fgets);
size_t __cdecl __mingw_call_fread(void * __restrict__, size_t, size_t, FILE * __restrict__) __MINGW_ASM_CALL(fread);
char * __cdecl __mingw_call_tmpnam(char *) __MINGW_ASM_CALL(tmpnam);

__mingw_bos_extern_ovr
char * gets(char * __dst)
{
  if (__mingw_bos_known(__dst))
    return __gets_chk(__dst, __mingw_bos(__dst, 1));
  return __mingw_call_gets_warn(__dst);
}

__mingw_bos_extern_ovr
char * fgets(char * __restrict__ __dst, int __n, FILE * __restrict__ __f)
{
  __mingw_bos_ptr_chk_warn(__dst, __n, 1);
  return __mingw_call_fgets(__dst, __n, __f);
}

__mingw_bos_extern_ovr
size_t fread(void * __restrict__ __dst, size_t __sz, size_t __n, FILE * __restrict__ __f)
{
  __mingw_bos_ptr_chk_warn(__dst, __sz * __n, 0);
  return __mingw_call_fread(__dst, __sz, __n, __f);
}

__mingw_bos_extern_ovr
char * tmpnam(char * __dst)
{
  __mingw_bos_ptr_chk_warn(__dst, L_tmpnam, 1);
  return __mingw_call_tmpnam(__dst);
}

#endif /* __MINGW_FORTIFY_LEVEL > 0 */
# 819 "C:/Msys2/mingw64/include/stdio.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __USE_MINGW_ANSI_STDIO == 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 821 "C:/Msys2/mingw64/include/stdio.h" 3

#ifdef _UCRT
#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"
#endif
# 827 "C:/Msys2/mingw64/include/stdio.h" 3
  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 3, 0))) __MINGW_ATTRIB_NONNULL(3)
  int vsnprintf (char * __restrict__ __stream, size_t __n, const char * __restrict__ __format, va_list __local_argv);

  __attribute__((__format__ (__MINGW_PRINTF_FORMAT, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
  int snprintf (char * __restrict__ __stream, size_t __n, const char * __restrict__ __format, ...);
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif
# 835 "C:/Msys2/mingw64/include/stdio.h" 3
#else
# 836 "C:/Msys2/mingw64/include/stdio.h" 3

/* this is here to deal with software defining
 * vsnprintf as _vsnprintf, eg. libxml2.  */

#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wshadow"
#endif
# 844 "C:/Msys2/mingw64/include/stdio.h" 3

  __attribute__((__format__ (ms_printf, 3, 0))) __MINGW_ATTRIB_NONNULL(3)
  int __cdecl __ms_vsnprintf(char * __restrict__ d,size_t n,const char * __restrict__ format,va_list arg)
    __MINGW_ATTRIB_DEPRECATED_MSVC2005 __MINGW_ATTRIB_DEPRECATED_SEC_WARN;

  __mingw_bos_ovr
  __attribute__((__format__ (ms_printf, 3, 0))) __MINGW_ATTRIB_NONNULL(3)
  int vsnprintf (char * __restrict__ __stream, size_t __n, const char * __restrict__ __format, va_list __local_argv)
  {
#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_LEVEL > 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 854 "C:/Msys2/mingw64/include/stdio.h" 3
    __mingw_bos_ptr_chk_warn(__stream, __n, 1);
#endif
# 856 "C:/Msys2/mingw64/include/stdio.h" 3
    if (__builtin_constant_p(__n) && __n == 0)
      return _vscprintf(__format, __local_argv);
    return __ms_vsnprintf (__stream, __n, __format, __local_argv);
  }

  __attribute__((__format__ (ms_printf, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
  int __cdecl __ms_snprintf(char * __restrict__ s, size_t n, const char * __restrict__  format, ...);

#ifndef __NO_ISOCEXT
#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_VA_ARG
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 866 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_bos_ovr
__attribute__((__format__ (ms_printf, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
int snprintf (char * __restrict__ __stream, size_t __n, const char * __restrict__ __format, ...)
{
  __mingw_bos_ptr_chk_warn(__stream, __n, 1);
  if (__builtin_constant_p(__n) && __n == 0)
    return _scprintf(__format, __builtin_va_arg_pack());
  return __ms_snprintf(__stream, __n, __format, __builtin_va_arg_pack());
}

#else /* !__MINGW_FORTIFY_VA_ARG */
# 878 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_ovr
__attribute__((__format__ (ms_printf, 3, 4))) __MINGW_ATTRIB_NONNULL(3)
int snprintf (char * __restrict__ __stream, size_t __n, const char * __restrict__ __format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  if (__builtin_constant_p(__n) && __n == 0)
    __retval = _vscprintf(__format, __local_argv);
  else
    __retval = __ms_vsnprintf (__stream, __n, __format, __local_argv);
  __builtin_va_end( __local_argv );
  return __retval;
}

#endif /* !__MINGW_FORTIFY_VA_ARG */
# 894 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* !__NO_ISOCEXT */
# 895 "C:/Msys2/mingw64/include/stdio.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_VA_ARG
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 897 "C:/Msys2/mingw64/include/stdio.h" 3

int __cdecl __mingw_call_ms_sprintf(char * __restrict__, const char * __restrict__, ...) __MINGW_ASM_CALL(sprintf);

__mingw_bos_extern_ovr
__attribute__((__format__ (ms_printf, 2, 3))) __MINGW_ATTRIB_NONNULL(2)
int sprintf (char * __restrict__ __stream, const char * __restrict__ __format, ...)
{
  if (__mingw_bos_known(__stream)) {
    int __retval = __ms_snprintf( __stream, __mingw_bos(__stream, 1), __format, __builtin_va_arg_pack() );
    if (__retval >= 0)
      __mingw_bos_ptr_chk(__stream, (size_t)__retval + 1, 1);
    return __retval;
  }
  return __mingw_call_ms_sprintf( __stream, __format, __builtin_va_arg_pack() );
}

#endif /* __MINGW_FORTIFY_VA_ARG */
# 914 "C:/Msys2/mingw64/include/stdio.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_LEVEL > 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 916 "C:/Msys2/mingw64/include/stdio.h" 3

int __cdecl __mingw_call_ms_vsprintf(char * __restrict__, const char * __restrict__, va_list) __MINGW_ASM_CALL(vsprintf);

__mingw_bos_extern_ovr
__attribute__((__format__ (ms_printf, 2, 0))) __MINGW_ATTRIB_NONNULL(2)
int vsprintf (char * __restrict__ __stream, const char * __restrict__ __format, va_list __local_argv)
{
  if (__mingw_bos_known(__stream)) {
    int __retval = __ms_vsnprintf( __stream, __mingw_bos(__stream, 1), __format, __local_argv );
    if (__retval >= 0)
      __mingw_bos_ptr_chk(__stream, (size_t)__retval + 1, 1);
    return __retval;
  }
  return __mingw_call_ms_vsprintf( __stream, __format, __local_argv );
}

#endif /* __MINGW_FORTIFY_LEVEL > 0 */
# 933 "C:/Msys2/mingw64/include/stdio.h" 3

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif
# 937 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* _UCRT */
# 938 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* __USE_MINGW_ANSI_STDIO */
# 939 "C:/Msys2/mingw64/include/stdio.h" 3

  _CRTIMP int __cdecl _set_printf_count_output(int _Value);
  _CRTIMP int __cdecl _get_printf_count_output(void);

#ifndef _WSTDIO_DEFINED
#define _WSTDIO_DEFINED

/* __attribute__((__format__ (gnu_wscanf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (gnu_wscanf, 2, 0))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_vswscanf (const wchar_t * __restrict__ _Str,const wchar_t * __restrict__ Format,va_list argp);
/* __attribute__((__format__ (gnu_wscanf, 1, 2))) */ __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __mingw_wscanf(const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (gnu_wscanf, 1, 0))) */ __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __mingw_vwscanf(const wchar_t * __restrict__ Format, va_list argp);
/* __attribute__((__format__ (gnu_wscanf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (gnu_wscanf, 2, 0))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_vfwscanf (FILE * __restrict__ fp, const wchar_t * __restrict__ Format,va_list argp);

/* __attribute__((__format__ (gnu_wprintf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (gnu_wprintf, 1, 2))) */ __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __mingw_wprintf(const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (gnu_wprintf, 2, 0))) */__MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
/*__attribute__((__format__ (gnu_wprintf, 1, 0))) */ __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __mingw_vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
/* __attribute__((__format__ (gnu_wprintf, 3, 4))) */ __MINGW_ATTRIB_NONNULL(3)
  int __cdecl __mingw_snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
/* __attribute__((__format__ (gnu_wprintf, 3, 0))) */ __MINGW_ATTRIB_NONNULL(3)
  int __cdecl __mingw_vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);
/* __attribute__((__format__ (gnu_wprintf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...);
/* __attribute__((__format__ (gnu_wprintf, 2, 0))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __mingw_vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list);

/* __attribute__((__format__ (ms_wscanf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (ms_wscanf, 1, 2))) */ __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __ms_wscanf(const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (ms_wscanf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);

/* __attribute__((__format__ (ms_wprintf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (ms_wprintf, 1, 2))) */ __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __ms_wprintf(const wchar_t * __restrict__ _Format,...);
/* __attribute__((__format__ (ms_wprintf, 2, 0))) */__MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
/*__attribute__((__format__ (ms_wprintf, 1, 0))) */ __MINGW_ATTRIB_NONNULL(1)
  int __cdecl __ms_vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
/* __attribute__((__format__ (ms_wprintf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...);
/* __attribute__((__format__ (ms_wprintf, 2, 0))) */ __MINGW_ATTRIB_NONNULL(2)
  int __cdecl __ms_vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list);

#ifdef _UCRT
  int __cdecl __stdio_common_vswprintf(unsigned __int64 options, wchar_t *str, size_t len, const wchar_t *format, _locale_t locale, va_list valist);
  int __cdecl __stdio_common_vfwprintf(unsigned __int64 options, FILE *file, const wchar_t *format, _locale_t locale, va_list valist);
  int __cdecl __stdio_common_vswscanf(unsigned __int64 options, const wchar_t *input, size_t length, const wchar_t *format, _locale_t locale, va_list valist);
  int __cdecl __stdio_common_vfwscanf(unsigned __int64 options, FILE *file, const wchar_t *format, _locale_t locale, va_list valist);
#endif
# 1002 "C:/Msys2/mingw64/include/stdio.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __USE_MINGW_ANSI_STDIO && !defined(_CRTBLD)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1004 "C:/Msys2/mingw64/include/stdio.h" 3
/*
 * User has expressed a preference for C99 conformance...
 */

__mingw_ovr
/* __attribute__((__format__ (gnu_wscanf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
int swscanf(const wchar_t *__source, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vswscanf( __source, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

__mingw_ovr
/* __attribute__((__format__ (gnu_wscanf, 1, 2))) */ __MINGW_ATTRIB_NONNULL(1)
int wscanf(const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfwscanf( stdin, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

__mingw_ovr
/* __attribute__((__format__ (gnu_wscanf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
int fwscanf(FILE *__stream, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfwscanf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

#ifndef __NO_ISOCEXT  /* externs in libmingwex.a */
__mingw_ovr
/* __attribute__((__format__ (gnu_wscanf, 2, 0))) */ __MINGW_ATTRIB_NONNULL(2)
int vswscanf (const wchar_t * __restrict__ __source, const wchar_t * __restrict__ __format, __builtin_va_list __local_argv)
{
  return __mingw_vswscanf( __source, __format, __local_argv );
}

__mingw_ovr
/* __attribute__((__format__ (gnu_wscanf, 1, 0))) */ __MINGW_ATTRIB_NONNULL(1)
int vwscanf(const wchar_t *__format,  __builtin_va_list __local_argv)
{
  return __mingw_vfwscanf( stdin, __format, __local_argv );
}

__mingw_ovr
/* __attribute__((__format__ (gnu_wscanf, 2, 0))) */ __MINGW_ATTRIB_NONNULL(2)
int vfwscanf (FILE *__stream,  const wchar_t *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfwscanf( __stream, __format, __local_argv );
}
#endif /* __NO_ISOCEXT */
# 1063 "C:/Msys2/mingw64/include/stdio.h" 3



__mingw_ovr
/* __attribute__((__format__ (gnu_wprintf, 2, 3))) */ __MINGW_ATTRIB_NONNULL(2)
int fwprintf (FILE *__stream, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfwprintf( __stream, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

__mingw_ovr
/* __attribute__((__format__ (gnu_wprintf, 1, 2))) */ __MINGW_ATTRIB_NONNULL(1)
int wprintf (const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vfwprintf( stdout, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

__mingw_ovr
/* __attribute__((__format__ (gnu_wprintf, 2, 0))) */ __MINGW_ATTRIB_NONNULL(2)
int vfwprintf (FILE *__stream, const wchar_t *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfwprintf( __stream, __format, __local_argv );
}

__mingw_ovr
/* __attribute__((__format__ (gnu_wprintf, 1, 0))) */ __MINGW_ATTRIB_NONNULL(1)
int vwprintf (const wchar_t *__format, __builtin_va_list __local_argv)
{
  return __mingw_vfwprintf( stdout, __format, __local_argv );
}

#ifndef __NO_ISOCEXT  /* externs in libmingwex.a */

#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_VA_ARG
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1105 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_bos_ovr
/* __attribute__((__format__ (gnu_wprintf, 3, 4))) */ __MINGW_ATTRIB_NONNULL(3)
int snwprintf (wchar_t *__stream, size_t __n, const wchar_t *__format, ...)
{
  __mingw_bos_ptr_chk_warn(__stream, __n * sizeof(wchar_t), 1);
  return __mingw_snwprintf( __stream, __n, __format, __builtin_va_arg_pack() );
}

#else /* !__MINGW_FORTIFY_VA_ARG */
# 1115 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_ovr
/* __attribute__((__format__ (gnu_wprintf, 3, 4))) */ __MINGW_ATTRIB_NONNULL(3)
int snwprintf (wchar_t *__stream, size_t __n, const wchar_t *__format, ...)
{
  int __retval;
  __builtin_va_list __local_argv; __builtin_va_start( __local_argv, __format );
  __retval = __mingw_vsnwprintf( __stream, __n, __format, __local_argv );
  __builtin_va_end( __local_argv );
  return __retval;
}

#endif /* __MINGW_FORTIFY_VA_ARG */
# 1128 "C:/Msys2/mingw64/include/stdio.h" 3

__mingw_bos_ovr
/* __attribute__((__format__ (gnu_wprintf, 3, 0))) */ __MINGW_ATTRIB_NONNULL(3)
int vsnwprintf (wchar_t *__stream, size_t __n, const wchar_t *__format, __builtin_va_list __local_argv)
{
#if 0 /* disabled by -frewrite-includes */
#if __MINGW_FORTIFY_LEVEL > 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1134 "C:/Msys2/mingw64/include/stdio.h" 3
  __mingw_bos_ptr_chk_warn(__stream, __n * sizeof(wchar_t), 1);
#endif
# 1136 "C:/Msys2/mingw64/include/stdio.h" 3
  return __mingw_vsnwprintf( __stream, __n, __format, __local_argv );
}
#endif /* __NO_ISOCEXT */
# 1139 "C:/Msys2/mingw64/include/stdio.h" 3

#else /* !__USE_MINGW_ANSI_STDIO */
# 1141 "C:/Msys2/mingw64/include/stdio.h" 3

#ifdef _UCRT
  __mingw_ovr __MINGW_ATTRIB_DEPRECATED_SEC_WARN
  int __cdecl fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vfwscanf(_CRT_INTERNAL_LOCAL_SCANF_OPTIONS, _File, _Format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  __mingw_ovr __MINGW_ATTRIB_DEPRECATED_SEC_WARN
  int __cdecl swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vswscanf(_CRT_INTERNAL_LOCAL_SCANF_OPTIONS, _Src, (size_t)-1, _Format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  __mingw_ovr __MINGW_ATTRIB_DEPRECATED_SEC_WARN
  int __cdecl wscanf(const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vfwscanf(_CRT_INTERNAL_LOCAL_SCANF_OPTIONS, stdin, _Format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  __mingw_ovr
  __MINGW_ATTRIB_NONNULL(2)
  int vfwscanf (FILE *__stream,  const wchar_t *__format, va_list __local_argv)
  {
    return __stdio_common_vfwscanf(_CRT_INTERNAL_LOCAL_SCANF_OPTIONS, __stream, __format, NULL, __local_argv);
  }

  __mingw_ovr
  __MINGW_ATTRIB_NONNULL(2)
  int vswscanf (const wchar_t * __restrict__ __source, const wchar_t * __restrict__ __format, va_list __local_argv)
  {
    return __stdio_common_vswscanf(_CRT_INTERNAL_LOCAL_SCANF_OPTIONS, __source, (size_t)-1, __format, NULL, __local_argv);
  }
  __mingw_ovr
  __MINGW_ATTRIB_NONNULL(1)
  int vwscanf(const wchar_t *__format, va_list __local_argv)
  {
    return __stdio_common_vfwscanf(_CRT_INTERNAL_LOCAL_SCANF_OPTIONS, stdin, __format, NULL, __local_argv);
  }

  __mingw_static_ovr
  int __cdecl fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vfwprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _File, _Format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  __mingw_ovr
  int __cdecl wprintf(const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vfwprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, stdout, _Format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  __mingw_ovr
  int __cdecl vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList)
  {
    return __stdio_common_vfwprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _File, _Format, NULL, _ArgList);
  }
  __mingw_ovr
  int __cdecl vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList)
  {
    return __stdio_common_vfwprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, stdout, _Format, NULL, _ArgList);
  }
#else
# 1224 "C:/Msys2/mingw64/include/stdio.h" 3

  int __cdecl fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  int __cdecl swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  int __cdecl wscanf(const wchar_t * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
#ifndef __NO_ISOCEXT  /* externs in libmingwex.a */
  int __cdecl __ms_vwscanf (const wchar_t * __restrict__ , va_list);
  int __cdecl __ms_vfwscanf (FILE * __restrict__ ,const wchar_t * __restrict__ ,va_list);
  int __cdecl __ms_vswscanf (const wchar_t * __restrict__ ,const wchar_t * __restrict__ ,va_list);

  __mingw_ovr
  __MINGW_ATTRIB_NONNULL(2)
  int vfwscanf (FILE *__stream,  const wchar_t *__format, __builtin_va_list __local_argv)
  {
    return __ms_vfwscanf (__stream, __format, __local_argv);
  }

  __mingw_ovr
  __MINGW_ATTRIB_NONNULL(2)
  int vswscanf (const wchar_t * __restrict__ __source, const wchar_t * __restrict__ __format, __builtin_va_list __local_argv)
  {
    return __ms_vswscanf( __source, __format, __local_argv );
  }
  __mingw_ovr
  __MINGW_ATTRIB_NONNULL(1)
  int vwscanf(const wchar_t *__format,  __builtin_va_list __local_argv)
  {
    return __ms_vwscanf (__format, __local_argv);
  }

#endif /* __NO_ISOCEXT */
# 1254 "C:/Msys2/mingw64/include/stdio.h" 3

  int __cdecl fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  int __cdecl wprintf(const wchar_t * __restrict__ _Format,...);
  int __cdecl vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  int __cdecl vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
#endif /* _UCRT */
# 1260 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* __USE_MINGW_ANSI_STDIO */
# 1261 "C:/Msys2/mingw64/include/stdio.h" 3

#ifndef WEOF
#define WEOF (wint_t)(0xFFFF)
#endif
# 1265 "C:/Msys2/mingw64/include/stdio.h" 3

#ifdef _POSIX_
  _CRTIMP FILE *__cdecl _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode);
#else
# 1269 "C:/Msys2/mingw64/include/stdio.h" 3
  _CRTIMP FILE *__cdecl _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);
#endif
# 1271 "C:/Msys2/mingw64/include/stdio.h" 3

  wint_t __cdecl fgetwc(FILE *_File);
  _CRTIMP wint_t __cdecl _fgetwchar(void);
  wint_t __cdecl fputwc(wchar_t _Ch,FILE *_File);
  _CRTIMP wint_t __cdecl _fputwchar(wchar_t _Ch);
  wint_t __cdecl getwc(FILE *_File);
  wint_t __cdecl getwchar(void);
  wint_t __cdecl putwc(wchar_t _Ch,FILE *_File);
  wint_t __cdecl putwchar(wchar_t _Ch);
  wint_t __cdecl ungetwc(wint_t _Ch,FILE *_File);
  wchar_t *__cdecl fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int __cdecl fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  _CRTIMP wchar_t *__cdecl _getws(wchar_t *_String) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP int __cdecl _putws(const wchar_t *_Str);

#ifdef _UCRT
  __mingw_ovr
  int __cdecl _scwprintf(const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vswprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS | _CRT_INTERNAL_PRINTF_STANDARD_SNPRINTF_BEHAVIOR, NULL, 0, _Format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  __mingw_static_ovr __MINGW_ATTRIB_DEPRECATED_SEC_WARN
  int __cdecl _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vswprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS | _CRT_INTERNAL_PRINTF_LEGACY_VSPRINTF_NULL_TERMINATION, _Dest, _Count, _Format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  int __cdecl _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;

#if 0 /* disabled by -frewrite-includes */
#if __USE_MINGW_ANSI_STDIO == 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1310 "C:/Msys2/mingw64/include/stdio.h" 3
  __mingw_ovr
  int snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, format);
    __ret = __stdio_common_vswprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS | _CRT_INTERNAL_PRINTF_STANDARD_SNPRINTF_BEHAVIOR, s, n, format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  __mingw_ovr
  int __cdecl vsnwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, va_list arg)
  {
    int __ret = __stdio_common_vswprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, s, n, format, NULL, arg);
    return __ret < 0 ? -1 : __ret;
  }
#endif
# 1327 "C:/Msys2/mingw64/include/stdio.h" 3

  __mingw_ovr
  int __cdecl _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...)
  {
    __builtin_va_list __ap;
    int __ret;
    __builtin_va_start(__ap, _Format);
    __ret = __stdio_common_vswprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _Dest, (size_t)-1, _Format, NULL, __ap);
    __builtin_va_end(__ap);
    return __ret;
  }
  __mingw_ovr
  int __cdecl _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args)
  {
    return __stdio_common_vswprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _Dest, (size_t)-1, _Format, NULL, _Args);
  }

  __mingw_ovr
  int __cdecl _vscwprintf(const wchar_t * __restrict__ _Format, va_list _ArgList)
  {
      int _Result = __stdio_common_vswprintf(_CRT_INTERNAL_PRINTF_STANDARD_SNPRINTF_BEHAVIOR, NULL, 0, _Format, NULL, _ArgList);
      return _Result < 0 ? -1 : _Result;
  }
#else
# 1351 "C:/Msys2/mingw64/include/stdio.h" 3
  _CRTIMP int __cdecl _scwprintf(const wchar_t * __restrict__ _Format,...);
  _CRTIMP int __cdecl _swprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,...);
  _CRTIMP int __cdecl _vswprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,va_list _ArgList);
  _CRTIMP int __cdecl _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP int __cdecl _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP int __cdecl _vscwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);

#ifndef __NO_ISOCEXT  /* externs in libmingwex.a */

#if 0 /* disabled by -frewrite-includes */
#if __USE_MINGW_ANSI_STDIO == 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1361 "C:/Msys2/mingw64/include/stdio.h" 3
  int __cdecl __ms_snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
  int __cdecl __ms_vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);
  __mingw_ovr
  int snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...)
  {
    int r;
    va_list argp;
    __builtin_va_start (argp, format);
    r = _vsnwprintf (s, n, format, argp);
    __builtin_va_end (argp);
    return r;
  }
  __mingw_ovr
  int __cdecl vsnwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, va_list arg)
  {
    return _vsnwprintf(s,n,format,arg);
  }
#endif
# 1379 "C:/Msys2/mingw64/include/stdio.h" 3

#endif /* ! __NO_ISOCEXT */
# 1381 "C:/Msys2/mingw64/include/stdio.h" 3
  _CRTIMP int __cdecl _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  _CRTIMP int __cdecl _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);
#endif /* _UCRT */
# 1384 "C:/Msys2/mingw64/include/stdio.h" 3

#ifndef RC_INVOKED
#if 0 /* expanded by -frewrite-includes */
#include <swprintf.inl>
#endif /* expanded by -frewrite-includes */
# 1386 "C:/Msys2/mingw64/include/stdio.h" 3
# 1387 "C:/Msys2/mingw64/include/stdio.h" 3
#endif
# 1388 "C:/Msys2/mingw64/include/stdio.h" 3

#ifdef _CRT_NON_CONFORMING_SWPRINTFS
#ifndef __cplusplus
#define _swprintf_l __swprintf_l
#define _vswprintf_l __vswprintf_l
#endif
# 1394 "C:/Msys2/mingw64/include/stdio.h" 3
#endif
# 1395 "C:/Msys2/mingw64/include/stdio.h" 3

  _CRTIMP wchar_t *__cdecl _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);
  _CRTIMP int __cdecl _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  _CRTIMP FILE *__cdecl _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  _CRTIMP FILE *__cdecl _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t *__restrict__  _Mode) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP FILE *__cdecl _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;

#ifndef _CRT_WPERROR_DEFINED
#define _CRT_WPERROR_DEFINED
  _CRTIMP void __cdecl _wperror(const wchar_t *_ErrMsg);
#endif
# 1406 "C:/Msys2/mingw64/include/stdio.h" 3
  _CRTIMP FILE *__cdecl _wpopen(const wchar_t *_Command,const wchar_t *_Mode);
#if 0 /* disabled by -frewrite-includes */
#if !defined(NO_OLDNAMES) && !defined(wpopen)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1408 "C:/Msys2/mingw64/include/stdio.h" 3
#define wpopen	_wpopen
#endif
# 1410 "C:/Msys2/mingw64/include/stdio.h" 3

  _CRTIMP int __cdecl _wremove(const wchar_t *_Filename);
  _CRTIMP wchar_t *__cdecl _wtmpnam(wchar_t *_Buffer);
#if 0 /* disabled by -frewrite-includes */
#if __MSVCRT_VERSION__ >= 0x800
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1414 "C:/Msys2/mingw64/include/stdio.h" 3
  _CRTIMP wint_t __cdecl _fgetwc_nolock(FILE *_File);
  _CRTIMP wint_t __cdecl _fputwc_nolock(wchar_t _Ch,FILE *_File);
  _CRTIMP wint_t __cdecl _ungetwc_nolock(wint_t _Ch,FILE *_File);
#endif
# 1418 "C:/Msys2/mingw64/include/stdio.h" 3

#undef _CRT_GETPUTWCHAR_NOINLINE

#if 0 /* disabled by -frewrite-includes */
#if !defined(__cplusplus) || defined(_CRT_GETPUTWCHAR_NOINLINE) || defined (__CRT__NO_INLINE)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1422 "C:/Msys2/mingw64/include/stdio.h" 3
#define getwchar() fgetwc(stdin)
#define putwchar(_c) fputwc((_c),stdout)
#else
# 1425 "C:/Msys2/mingw64/include/stdio.h" 3
  __CRT_INLINE wint_t __cdecl getwchar() {return (fgetwc(stdin)); }
  __CRT_INLINE wint_t __cdecl putwchar(wchar_t _C) {return (fputwc(_C,stdout)); }
#endif
# 1428 "C:/Msys2/mingw64/include/stdio.h" 3

#define getwc(_stm) fgetwc(_stm)
#define putwc(_c,_stm) fputwc(_c,_stm)
#if 0 /* disabled by -frewrite-includes */
#if __MSVCRT_VERSION__ >= 0x800
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1432 "C:/Msys2/mingw64/include/stdio.h" 3
#define _putwc_nolock(_c,_stm) _fputwc_nolock(_c,_stm)
#define _getwc_nolock(_c) _fgetwc_nolock(_c)
#endif
# 1435 "C:/Msys2/mingw64/include/stdio.h" 3
#endif
# 1436 "C:/Msys2/mingw64/include/stdio.h" 3

#define _STDIO_DEFINED
#endif
# 1439 "C:/Msys2/mingw64/include/stdio.h" 3

#ifdef _UCRT
  _CRTIMP int __cdecl _fgetc_nolock(FILE *_File);
  _CRTIMP int __cdecl _fputc_nolock(int _Char, FILE *_File);
  _CRTIMP int __cdecl _getc_nolock(FILE *_File);
  _CRTIMP int __cdecl _putc_nolock(int _Char, FILE *_File);
#else
# 1446 "C:/Msys2/mingw64/include/stdio.h" 3
#define _fgetc_nolock(_stream) (--(_stream)->_cnt >= 0 ? 0xff & *(_stream)->_ptr++ : _filbuf(_stream))
#define _fputc_nolock(_c,_stream) (--(_stream)->_cnt >= 0 ? 0xff & (*(_stream)->_ptr++ = (char)(_c)) : _flsbuf((_c),(_stream)))
#define _getc_nolock(_stream) _fgetc_nolock(_stream)
#define _putc_nolock(_c,_stream) _fputc_nolock(_c,_stream)
#endif
# 1451 "C:/Msys2/mingw64/include/stdio.h" 3
#define _getchar_nolock() _getc_nolock(stdin)
#define _putchar_nolock(_c) _putc_nolock((_c),stdout)
#define _getwchar_nolock() _getwc_nolock(stdin)
#define _putwchar_nolock(_c) _putwc_nolock((_c),stdout)

  _CRTIMP void __cdecl _lock_file(FILE *_File);
  _CRTIMP void __cdecl _unlock_file(FILE *_File);
#if 0 /* disabled by -frewrite-includes */
#if __MSVCRT_VERSION__ >= 0x800
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1459 "C:/Msys2/mingw64/include/stdio.h" 3
  _CRTIMP int __cdecl _fclose_nolock(FILE *_File);
  _CRTIMP int __cdecl _fflush_nolock(FILE *_File);
  _CRTIMP size_t __cdecl _fread_nolock(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  _CRTIMP int __cdecl _fseek_nolock(FILE *_File,long _Offset,int _Origin);
  _CRTIMP long __cdecl _ftell_nolock(FILE *_File);
  __MINGW_EXTENSION _CRTIMP int __cdecl _fseeki64_nolock(FILE *_File,__int64 _Offset,int _Origin);
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _ftelli64_nolock(FILE *_File);
  _CRTIMP size_t __cdecl _fwrite_nolock(const void * __restrict__ _DstBuf,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  _CRTIMP int __cdecl _ungetc_nolock(int _Ch,FILE *_File);
#endif
# 1469 "C:/Msys2/mingw64/include/stdio.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined(NO_OLDNAMES) || !defined(_POSIX)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1471 "C:/Msys2/mingw64/include/stdio.h" 3
#define P_tmpdir _P_tmpdir
#define SYS_OPEN _SYS_OPEN

  char *__cdecl tempnam(const char *_Directory,const char *_FilePrefix) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  int __cdecl fcloseall(void) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  FILE *__cdecl fdopen(int _FileHandle,const char *_Format) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  int __cdecl fgetchar(void) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  int __cdecl fileno(FILE *_File) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  int __cdecl flushall(void) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  int __cdecl fputchar(int _Ch) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  int __cdecl getw(FILE *_File) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  int __cdecl putw(int _Ch,FILE *_File) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  int __cdecl rmtmp(void) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
#endif
# 1485 "C:/Msys2/mingw64/include/stdio.h" 3

#ifndef __MINGW_MBWC_CONVERT_DEFINED
#define __MINGW_MBWC_CONVERT_DEFINED

/**
 * __mingw_str_wide_utf8
 * Converts a null terminated UCS-2 string to a multibyte (UTF-8) equivalent.
 * Caller is supposed to free allocated buffer with __mingw_str_free().
 * @param[in] wptr Pointer to wide string.
 * @param[out] mbptr Pointer to multibyte string.
 * @param[out] buflen Optional parameter for length of allocated buffer.
 * @return Number of characters converted, 0 for failure.
 *
 * WideCharToMultiByte - http://msdn.microsoft.com/en-us/library/dd374130(VS.85).aspx
 */
int __cdecl __mingw_str_wide_utf8 (const wchar_t * const wptr, char **mbptr, size_t * buflen);

/**
 * __mingw_str_utf8_wide
 * Converts a null terminated UTF-8 string to a UCS-2 equivalent.
 * Caller is supposed to free allocated buffer with __mingw_str_free().
 * @param[out] mbptr Pointer to multibyte string.
 * @param[in] wptr Pointer to wide string.
 * @param[out] buflen Optional parameter for length of allocated buffer.
 * @return Number of characters converted, 0 for failure.
 *
 * MultiByteToWideChar - http://msdn.microsoft.com/en-us/library/dd319072(VS.85).aspx
 */

int __cdecl __mingw_str_utf8_wide (const char *const mbptr, wchar_t ** wptr, size_t * buflen);

/**
 * __mingw_str_free
 * Frees buffer create by __mingw_str_wide_utf8 and __mingw_str_utf8_wide.
 * @param[in] ptr memory block to free.
 *
 */

void __cdecl __mingw_str_free(void *ptr);

#endif /* __MINGW_MBWC_CONVERT_DEFINED */
# 1526 "C:/Msys2/mingw64/include/stdio.h" 3

#ifdef _CRT_USE_WINAPI_FAMILY_DESKTOP_APP
#ifndef _WSPAWN_DEFINED
#define _WSPAWN_DEFINED
  _CRTIMP intptr_t __cdecl _wspawnl(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  _CRTIMP intptr_t __cdecl _wspawnle(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  _CRTIMP intptr_t __cdecl _wspawnlp(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  _CRTIMP intptr_t __cdecl _wspawnlpe(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  _CRTIMP intptr_t __cdecl _wspawnv(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  _CRTIMP intptr_t __cdecl _wspawnve(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  _CRTIMP intptr_t __cdecl _wspawnvp(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  _CRTIMP intptr_t __cdecl _wspawnvpe(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
#endif
# 1539 "C:/Msys2/mingw64/include/stdio.h" 3

#ifndef _P_WAIT
#define _P_WAIT 0
#define _P_NOWAIT 1
#define _OLD_P_OVERLAY 2
#define _P_NOWAITO 3
#define _P_DETACH 4
#define _P_OVERLAY 2

#define _WAIT_CHILD 0
#define _WAIT_GRANDCHILD 1
#endif
# 1551 "C:/Msys2/mingw64/include/stdio.h" 3

#ifndef _SPAWNV_DEFINED
#define _SPAWNV_DEFINED
  _CRTIMP intptr_t __cdecl _spawnv(int _Mode,const char *_Filename,const char *const *_ArgList);
  _CRTIMP intptr_t __cdecl _spawnve(int _Mode,const char *_Filename,const char *const *_ArgList,const char *const *_Env);
  _CRTIMP intptr_t __cdecl _spawnvp(int _Mode,const char *_Filename,const char *const *_ArgList);
  _CRTIMP intptr_t __cdecl _spawnvpe(int _Mode,const char *_Filename,const char *const *_ArgList,const char *const *_Env);
#endif
# 1559 "C:/Msys2/mingw64/include/stdio.h" 3
#endif /* _CRT_USE_WINAPI_FAMILY_DESKTOP_APP */
# 1560 "C:/Msys2/mingw64/include/stdio.h" 3

#ifdef __cplusplus
}
#endif
# 1564 "C:/Msys2/mingw64/include/stdio.h" 3

#pragma pop_macro("snprintf")
#pragma pop_macro("vsnprintf")
#pragma pop_macro("snwprintf")
#pragma pop_macro("vsnwprintf")

#pragma pack(pop)

#if 0 /* expanded by -frewrite-includes */
#include <sec_api/stdio_s.h>
#endif /* expanded by -frewrite-includes */
# 1572 "C:/Msys2/mingw64/include/stdio.h" 3
# 1573 "C:/Msys2/mingw64/include/stdio.h" 3

#endif
# 1575 "C:/Msys2/mingw64/include/stdio.h" 3
# 10 "C:/Msys2/mingw64/include/sec_api/stdio_s.h" 2 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__LIBMSVCRT__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 12 "C:/Msys2/mingw64/include/sec_api/stdio_s.h" 3
/* When building mingw-w64, this should be blank.  */
#define _SECIMP
#else
# 15 "C:/Msys2/mingw64/include/sec_api/stdio_s.h" 3
#ifndef _SECIMP
#define _SECIMP __declspec(dllimport)
#endif /* _SECIMP */
# 18 "C:/Msys2/mingw64/include/sec_api/stdio_s.h" 3
#endif /* defined(_CRTBLD) || defined(__LIBMSVCRT__) */
# 19 "C:/Msys2/mingw64/include/sec_api/stdio_s.h" 3

#ifdef __cplusplus
extern "C" {
#endif
# 23 "C:/Msys2/mingw64/include/sec_api/stdio_s.h" 3

#ifndef _STDIO_S_DEFINED
#define _STDIO_S_DEFINED
  #define L_tmpnam_s L_tmpnam
  #define TMP_MAX_S TMP_MAX

  _CRTIMP errno_t __cdecl clearerr_s(FILE *_File);

  size_t __cdecl fread_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File);

#ifdef _UCRT
  int __cdecl __stdio_common_vsprintf_s(unsigned __int64 _Options, char *_Str, size_t _Len, const char *_Format, _locale_t _Locale, va_list _ArgList);
  int __cdecl __stdio_common_vsprintf_p(unsigned __int64 _Options, char *_Str, size_t _Len, const char *_Format, _locale_t _Locale, va_list _ArgList);
  int __cdecl __stdio_common_vsnprintf_s(unsigned __int64 _Options, char *_Str, size_t _Len, size_t _MaxCount, const char *_Format, _locale_t _Locale, va_list _ArgList);
  int __cdecl __stdio_common_vfprintf_s(unsigned __int64 _Options, FILE *_File, const char *_Format, _locale_t _Locale, va_list _ArgList);
  int __cdecl __stdio_common_vfprintf_p(unsigned __int64 _Options, FILE *_File, const char *_Format, _locale_t _Locale, va_list _ArgList);

  __mingw_ovr int __cdecl _vfscanf_s_l(FILE *_File, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vfscanf(_CRT_INTERNAL_SCANF_SECURECRT, _File, _Format, _Locale, _ArgList);
  }

  __mingw_ovr int __cdecl _fscanf_s_l(FILE *_File, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfscanf_s_l(_File, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl fscanf_s(FILE *_File, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfscanf_s_l(_File, _Format, NULL, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl _scanf_s_l(const char *_Format, _locale_t _Locale ,...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfscanf_s_l(stdin, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl scanf_s(const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfscanf_s_l(stdin, _Format, NULL, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl _vfscanf_l(FILE *_File, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vfscanf(0, _File, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl _fscanf_l(FILE *_File, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfscanf_l(_File, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl _scanf_l(const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfscanf_l(stdin, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl _vsscanf_s_l(const char *_Src, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsscanf(_CRT_INTERNAL_SCANF_SECURECRT, _Src, (size_t)-1, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl vsscanf_s(const char *_Src, const char *_Format, va_list _ArgList)
  {
    return _vsscanf_s_l(_Src, _Format, NULL, _ArgList);
  }
  __mingw_ovr int __cdecl _sscanf_s_l(const char *_Src, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsscanf_s_l(_Src, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl sscanf_s(const char *_Src, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vsscanf_s_l(_Src, _Format, NULL, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl _vsscanf_l(const char *_Src, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsscanf(0, _Src, (size_t)-1, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl _sscanf_l(const char *_Src, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsscanf_l(_Src, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  /* There is no _vsnscanf_s_l nor _vsnscanf_s */
  __mingw_ovr int __cdecl _snscanf_s_l(const char *_Src, size_t _MaxCount, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = __stdio_common_vsscanf(_CRT_INTERNAL_SCANF_SECURECRT, _Src, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl _snscanf_s(const char *_Src, size_t _MaxCount, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = __stdio_common_vsscanf(_CRT_INTERNAL_SCANF_SECURECRT, _Src, _MaxCount, _Format, NULL, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  /* There is no _vsnscanf_l */
  __mingw_ovr int __cdecl _snscanf_l(const char *_Src, size_t _MaxCount, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = __stdio_common_vsscanf(0, _Src, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }


  __mingw_ovr int __cdecl _vfprintf_s_l(FILE *_File, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vfprintf_s(0, _File, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl vfprintf_s(FILE *_File, const char *_Format, va_list _ArgList)
  {
    return _vfprintf_s_l(_File, _Format, NULL, _ArgList);
  }
  __mingw_ovr int __cdecl _vprintf_s_l(const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return _vfprintf_s_l(stdout, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl vprintf_s(const char *_Format, va_list _ArgList)
  {
    return _vfprintf_s_l(stdout, _Format, NULL, _ArgList);
  }
  __mingw_ovr int __cdecl _fprintf_s_l(FILE *_File, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfprintf_s_l(_File, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl _printf_s_l(const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfprintf_s_l(stdout, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl fprintf_s(FILE *_File, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfprintf_s_l(_File, _Format, NULL, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl printf_s(const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfprintf_s_l(stdout, _Format, NULL, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl _vsnprintf_c_l(char *_DstBuf, size_t _MaxCount, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsprintf(0, _DstBuf, _MaxCount, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl _vsnprintf_c(char *_DstBuf, size_t _MaxCount, const char *_Format, va_list _ArgList)
  {
    return _vsnprintf_c_l(_DstBuf, _MaxCount, _Format, NULL, _ArgList);
  }
  __mingw_ovr int __cdecl _snprintf_c_l(char *_DstBuf, size_t _MaxCount, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsnprintf_c_l(_DstBuf, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl _snprintf_c(char *_DstBuf, size_t _MaxCount, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vsnprintf_c_l(_DstBuf, _MaxCount, _Format, NULL, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl _vsnprintf_s_l(char *_DstBuf, size_t _DstSize, size_t _MaxCount, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsnprintf_s(0, _DstBuf, _DstSize, _MaxCount, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl vsnprintf_s(char *_DstBuf, size_t _DstSize, size_t _MaxCount, const char *_Format, va_list _ArgList)
  {
    return _vsnprintf_s_l(_DstBuf, _DstSize, _MaxCount, _Format, NULL, _ArgList);
  }
  __mingw_ovr int __cdecl _vsnprintf_s(char *_DstBuf, size_t _DstSize, size_t _MaxCount, const char *_Format, va_list _ArgList)
  {
    return _vsnprintf_s_l(_DstBuf, _DstSize, _MaxCount, _Format, NULL, _ArgList);
  }
  __mingw_ovr int __cdecl _snprintf_s_l(char *_DstBuf, size_t _DstSize, size_t _MaxCount, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsnprintf_s_l(_DstBuf, _DstSize, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl _snprintf_s(char *_DstBuf, size_t _DstSize, size_t _MaxCount, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vsnprintf_s_l(_DstBuf, _DstSize, _MaxCount, _Format, NULL, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl _vsprintf_s_l(char *_DstBuf, size_t _DstSize, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsprintf_s(0, _DstBuf, _DstSize, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl vsprintf_s(char *_DstBuf, size_t _Size, const char *_Format, va_list _ArgList)
  {
    return _vsprintf_s_l(_DstBuf, _Size, _Format, NULL, _ArgList);
  }
  __mingw_ovr int __cdecl _sprintf_s_l(char *_DstBuf, size_t _DstSize, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsprintf_s_l(_DstBuf, _DstSize, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl sprintf_s(char *_DstBuf, size_t _DstSize, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vsprintf_s_l(_DstBuf, _DstSize, _Format, NULL, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl _vfprintf_p_l(FILE *_File, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vfprintf_p(0, _File, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl _vfprintf_p(FILE *_File, const char *_Format, va_list _ArgList)
  {
    return _vfprintf_p_l(_File, _Format, NULL, _ArgList);
  }
  __mingw_ovr int __cdecl _vprintf_p_l(const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return _vfprintf_p_l(stdout, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl _vprintf_p(const char *_Format, va_list _ArgList)
  {
    return _vfprintf_p_l(stdout, _Format, NULL, _ArgList);
  }
  __mingw_ovr int __cdecl _fprintf_p_l(FILE *_File, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = __stdio_common_vfprintf_p(0, _File, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl _fprintf_p(FILE *_File, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfprintf_p_l(_File, _Format, NULL, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl _printf_p_l(const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfprintf_p_l(stdout, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl _printf_p(const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfprintf_p_l(stdout, _Format, NULL, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl _vsprintf_p_l(char *_DstBuf, size_t _MaxCount, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsprintf_p(0, _DstBuf, _MaxCount, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl _vsprintf_p(char *_Dst, size_t _MaxCount, const char *_Format, va_list _ArgList)
  {
    return _vsprintf_p_l(_Dst, _MaxCount, _Format, NULL, _ArgList);
  }
  __mingw_ovr int __cdecl _sprintf_p_l(char *_DstBuf, size_t _MaxCount, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsprintf_p_l(_DstBuf, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl _sprintf_p(char *_Dst, size_t _MaxCount, const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vsprintf_p_l(_Dst, _MaxCount, _Format, NULL, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl _vscprintf_p_l(const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsprintf_p(_CRT_INTERNAL_PRINTF_STANDARD_SNPRINTF_BEHAVIOR, NULL, 0, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl _vscprintf_p(const char *_Format, va_list _ArgList)
  {
    return _vscprintf_p_l(_Format, NULL, _ArgList);
  }
  __mingw_ovr int __cdecl _scprintf_p_l(const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vscprintf_p_l(_Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl _scprintf_p(const char *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vscprintf_p_l(_Format, NULL, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl _vfprintf_l(FILE *_File, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vfprintf(0, _File, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl _vprintf_l(const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return _vfprintf_l(stdout, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl _fprintf_l(FILE *_File, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfprintf_l(_File, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl _printf_l(const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfprintf_l(stdout, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl _vsnprintf_l(char *_DstBuf, size_t _MaxCount, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsprintf(_CRT_INTERNAL_PRINTF_LEGACY_VSPRINTF_NULL_TERMINATION, _DstBuf, _MaxCount, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl _snprintf_l(char *_DstBuf, size_t _MaxCount, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsnprintf_l(_DstBuf, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl _vsprintf_l(char *_DstBuf, const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return _vsnprintf_l(_DstBuf, (size_t)-1, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl _sprintf_l(char *_DstBuf, const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsprintf_l(_DstBuf, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl _vscprintf_l(const char *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsprintf(_CRT_INTERNAL_PRINTF_STANDARD_SNPRINTF_BEHAVIOR, NULL, 0, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl _scprintf_l(const char *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vscprintf_l(_Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
#else /* _UCRT */
# 494 "C:/Msys2/mingw64/include/sec_api/stdio_s.h" 3
  int __cdecl fprintf_s(FILE *_File,const char *_Format,...);
  _CRTIMP int __cdecl _fscanf_s_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl fscanf_s(FILE *_File, const char *_Format, ...);
  int __cdecl printf_s(const char *_Format,...);
  _CRTIMP int __cdecl _scanf_l(const char *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _scanf_s_l(const char *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl scanf_s(const char *_Format, ...);
  _CRTIMP int __cdecl _snprintf_c(char *_DstBuf,size_t _MaxCount,const char *_Format,...);
  _CRTIMP int __cdecl _vsnprintf_c(char *_DstBuf,size_t _MaxCount,const char *_Format,va_list _ArgList);

  _CRTIMP int __cdecl _fscanf_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _sscanf_l(const char *_Src,const char *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _sscanf_s_l(const char *_Src,const char *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl sscanf_s(const char *_Src,const char *_Format,...);
  _CRTIMP int __cdecl _snscanf_s(const char *_Src,size_t _MaxCount,const char *_Format,...);
  _CRTIMP int __cdecl _snscanf_l(const char *_Src,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _snscanf_s_l(const char *_Src,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  int __cdecl vfprintf_s(FILE *_File,const char *_Format,va_list _ArgList);
  int __cdecl vprintf_s(const char *_Format,va_list _ArgList);

  int __cdecl vsnprintf_s(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,va_list _ArgList);

  _CRTIMP int __cdecl _vsnprintf_s(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,va_list _ArgList);

  _SECIMP int __cdecl vsprintf_s(char *_DstBuf,size_t _Size,const char *_Format,va_list _ArgList);

  _SECIMP int __cdecl sprintf_s(char *_DstBuf,size_t _DstSize,const char *_Format,...);

  _CRTIMP int __cdecl _snprintf_s(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,...);

  _CRTIMP int __cdecl _fprintf_p(FILE *_File,const char *_Format,...);
  _CRTIMP int __cdecl _printf_p(const char *_Format,...);
  _CRTIMP int __cdecl _sprintf_p(char *_Dst,size_t _MaxCount,const char *_Format,...);
  _CRTIMP int __cdecl _vfprintf_p(FILE *_File,const char *_Format,va_list _ArgList);
  _CRTIMP int __cdecl _vprintf_p(const char *_Format,va_list _ArgList);
  _CRTIMP int __cdecl _vsprintf_p(char *_Dst,size_t _MaxCount,const char *_Format,va_list _ArgList);
  _CRTIMP int __cdecl _scprintf_p(const char *_Format,...);
  _SECIMP int __cdecl _vscprintf_p(const char *_Format,va_list _ArgList);
  _CRTIMP int __cdecl _printf_l(const char *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _printf_p_l(const char *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _vprintf_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _vprintf_p_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _fprintf_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _fprintf_p_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _vfprintf_l(FILE *_File,const char *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _vfprintf_p_l(FILE *_File,const char *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _sprintf_l(char *_DstBuf,const char *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _sprintf_p_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _vsprintf_l(char *_DstBuf,const char *_Format,_locale_t,va_list _ArgList);
  _CRTIMP int __cdecl _vsprintf_p_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _scprintf_l(const char *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _scprintf_p_l(const char *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _vscprintf_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _vscprintf_p_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _printf_s_l(const char *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _vprintf_s_l(const char *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _fprintf_s_l(FILE *_File,const char *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _vfprintf_s_l(FILE *_File,const char *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _sprintf_s_l(char *_DstBuf,size_t _DstSize,const char *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _vsprintf_s_l(char *_DstBuf,size_t _DstSize,const char *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _snprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _vsnprintf_s_l(char *_DstBuf,size_t _DstSize,size_t _MaxCount,const char *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _snprintf_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _snprintf_c_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _vsnprintf_l(char *_DstBuf,size_t _MaxCount,const char *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _vsnprintf_c_l(char *_DstBuf,size_t _MaxCount,const char *,_locale_t _Locale,va_list _ArgList);
#endif /* !_UCRT */
# 561 "C:/Msys2/mingw64/include/sec_api/stdio_s.h" 3

  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(int,vsnprintf_s,char,_DstBuf,size_t,_MaxCount,const char*,_Format,va_list,_ArgList)
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(int,_vsnprintf_s,char,_DstBuf,size_t,_MaxCount,const char*,_Format,va_list,_ArgList)
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(int, vsprintf_s, char, _DstBuf, const char*, _Format, va_list, _ArgList)
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(int,sprintf_s,vsprintf_s,char,_DstBuf,const char*,_Format)
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(int,_snprintf_s,_vsnprintf_s,char,_DstBuf,size_t,_MaxCount,const char*,_Format)

  _CRTIMP errno_t __cdecl fopen_s(FILE **_File,const char *_Filename,const char *_Mode);
  _CRTIMP errno_t __cdecl freopen_s(FILE** _File, const char *_Filename, const char *_Mode, FILE *_Stream);

  _CRTIMP char* __cdecl gets_s(char*,rsize_t);
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(char*,get_s,char,_DstBuf)

  _CRTIMP errno_t __cdecl tmpnam_s(char*,rsize_t);
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(errno_t,tmpnam_s,char,_DstBuf)


#ifndef _WSTDIO_S_DEFINED
#define _WSTDIO_S_DEFINED
  _CRTIMP wchar_t *__cdecl _getws_s(wchar_t *_Str,size_t _SizeInWords);
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(wchar_t*,_getws_s,wchar_t,_DstBuf)

#ifdef _UCRT
  int __cdecl __stdio_common_vswprintf_s(unsigned __int64 _Options, wchar_t *_Str, size_t _Len, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);
  int __cdecl __stdio_common_vsnwprintf_s(unsigned __int64 _Options, wchar_t *_Str, size_t _Len, size_t _MaxCount, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);
  int __cdecl __stdio_common_vfwprintf_s(unsigned __int64 _Options, FILE *_File, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList);

  __mingw_ovr int __cdecl _vfwscanf_s_l(FILE *_File, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vfwscanf(_CRT_INTERNAL_LOCAL_SCANF_OPTIONS | _CRT_INTERNAL_SCANF_SECURECRT, _File, _Format, _Locale, _ArgList);
  }

  __mingw_ovr int __cdecl _fwscanf_s_l(FILE *_File, const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfwscanf_s_l(_File, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl fwscanf_s(FILE *_File, const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfwscanf_s_l(_File, _Format, NULL, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl _wscanf_s_l(const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfwscanf_s_l(stdin, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl wscanf_s(const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfwscanf_s_l(stdin, _Format, NULL, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl _vswscanf_s_l(const wchar_t *_Src, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vswscanf(_CRT_INTERNAL_LOCAL_SCANF_OPTIONS | _CRT_INTERNAL_SCANF_SECURECRT, _Src, (size_t)-1, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl _swscanf_s_l(const wchar_t *_Src, const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vswscanf_s_l(_Src, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl swscanf_s(const wchar_t *_Src, const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vswscanf_s_l(_Src, _Format, NULL, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl _vsnwscanf_s_l(const wchar_t *_Src, size_t _MaxCount, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vswscanf(_CRT_INTERNAL_LOCAL_SCANF_OPTIONS | _CRT_INTERNAL_SCANF_SECURECRT, _Src, _MaxCount, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl _snwscanf_s_l(const wchar_t *_Src, size_t _MaxCount, const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsnwscanf_s_l(_Src, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl _snwscanf_s(const wchar_t *_Src, size_t _MaxCount, const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vsnwscanf_s_l(_Src, _MaxCount, _Format, NULL, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl _vfwprintf_s_l(FILE *_File, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vfwprintf_s(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _File, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl _vwprintf_s_l(const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return _vfwprintf_s_l(stdout, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl vfwprintf_s(FILE *_File, const wchar_t *_Format, va_list _ArgList)
  {
    return _vfwprintf_s_l(_File, _Format, NULL, _ArgList);
  }
  __mingw_ovr int __cdecl vwprintf_s(const wchar_t *_Format, va_list _ArgList)
  {
    return _vfwprintf_s_l(stdout, _Format, NULL, _ArgList);
  }
  __mingw_ovr int __cdecl _fwprintf_s_l(FILE *_File, const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfwprintf_s_l(_File, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl _wprintf_s_l(const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vfwprintf_s_l(stdout, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl fwprintf_s(FILE *_File, const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfwprintf_s_l(_File, _Format, NULL, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl wprintf_s(const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vfwprintf_s_l(stdout, _Format, NULL, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl _vswprintf_s_l(wchar_t *_DstBuf, size_t _DstSize, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vswprintf_s(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _DstBuf, _DstSize, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl vswprintf_s(wchar_t *_DstBuf, size_t _DstSize, const wchar_t *_Format, va_list _ArgList)
  {
    return _vswprintf_s_l(_DstBuf, _DstSize, _Format, NULL, _ArgList);
  }
  __mingw_ovr int __cdecl _swprintf_s_l(wchar_t *_DstBuf, size_t _DstSize, const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vswprintf_s_l(_DstBuf, _DstSize, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl swprintf_s(wchar_t *_DstBuf, size_t _DstSize, const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vswprintf_s_l(_DstBuf, _DstSize, _Format, NULL, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }

  __mingw_ovr int __cdecl _vsnwprintf_s_l(wchar_t *_DstBuf, size_t _DstSize, size_t _MaxCount, const wchar_t *_Format, _locale_t _Locale, va_list _ArgList)
  {
    return __stdio_common_vsnwprintf_s(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _DstBuf, _DstSize, _MaxCount, _Format, _Locale, _ArgList);
  }
  __mingw_ovr int __cdecl _vsnwprintf_s(wchar_t *_DstBuf, size_t _DstSize, size_t _MaxCount, const wchar_t *_Format, va_list _ArgList)
  {
    return _vsnwprintf_s_l(_DstBuf, _DstSize, _MaxCount, _Format, NULL, _ArgList);
  }
  __mingw_ovr int __cdecl _snwprintf_s_l(wchar_t *_DstBuf, size_t _DstSize, size_t _MaxCount, const wchar_t *_Format, _locale_t _Locale, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Locale);
    _Ret = _vsnwprintf_s_l(_DstBuf, _DstSize, _MaxCount, _Format, _Locale, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
  __mingw_ovr int __cdecl _snwprintf_s(wchar_t *_DstBuf, size_t _DstSize, size_t _MaxCount, const wchar_t *_Format, ...)
  {
    __builtin_va_list _ArgList;
    int _Ret;
    __builtin_va_start(_ArgList, _Format);
    _Ret = _vsnwprintf_s_l(_DstBuf, _DstSize, _MaxCount, _Format, NULL, _ArgList);
    __builtin_va_end(_ArgList);
    return _Ret;
  }
#else /* _UCRT */
# 786 "C:/Msys2/mingw64/include/sec_api/stdio_s.h" 3
  int __cdecl fwprintf_s(FILE *_File,const wchar_t *_Format,...);
  int __cdecl wprintf_s(const wchar_t *_Format,...);
  int __cdecl vfwprintf_s(FILE *_File,const wchar_t *_Format,va_list _ArgList);
  int __cdecl vwprintf_s(const wchar_t *_Format,va_list _ArgList);

  int __cdecl vswprintf_s(wchar_t *_Dst,size_t _SizeInWords,const wchar_t *_Format,va_list _ArgList);

  int __cdecl swprintf_s(wchar_t *_Dst,size_t _SizeInWords,const wchar_t *_Format,...);

  _CRTIMP int __cdecl _vsnwprintf_s(wchar_t *_DstBuf,size_t _DstSizeInWords,size_t _MaxCount,const wchar_t *_Format,va_list _ArgList);

  _CRTIMP int __cdecl _snwprintf_s(wchar_t *_DstBuf,size_t _DstSizeInWords,size_t _MaxCount,const wchar_t *_Format,...);


  _CRTIMP int __cdecl _wprintf_s_l(const wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _vwprintf_s_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _fwprintf_s_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _vfwprintf_s_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _swprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,const wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _vswprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _snwprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _vsnwprintf_s_l(wchar_t *_DstBuf,size_t _DstSize,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _fwscanf_s_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl fwscanf_s(FILE *_File, const wchar_t *_Format, ...);
  _CRTIMP int __cdecl _swscanf_s_l(const wchar_t *_Src,const wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl swscanf_s(const wchar_t *_Src,const wchar_t *_Format,...);
  _CRTIMP int __cdecl _snwscanf_s(const wchar_t *_Src,size_t _MaxCount,const wchar_t *_Format,...);
  _CRTIMP int __cdecl _snwscanf_s_l(const wchar_t *_Src,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _wscanf_s_l(const wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl wscanf_s(const wchar_t *_Format, ...);
#endif /* !_UCRT */
# 817 "C:/Msys2/mingw64/include/sec_api/stdio_s.h" 3

  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(int, vswprintf_s, wchar_t, _Dst, const wchar_t*, _Format, va_list, _ArgList)
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(int,swprintf_s,vswprintf_s,wchar_t,_Dst,const wchar_t*,_Format)
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(int,_vsnwprintf_s,wchar_t,_DstBuf,size_t,_MaxCount,const wchar_t*,_Format,va_list,_ArgList)
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(int,_snwprintf_s,_vsnwprintf_s,wchar_t,_DstBuf,size_t,_MaxCount,const wchar_t*,_Format)

  _CRTIMP errno_t __cdecl _wfopen_s(FILE **_File,const wchar_t *_Filename,const wchar_t *_Mode);
  _CRTIMP errno_t __cdecl _wfreopen_s(FILE **_File,const wchar_t *_Filename,const wchar_t *_Mode,FILE *_OldFile);

  _CRTIMP errno_t __cdecl _wtmpnam_s(wchar_t *_DstBuf,size_t _SizeInWords);
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(errno_t,_wtmpnam_s,wchar_t,_DstBuf)

#ifndef _UCRT
  _CRTIMP int __cdecl _fwprintf_p(FILE *_File,const wchar_t *_Format,...);
  _CRTIMP int __cdecl _wprintf_p(const wchar_t *_Format,...);
  _CRTIMP int __cdecl _vfwprintf_p(FILE *_File,const wchar_t *_Format,va_list _ArgList);
  _CRTIMP int __cdecl _vwprintf_p(const wchar_t *_Format,va_list _ArgList);
  _CRTIMP int __cdecl _swprintf_p(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,...);
  _SECIMP int __cdecl _vswprintf_p(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,va_list _ArgList);
  _CRTIMP int __cdecl _scwprintf_p(const wchar_t *_Format,...);
  _SECIMP int __cdecl _vscwprintf_p(const wchar_t *_Format,va_list _ArgList);
  _CRTIMP int __cdecl _wprintf_l(const wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _wprintf_p_l(const wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _vwprintf_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _vwprintf_p_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _fwprintf_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _fwprintf_p_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _vfwprintf_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _vfwprintf_p_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _swprintf_c_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _swprintf_p_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _vswprintf_c_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _vswprintf_p_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _scwprintf_l(const wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _scwprintf_p_l(const wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _vscwprintf_p_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _snwprintf_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _vsnwprintf_l(wchar_t *_DstBuf,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl __swprintf_l(wchar_t *_Dest,const wchar_t *_Format,_locale_t _Plocinfo,...);
  _CRTIMP int __cdecl __vswprintf_l(wchar_t *_Dest,const wchar_t *_Format,_locale_t _Plocinfo,va_list _Args);
  _CRTIMP int __cdecl _vscwprintf_l(const wchar_t *_Format,_locale_t _Locale,va_list _ArgList);
  _CRTIMP int __cdecl _fwscanf_l(FILE *_File,const wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _swscanf_l(const wchar_t *_Src,const wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _snwscanf_l(const wchar_t *_Src,size_t _MaxCount,const wchar_t *_Format,_locale_t _Locale,...);
  _CRTIMP int __cdecl _wscanf_l(const wchar_t *_Format,_locale_t _Locale,...);
#endif /* !_UCRT */
# 863 "C:/Msys2/mingw64/include/sec_api/stdio_s.h" 3

#endif /* _WSTDIO_S_DEFINED */
# 865 "C:/Msys2/mingw64/include/sec_api/stdio_s.h" 3
#endif /* _STDIO_S_DEFINED */
# 866 "C:/Msys2/mingw64/include/sec_api/stdio_s.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __MSVCRT_VERSION__ >= 0x800
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 868 "C:/Msys2/mingw64/include/sec_api/stdio_s.h" 3
  _CRTIMP size_t __cdecl _fread_nolock_s(void *_DstBuf,size_t _DstSize,size_t _ElementSize,size_t _Count,FILE *_File);
#endif
# 870 "C:/Msys2/mingw64/include/sec_api/stdio_s.h" 3

#ifdef __cplusplus
}
#endif
# 874 "C:/Msys2/mingw64/include/sec_api/stdio_s.h" 3
#endif
# 875 "C:/Msys2/mingw64/include/sec_api/stdio_s.h" 3
# 1573 "C:/Msys2/mingw64/include/stdio.h" 2 3

#endif
# 1575 "C:/Msys2/mingw64/include/stdio.h" 3
# 43 "C:/Msys2/mingw64/include/c++/11.2.0/cstdio" 2 3

#ifndef _GLIBCXX_CSTDIO
#define _GLIBCXX_CSTDIO 1

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus <= 201103L && !defined(_GLIBCXX_HAVE_GETS)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 48 "C:/Msys2/mingw64/include/c++/11.2.0/cstdio" 3
extern "C" char* gets (char* __s) __attribute__((__deprecated__));
#endif
# 50 "C:/Msys2/mingw64/include/c++/11.2.0/cstdio" 3

// Get rid of those macros defined in <stdio.h> in lieu of real functions.
#undef clearerr
#undef fclose
#undef feof
#undef ferror
#undef fflush
#undef fgetc
#undef fgetpos
#undef fgets
#undef fopen
#undef fprintf
#undef fputc
#undef fputs
#undef fread
#undef freopen
#undef fscanf
#undef fseek
#undef fsetpos
#undef ftell
#undef fwrite
#undef getc
#undef getchar
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus <= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 74 "C:/Msys2/mingw64/include/c++/11.2.0/cstdio" 3
# undef gets
#endif
# 76 "C:/Msys2/mingw64/include/c++/11.2.0/cstdio" 3
#undef perror
#undef printf
#undef putc
#undef putchar
#undef puts
#undef remove
#undef rename
#undef rewind
#undef scanf
#undef setbuf
#undef setvbuf
#undef sprintf
#undef sscanf
#undef tmpfile
#undef tmpnam
#undef ungetc
#undef vfprintf
#undef vprintf
#undef vsprintf

namespace std
{
  using ::FILE;
  using ::fpos_t;

  using ::clearerr;
  using ::fclose;
  using ::feof;
  using ::ferror;
  using ::fflush;
  using ::fgetc;
  using ::fgetpos;
  using ::fgets;
  using ::fopen;
  using ::fprintf;
  using ::fputc;
  using ::fputs;
  using ::fread;
  using ::freopen;
  using ::fscanf;
  using ::fseek;
  using ::fsetpos;
  using ::ftell;
  using ::fwrite;
  using ::getc;
  using ::getchar;
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus <= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 123 "C:/Msys2/mingw64/include/c++/11.2.0/cstdio" 3
  // LWG 2249
  using ::gets;
#endif
# 126 "C:/Msys2/mingw64/include/c++/11.2.0/cstdio" 3
  using ::perror;
  using ::printf;
  using ::putc;
  using ::putchar;
  using ::puts;
  using ::remove;
  using ::rename;
  using ::rewind;
  using ::scanf;
  using ::setbuf;
  using ::setvbuf;
  using ::sprintf;
  using ::sscanf;
  using ::tmpfile;
#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_USE_TMPNAM
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 141 "C:/Msys2/mingw64/include/c++/11.2.0/cstdio" 3
  using ::tmpnam;
#endif
# 143 "C:/Msys2/mingw64/include/c++/11.2.0/cstdio" 3
  using ::ungetc;
  using ::vfprintf;
  using ::vprintf;
  using ::vsprintf;
} // namespace

#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_USE_C99_STDIO
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 150 "C:/Msys2/mingw64/include/c++/11.2.0/cstdio" 3

#undef snprintf
#undef vfscanf
#undef vscanf
#undef vsnprintf
#undef vsscanf

namespace __gnu_cxx
{
#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_USE_C99_CHECK || _GLIBCXX_USE_C99_DYNAMIC
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 160 "C:/Msys2/mingw64/include/c++/11.2.0/cstdio" 3
  extern "C" int
  (snprintf)(char * __restrict, std::size_t, const char * __restrict, ...)
  throw ();
  extern "C" int
  (vfscanf)(FILE * __restrict, const char * __restrict, __gnuc_va_list);
  extern "C" int (vscanf)(const char * __restrict, __gnuc_va_list);
  extern "C" int
  (vsnprintf)(char * __restrict, std::size_t, const char * __restrict,
	      __gnuc_va_list) throw ();
  extern "C" int
  (vsscanf)(const char * __restrict, const char * __restrict, __gnuc_va_list)
  throw ();
#endif
# 173 "C:/Msys2/mingw64/include/c++/11.2.0/cstdio" 3

#if 0 /* disabled by -frewrite-includes */
#if !_GLIBCXX_USE_C99_DYNAMIC
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 175 "C:/Msys2/mingw64/include/c++/11.2.0/cstdio" 3
  using ::snprintf;
  using ::vfscanf;
  using ::vscanf;
  using ::vsnprintf;
  using ::vsscanf;
#endif
# 181 "C:/Msys2/mingw64/include/c++/11.2.0/cstdio" 3
} // namespace __gnu_cxx

namespace std
{
  using ::__gnu_cxx::snprintf;
  using ::__gnu_cxx::vfscanf;
  using ::__gnu_cxx::vscanf;
  using ::__gnu_cxx::vsnprintf;
  using ::__gnu_cxx::vsscanf;
} // namespace std

#endif // _GLIBCXX_USE_C99_STDIO
# 193 "C:/Msys2/mingw64/include/c++/11.2.0/cstdio" 3

#endif
# 195 "C:/Msys2/mingw64/include/c++/11.2.0/cstdio" 3
# 9 "multi-return.cpp" 2
#if 0 /* expanded by -frewrite-includes */
#include <type_traits>
#endif /* expanded by -frewrite-includes */
# 9 "multi-return.cpp"
# 1 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 1 3
// C++11 <type_traits> -*- C++ -*-

// Copyright (C) 2007-2021 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/type_traits
 *  This is a Standard C++ Library header.
 */

#ifndef _GLIBCXX_TYPE_TRAITS
#define _GLIBCXX_TYPE_TRAITS 1

#if 0 /* expanded by -frewrite-includes */
#pragma GCC system_header
#endif /* expanded by -frewrite-includes */
# 33 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus < 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 35 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#if 0 /* expanded by -frewrite-includes */
# include <bits/c++0x_warning.h>
#endif /* expanded by -frewrite-includes */
# 35 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
# 36 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#else
# 37 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

#if 0 /* expanded by -frewrite-includes */
#include <bits/c++config.h>
#endif /* expanded by -frewrite-includes */
# 38 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
# 39 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

namespace std _GLIBCXX_VISIBILITY(default)
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION

  /**
   * @defgroup metaprogramming Metaprogramming
   * @ingroup utilities
   *
   * Template utilities for compile-time introspection and modification,
   * including type classification traits, type property inspection traits
   * and type transformation traits.
   *
   * @{
   */

  /// integral_constant
  template<typename _Tp, _Tp __v>
    struct integral_constant
    {
      static constexpr _Tp                  value = __v;
      typedef _Tp                           value_type;
      typedef integral_constant<_Tp, __v>   type;
      constexpr operator value_type() const noexcept { return value; }
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 64 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

#define __cpp_lib_integral_constant_callable 201304

      constexpr value_type operator()() const noexcept { return value; }
#endif
# 69 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
    };

  template<typename _Tp, _Tp __v>
    constexpr _Tp integral_constant<_Tp, __v>::value;

  /// The type used as a compile-time boolean with true value.
  typedef integral_constant<bool, true>     true_type;

  /// The type used as a compile-time boolean with false value.
  typedef integral_constant<bool, false>    false_type;

  template<bool __v>
    using __bool_constant = integral_constant<bool, __v>;

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 201402L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 84 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
# define __cpp_lib_bool_constant 201505
  template<bool __v>
    using bool_constant = integral_constant<bool, __v>;
#endif
# 88 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  // Meta programming helper types.

  template<bool, typename, typename>
    struct conditional;

  template <typename _Type>
    struct __type_identity
    { using type = _Type; };

  template<typename _Tp>
    using __type_identity_t = typename __type_identity<_Tp>::type;

  template<typename...>
    struct __or_;

  template<>
    struct __or_<>
    : public false_type
    { };

  template<typename _B1>
    struct __or_<_B1>
    : public _B1
    { };

  template<typename _B1, typename _B2>
    struct __or_<_B1, _B2>
    : public conditional<_B1::value, _B1, _B2>::type
    { };

  template<typename _B1, typename _B2, typename _B3, typename... _Bn>
    struct __or_<_B1, _B2, _B3, _Bn...>
    : public conditional<_B1::value, _B1, __or_<_B2, _B3, _Bn...>>::type
    { };

  template<typename...>
    struct __and_;

  template<>
    struct __and_<>
    : public true_type
    { };

  template<typename _B1>
    struct __and_<_B1>
    : public _B1
    { };

  template<typename _B1, typename _B2>
    struct __and_<_B1, _B2>
    : public conditional<_B1::value, _B2, _B1>::type
    { };

  template<typename _B1, typename _B2, typename _B3, typename... _Bn>
    struct __and_<_B1, _B2, _B3, _Bn...>
    : public conditional<_B1::value, __and_<_B2, _B3, _Bn...>, _B1>::type
    { };

  template<typename _Pp>
    struct __not_
    : public __bool_constant<!bool(_Pp::value)>
    { };

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201703L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 153 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  template<typename... _Bn>
    inline constexpr bool __or_v = __or_<_Bn...>::value;
  template<typename... _Bn>
    inline constexpr bool __and_v = __and_<_Bn...>::value;

#define __cpp_lib_logical_traits 201510

  template<typename... _Bn>
    struct conjunction
    : __and_<_Bn...>
    { };

  template<typename... _Bn>
    struct disjunction
    : __or_<_Bn...>
    { };

  template<typename _Pp>
    struct negation
    : __not_<_Pp>
    { };

  template<typename... _Bn>
    inline constexpr bool conjunction_v = conjunction<_Bn...>::value;

  template<typename... _Bn>
    inline constexpr bool disjunction_v = disjunction<_Bn...>::value;

  template<typename _Pp>
    inline constexpr bool negation_v = negation<_Pp>::value;

#endif // C++17
# 186 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  // Forward declarations
  template<typename>
    struct is_reference;
  template<typename>
    struct is_function;
  template<typename>
    struct is_void;
  template<typename>
    struct __is_array_unknown_bounds;

  // Helper functions that return false_type for incomplete classes,
  // incomplete unions and arrays of known bound from those.

  template <typename _Tp, size_t = sizeof(_Tp)>
    constexpr true_type __is_complete_or_unbounded(__type_identity<_Tp>)
    { return {}; }

  template <typename _TypeIdentity,
      typename _NestedType = typename _TypeIdentity::type>
    constexpr typename __or_<
      is_reference<_NestedType>,
      is_function<_NestedType>,
      is_void<_NestedType>,
      __is_array_unknown_bounds<_NestedType>
    >::type __is_complete_or_unbounded(_TypeIdentity)
    { return {}; }

  // For several sfinae-friendly trait implementations we transport both the
  // result information (as the member type) and the failure information (no
  // member type). This is very similar to std::enable_if, but we cannot use
  // them, because we need to derive from them as an implementation detail.

  template<typename _Tp>
    struct __success_type
    { typedef _Tp type; };

  struct __failure_type
  { };

  template<typename>
    struct remove_cv;

  // __remove_cv_t (std::remove_cv_t for C++11).
  template<typename _Tp>
    using __remove_cv_t = typename remove_cv<_Tp>::type;

  template<typename>
    struct is_const;

  // Primary type categories.

  template<typename>
    struct __is_void_helper
    : public false_type { };

  template<>
    struct __is_void_helper<void>
    : public true_type { };

  /// is_void
  template<typename _Tp>
    struct is_void
    : public __is_void_helper<__remove_cv_t<_Tp>>::type
    { };

  template<typename>
    struct __is_integral_helper
    : public false_type { };

  template<>
    struct __is_integral_helper<bool>
    : public true_type { };

  template<>
    struct __is_integral_helper<char>
    : public true_type { };

  template<>
    struct __is_integral_helper<signed char>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned char>
    : public true_type { };

  // We want is_integral<wchar_t> to be true (and make_signed/unsigned to work)
  // even when libc doesn't provide working <wchar.h> and related functions,
  // so check __WCHAR_TYPE__ instead of _GLIBCXX_USE_WCHAR_T.
#ifdef __WCHAR_TYPE__
  template<>
    struct __is_integral_helper<wchar_t>
    : public true_type { };
#endif
# 280 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

#ifdef _GLIBCXX_USE_CHAR8_T
  template<>
    struct __is_integral_helper<char8_t>
    : public true_type { };
#endif
# 286 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  template<>
    struct __is_integral_helper<char16_t>
    : public true_type { };

  template<>
    struct __is_integral_helper<char32_t>
    : public true_type { };

  template<>
    struct __is_integral_helper<short>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned short>
    : public true_type { };

  template<>
    struct __is_integral_helper<int>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned int>
    : public true_type { };

  template<>
    struct __is_integral_helper<long>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned long>
    : public true_type { };

  template<>
    struct __is_integral_helper<long long>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned long long>
    : public true_type { };

  // Conditionalizing on __STRICT_ANSI__ here will break any port that
  // uses one of these types for size_t.
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_0)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 330 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  template<>
    struct __is_integral_helper<__GLIBCXX_TYPE_INT_N_0>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned __GLIBCXX_TYPE_INT_N_0>
    : public true_type { };
#endif
# 338 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_1)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 339 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  template<>
    struct __is_integral_helper<__GLIBCXX_TYPE_INT_N_1>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned __GLIBCXX_TYPE_INT_N_1>
    : public true_type { };
#endif
# 347 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_2)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 348 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  template<>
    struct __is_integral_helper<__GLIBCXX_TYPE_INT_N_2>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned __GLIBCXX_TYPE_INT_N_2>
    : public true_type { };
#endif
# 356 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_3)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 357 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  template<>
    struct __is_integral_helper<__GLIBCXX_TYPE_INT_N_3>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned __GLIBCXX_TYPE_INT_N_3>
    : public true_type { };
#endif
# 365 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  /// is_integral
  template<typename _Tp>
    struct is_integral
    : public __is_integral_helper<__remove_cv_t<_Tp>>::type
    { };

  template<typename>
    struct __is_floating_point_helper
    : public false_type { };

  template<>
    struct __is_floating_point_helper<float>
    : public true_type { };

  template<>
    struct __is_floating_point_helper<double>
    : public true_type { };

  template<>
    struct __is_floating_point_helper<long double>
    : public true_type { };

#if 0 /* disabled by -frewrite-includes */
#if !defined(__STRICT_ANSI__) && defined(_GLIBCXX_USE_FLOAT128)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 389 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  template<>
    struct __is_floating_point_helper<__float128>
    : public true_type { };
#endif
# 393 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  /// is_floating_point
  template<typename _Tp>
    struct is_floating_point
    : public __is_floating_point_helper<__remove_cv_t<_Tp>>::type
    { };

  /// is_array
  template<typename>
    struct is_array
    : public false_type { };

  template<typename _Tp, std::size_t _Size>
    struct is_array<_Tp[_Size]>
    : public true_type { };

  template<typename _Tp>
    struct is_array<_Tp[]>
    : public true_type { };

  template<typename>
    struct __is_pointer_helper
    : public false_type { };

  template<typename _Tp>
    struct __is_pointer_helper<_Tp*>
    : public true_type { };

  /// is_pointer
  template<typename _Tp>
    struct is_pointer
    : public __is_pointer_helper<__remove_cv_t<_Tp>>::type
    { };

  /// is_lvalue_reference
  template<typename>
    struct is_lvalue_reference
    : public false_type { };

  template<typename _Tp>
    struct is_lvalue_reference<_Tp&>
    : public true_type { };

  /// is_rvalue_reference
  template<typename>
    struct is_rvalue_reference
    : public false_type { };

  template<typename _Tp>
    struct is_rvalue_reference<_Tp&&>
    : public true_type { };

  template<typename>
    struct __is_member_object_pointer_helper
    : public false_type { };

  template<typename _Tp, typename _Cp>
    struct __is_member_object_pointer_helper<_Tp _Cp::*>
    : public __not_<is_function<_Tp>>::type { };

  /// is_member_object_pointer
  template<typename _Tp>
    struct is_member_object_pointer
    : public __is_member_object_pointer_helper<__remove_cv_t<_Tp>>::type
    { };

  template<typename>
    struct __is_member_function_pointer_helper
    : public false_type { };

  template<typename _Tp, typename _Cp>
    struct __is_member_function_pointer_helper<_Tp _Cp::*>
    : public is_function<_Tp>::type { };

  /// is_member_function_pointer
  template<typename _Tp>
    struct is_member_function_pointer
    : public __is_member_function_pointer_helper<__remove_cv_t<_Tp>>::type
    { };

  /// is_enum
  template<typename _Tp>
    struct is_enum
    : public integral_constant<bool, __is_enum(_Tp)>
    { };

  /// is_union
  template<typename _Tp>
    struct is_union
    : public integral_constant<bool, __is_union(_Tp)>
    { };

  /// is_class
  template<typename _Tp>
    struct is_class
    : public integral_constant<bool, __is_class(_Tp)>
    { };

  /// is_function
  template<typename _Tp>
    struct is_function
    : public __bool_constant<!is_const<const _Tp>::value> { };

  template<typename _Tp>
    struct is_function<_Tp&>
    : public false_type { };

  template<typename _Tp>
    struct is_function<_Tp&&>
    : public false_type { };

#define __cpp_lib_is_null_pointer 201309

  template<typename>
    struct __is_null_pointer_helper
    : public false_type { };

  template<>
    struct __is_null_pointer_helper<std::nullptr_t>
    : public true_type { };

  /// is_null_pointer (LWG 2247).
  template<typename _Tp>
    struct is_null_pointer
    : public __is_null_pointer_helper<__remove_cv_t<_Tp>>::type
    { };

  /// __is_nullptr_t (deprecated extension).
  template<typename _Tp>
    struct __is_nullptr_t
    : public is_null_pointer<_Tp>
    { } _GLIBCXX_DEPRECATED_SUGGEST("std::is_null_pointer");

  // Composite type categories.

  /// is_reference
  template<typename _Tp>
    struct is_reference
    : public __or_<is_lvalue_reference<_Tp>,
                   is_rvalue_reference<_Tp>>::type
    { };

  /// is_arithmetic
  template<typename _Tp>
    struct is_arithmetic
    : public __or_<is_integral<_Tp>, is_floating_point<_Tp>>::type
    { };

  /// is_fundamental
  template<typename _Tp>
    struct is_fundamental
    : public __or_<is_arithmetic<_Tp>, is_void<_Tp>,
		   is_null_pointer<_Tp>>::type
    { };

  /// is_object
  template<typename _Tp>
    struct is_object
    : public __not_<__or_<is_function<_Tp>, is_reference<_Tp>,
                          is_void<_Tp>>>::type
    { };

  template<typename>
    struct is_member_pointer;

  /// is_scalar
  template<typename _Tp>
    struct is_scalar
    : public __or_<is_arithmetic<_Tp>, is_enum<_Tp>, is_pointer<_Tp>,
                   is_member_pointer<_Tp>, is_null_pointer<_Tp>>::type
    { };

  /// is_compound
  template<typename _Tp>
    struct is_compound
    : public __not_<is_fundamental<_Tp>>::type { };

  template<typename _Tp>
    struct __is_member_pointer_helper
    : public false_type { };

  template<typename _Tp, typename _Cp>
    struct __is_member_pointer_helper<_Tp _Cp::*>
    : public true_type { };

  /// is_member_pointer
  template<typename _Tp>
    struct is_member_pointer
    : public __is_member_pointer_helper<__remove_cv_t<_Tp>>::type
    { };

  template<typename, typename>
    struct is_same;

  template<typename _Tp, typename... _Types>
    using __is_one_of = __or_<is_same<_Tp, _Types>...>;

  // Check if a type is one of the signed integer types.
  template<typename _Tp>
    using __is_signed_integer = __is_one_of<__remove_cv_t<_Tp>,
	  signed char, signed short, signed int, signed long,
	  signed long long
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_0)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 596 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
	  , signed __GLIBCXX_TYPE_INT_N_0
#endif
# 598 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_1)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 599 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
	  , signed __GLIBCXX_TYPE_INT_N_1
#endif
# 601 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_2)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 602 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
	  , signed __GLIBCXX_TYPE_INT_N_2
#endif
# 604 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_3)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 605 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
	  , signed __GLIBCXX_TYPE_INT_N_3
#endif
# 607 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
	  >;

  // Check if a type is one of the unsigned integer types.
  template<typename _Tp>
    using __is_unsigned_integer = __is_one_of<__remove_cv_t<_Tp>,
	  unsigned char, unsigned short, unsigned int, unsigned long,
	  unsigned long long
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_0)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 615 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
	  , unsigned __GLIBCXX_TYPE_INT_N_0
#endif
# 617 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_1)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 618 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
	  , unsigned __GLIBCXX_TYPE_INT_N_1
#endif
# 620 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_2)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 621 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
	  , unsigned __GLIBCXX_TYPE_INT_N_2
#endif
# 623 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_3)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 624 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
	  , unsigned __GLIBCXX_TYPE_INT_N_3
#endif
# 626 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
	  >;

  // Check if a type is one of the signed or unsigned integer types.
  template<typename _Tp>
    using __is_standard_integer
      = __or_<__is_signed_integer<_Tp>, __is_unsigned_integer<_Tp>>;

  // __void_t (std::void_t for C++11)
  template<typename...> using __void_t = void;

  // Utility to detect referenceable types ([defns.referenceable]).

  template<typename _Tp, typename = void>
    struct __is_referenceable
    : public false_type
    { };

  template<typename _Tp>
    struct __is_referenceable<_Tp, __void_t<_Tp&>>
    : public true_type
    { };

  // Type properties.

  /// is_const
  template<typename>
    struct is_const
    : public false_type { };

  template<typename _Tp>
    struct is_const<_Tp const>
    : public true_type { };

  /// is_volatile
  template<typename>
    struct is_volatile
    : public false_type { };

  template<typename _Tp>
    struct is_volatile<_Tp volatile>
    : public true_type { };

  /// is_trivial
  template<typename _Tp>
    struct is_trivial
    : public integral_constant<bool, __is_trivial(_Tp)>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  // is_trivially_copyable
  template<typename _Tp>
    struct is_trivially_copyable
    : public integral_constant<bool, __is_trivially_copyable(_Tp)>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  /// is_standard_layout
  template<typename _Tp>
    struct is_standard_layout
    : public integral_constant<bool, __is_standard_layout(_Tp)>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  /// is_pod (deprecated in C++20)
  // Could use is_standard_layout && is_trivial instead of the builtin.
  template<typename _Tp>
    struct
    _GLIBCXX20_DEPRECATED("use is_standard_layout && is_trivial instead")
    is_pod
    : public integral_constant<bool, __is_pod(_Tp)>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  /// is_literal_type
  template<typename _Tp>
    struct
    _GLIBCXX17_DEPRECATED
    is_literal_type
    : public integral_constant<bool, __is_literal_type(_Tp)>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  /// is_empty
  template<typename _Tp>
    struct is_empty
    : public integral_constant<bool, __is_empty(_Tp)>
    { };

  /// is_polymorphic
  template<typename _Tp>
    struct is_polymorphic
    : public integral_constant<bool, __is_polymorphic(_Tp)>
    { };

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201402L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 731 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#define __cpp_lib_is_final 201402L
  /// is_final
  template<typename _Tp>
    struct is_final
    : public integral_constant<bool, __is_final(_Tp)>
    { };
#endif
# 738 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  /// is_abstract
  template<typename _Tp>
    struct is_abstract
    : public integral_constant<bool, __is_abstract(_Tp)>
    { };

  template<typename _Tp,
	   bool = is_arithmetic<_Tp>::value>
    struct __is_signed_helper
    : public false_type { };

  template<typename _Tp>
    struct __is_signed_helper<_Tp, true>
    : public integral_constant<bool, _Tp(-1) < _Tp(0)>
    { };

  /// is_signed
  template<typename _Tp>
    struct is_signed
    : public __is_signed_helper<_Tp>::type
    { };

  /// is_unsigned
  template<typename _Tp>
    struct is_unsigned
    : public __and_<is_arithmetic<_Tp>, __not_<is_signed<_Tp>>>
    { };


  // Destructible and constructible type properties.

  /**
   *  @brief  Utility to simplify expressions used in unevaluated operands
   *  @ingroup utilities
   */

  template<typename _Tp, typename _Up = _Tp&&>
    _Up
    __declval(int);

  template<typename _Tp>
    _Tp
    __declval(long);

  template<typename _Tp>
    auto declval() noexcept -> decltype(__declval<_Tp>(0));

  template<typename, unsigned = 0>
    struct extent;

  template<typename>
    struct remove_all_extents;

  template<typename _Tp>
    struct __is_array_known_bounds
    : public integral_constant<bool, (extent<_Tp>::value > 0)>
    { };

  template<typename _Tp>
    struct __is_array_unknown_bounds
    : public __and_<is_array<_Tp>, __not_<extent<_Tp>>>
    { };

  // In N3290 is_destructible does not say anything about function
  // types and abstract types, see LWG 2049. This implementation
  // describes function types as non-destructible and all complete
  // object types as destructible, iff the explicit destructor
  // call expression is wellformed.
  struct __do_is_destructible_impl
  {
    template<typename _Tp, typename = decltype(declval<_Tp&>().~_Tp())>
      static true_type __test(int);

    template<typename>
      static false_type __test(...);
  };

  template<typename _Tp>
    struct __is_destructible_impl
    : public __do_is_destructible_impl
    {
      typedef decltype(__test<_Tp>(0)) type;
    };

  template<typename _Tp,
           bool = __or_<is_void<_Tp>,
                        __is_array_unknown_bounds<_Tp>,
                        is_function<_Tp>>::value,
           bool = __or_<is_reference<_Tp>, is_scalar<_Tp>>::value>
    struct __is_destructible_safe;

  template<typename _Tp>
    struct __is_destructible_safe<_Tp, false, false>
    : public __is_destructible_impl<typename
               remove_all_extents<_Tp>::type>::type
    { };

  template<typename _Tp>
    struct __is_destructible_safe<_Tp, true, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_destructible_safe<_Tp, false, true>
    : public true_type { };

  /// is_destructible
  template<typename _Tp>
    struct is_destructible
    : public __is_destructible_safe<_Tp>::type
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  // is_nothrow_destructible requires that is_destructible is
  // satisfied as well.  We realize that by mimicing the
  // implementation of is_destructible but refer to noexcept(expr)
  // instead of decltype(expr).
  struct __do_is_nt_destructible_impl
  {
    template<typename _Tp>
      static __bool_constant<noexcept(declval<_Tp&>().~_Tp())>
      __test(int);

    template<typename>
      static false_type __test(...);
  };

  template<typename _Tp>
    struct __is_nt_destructible_impl
    : public __do_is_nt_destructible_impl
    {
      typedef decltype(__test<_Tp>(0)) type;
    };

  template<typename _Tp,
           bool = __or_<is_void<_Tp>,
                        __is_array_unknown_bounds<_Tp>,
                        is_function<_Tp>>::value,
           bool = __or_<is_reference<_Tp>, is_scalar<_Tp>>::value>
    struct __is_nt_destructible_safe;

  template<typename _Tp>
    struct __is_nt_destructible_safe<_Tp, false, false>
    : public __is_nt_destructible_impl<typename
               remove_all_extents<_Tp>::type>::type
    { };

  template<typename _Tp>
    struct __is_nt_destructible_safe<_Tp, true, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_nt_destructible_safe<_Tp, false, true>
    : public true_type { };

  /// is_nothrow_destructible
  template<typename _Tp>
    struct is_nothrow_destructible
    : public __is_nt_destructible_safe<_Tp>::type
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  template<typename _Tp, typename... _Args>
    struct __is_constructible_impl
    : public __bool_constant<__is_constructible(_Tp, _Args...)>
    { };

  /// is_constructible
  template<typename _Tp, typename... _Args>
    struct is_constructible
      : public __is_constructible_impl<_Tp, _Args...>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  /// is_default_constructible
  template<typename _Tp>
    struct is_default_constructible
    : public __is_constructible_impl<_Tp>::type
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_copy_constructible_impl;

  template<typename _Tp>
    struct __is_copy_constructible_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_copy_constructible_impl<_Tp, true>
    : public __is_constructible_impl<_Tp, const _Tp&>
    { };

  /// is_copy_constructible
  template<typename _Tp>
    struct is_copy_constructible
    : public __is_copy_constructible_impl<_Tp>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_move_constructible_impl;

  template<typename _Tp>
    struct __is_move_constructible_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_move_constructible_impl<_Tp, true>
    : public __is_constructible_impl<_Tp, _Tp&&>
    { };

  /// is_move_constructible
  template<typename _Tp>
    struct is_move_constructible
    : public __is_move_constructible_impl<_Tp>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  template<typename _Tp, typename... _Args>
    using __is_nothrow_constructible_impl
      = __bool_constant<__is_nothrow_constructible(_Tp, _Args...)>;

  /// is_nothrow_constructible
  template<typename _Tp, typename... _Args>
    struct is_nothrow_constructible
    : public __is_nothrow_constructible_impl<_Tp, _Args...>::type
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  /// is_nothrow_default_constructible
  template<typename _Tp>
    struct is_nothrow_default_constructible
    : public __bool_constant<__is_nothrow_constructible(_Tp)>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };


  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_nothrow_copy_constructible_impl;

  template<typename _Tp>
    struct __is_nothrow_copy_constructible_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_nothrow_copy_constructible_impl<_Tp, true>
    : public __is_nothrow_constructible_impl<_Tp, const _Tp&>
    { };

  /// is_nothrow_copy_constructible
  template<typename _Tp>
    struct is_nothrow_copy_constructible
    : public __is_nothrow_copy_constructible_impl<_Tp>::type
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_nothrow_move_constructible_impl;

  template<typename _Tp>
    struct __is_nothrow_move_constructible_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_nothrow_move_constructible_impl<_Tp, true>
    : public __is_nothrow_constructible_impl<_Tp, _Tp&&>
    { };

  /// is_nothrow_move_constructible
  template<typename _Tp>
    struct is_nothrow_move_constructible
    : public __is_nothrow_move_constructible_impl<_Tp>::type
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  /// is_assignable
  template<typename _Tp, typename _Up>
    struct is_assignable
    : public __bool_constant<__is_assignable(_Tp, _Up)>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_copy_assignable_impl;

  template<typename _Tp>
    struct __is_copy_assignable_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_copy_assignable_impl<_Tp, true>
    : public __bool_constant<__is_assignable(_Tp&, const _Tp&)>
    { };

  /// is_copy_assignable
  template<typename _Tp>
    struct is_copy_assignable
    : public __is_copy_assignable_impl<_Tp>::type
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_move_assignable_impl;

  template<typename _Tp>
    struct __is_move_assignable_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_move_assignable_impl<_Tp, true>
    : public __bool_constant<__is_assignable(_Tp&, _Tp&&)>
    { };

  /// is_move_assignable
  template<typename _Tp>
    struct is_move_assignable
    : public __is_move_assignable_impl<_Tp>::type
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  template<typename _Tp, typename _Up>
    using __is_nothrow_assignable_impl
      = __bool_constant<__is_nothrow_assignable(_Tp, _Up)>;

  /// is_nothrow_assignable
  template<typename _Tp, typename _Up>
    struct is_nothrow_assignable
    : public __is_nothrow_assignable_impl<_Tp, _Up>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_nt_copy_assignable_impl;

  template<typename _Tp>
    struct __is_nt_copy_assignable_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_nt_copy_assignable_impl<_Tp, true>
    : public __is_nothrow_assignable_impl<_Tp&, const _Tp&>
    { };

  /// is_nothrow_copy_assignable
  template<typename _Tp>
    struct is_nothrow_copy_assignable
    : public __is_nt_copy_assignable_impl<_Tp>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_nt_move_assignable_impl;

  template<typename _Tp>
    struct __is_nt_move_assignable_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_nt_move_assignable_impl<_Tp, true>
    : public __is_nothrow_assignable_impl<_Tp&, _Tp&&>
    { };

  /// is_nothrow_move_assignable
  template<typename _Tp>
    struct is_nothrow_move_assignable
    : public __is_nt_move_assignable_impl<_Tp>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  /// is_trivially_constructible
  template<typename _Tp, typename... _Args>
    struct is_trivially_constructible
    : public __bool_constant<__is_trivially_constructible(_Tp, _Args...)>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  /// is_trivially_default_constructible
  template<typename _Tp>
    struct is_trivially_default_constructible
    : public __bool_constant<__is_trivially_constructible(_Tp)>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  struct __do_is_implicitly_default_constructible_impl
  {
    template <typename _Tp>
    static void __helper(const _Tp&);

    template <typename _Tp>
    static true_type __test(const _Tp&,
                            decltype(__helper<const _Tp&>({}))* = 0);

    static false_type __test(...);
  };

  template<typename _Tp>
    struct __is_implicitly_default_constructible_impl
    : public __do_is_implicitly_default_constructible_impl
    {
      typedef decltype(__test(declval<_Tp>())) type;
    };

  template<typename _Tp>
    struct __is_implicitly_default_constructible_safe
    : public __is_implicitly_default_constructible_impl<_Tp>::type
    { };

  template <typename _Tp>
    struct __is_implicitly_default_constructible
    : public __and_<__is_constructible_impl<_Tp>,
		    __is_implicitly_default_constructible_safe<_Tp>>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_trivially_copy_constructible_impl;

  template<typename _Tp>
    struct __is_trivially_copy_constructible_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_trivially_copy_constructible_impl<_Tp, true>
    : public __and_<__is_copy_constructible_impl<_Tp>,
		    integral_constant<bool,
			__is_trivially_constructible(_Tp, const _Tp&)>>
    { };

  /// is_trivially_copy_constructible
  template<typename _Tp>
    struct is_trivially_copy_constructible
    : public __is_trivially_copy_constructible_impl<_Tp>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_trivially_move_constructible_impl;

  template<typename _Tp>
    struct __is_trivially_move_constructible_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_trivially_move_constructible_impl<_Tp, true>
    : public __and_<__is_move_constructible_impl<_Tp>,
		    integral_constant<bool,
			__is_trivially_constructible(_Tp, _Tp&&)>>
    { };

  /// is_trivially_move_constructible
  template<typename _Tp>
    struct is_trivially_move_constructible
    : public __is_trivially_move_constructible_impl<_Tp>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  /// is_trivially_assignable
  template<typename _Tp, typename _Up>
    struct is_trivially_assignable
    : public __bool_constant<__is_trivially_assignable(_Tp, _Up)>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_trivially_copy_assignable_impl;

  template<typename _Tp>
    struct __is_trivially_copy_assignable_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_trivially_copy_assignable_impl<_Tp, true>
    : public __bool_constant<__is_trivially_assignable(_Tp&, const _Tp&)>
    { };

  /// is_trivially_copy_assignable
  template<typename _Tp>
    struct is_trivially_copy_assignable
    : public __is_trivially_copy_assignable_impl<_Tp>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_trivially_move_assignable_impl;

  template<typename _Tp>
    struct __is_trivially_move_assignable_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_trivially_move_assignable_impl<_Tp, true>
    : public __bool_constant<__is_trivially_assignable(_Tp&, _Tp&&)>
    { };

  /// is_trivially_move_assignable
  template<typename _Tp>
    struct is_trivially_move_assignable
    : public __is_trivially_move_assignable_impl<_Tp>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  /// is_trivially_destructible
  template<typename _Tp>
    struct is_trivially_destructible
    : public __and_<__is_destructible_safe<_Tp>,
		    __bool_constant<__has_trivial_destructor(_Tp)>>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };


  /// has_virtual_destructor
  template<typename _Tp>
    struct has_virtual_destructor
    : public integral_constant<bool, __has_virtual_destructor(_Tp)>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };


  // type property queries.

  /// alignment_of
  template<typename _Tp>
    struct alignment_of
    : public integral_constant<std::size_t, alignof(_Tp)>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  /// rank
  template<typename>
    struct rank
    : public integral_constant<std::size_t, 0> { };

  template<typename _Tp, std::size_t _Size>
    struct rank<_Tp[_Size]>
    : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };

  template<typename _Tp>
    struct rank<_Tp[]>
    : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };

  /// extent
  template<typename, unsigned _Uint>
    struct extent
    : public integral_constant<std::size_t, 0> { };

  template<typename _Tp, unsigned _Uint, std::size_t _Size>
    struct extent<_Tp[_Size], _Uint>
    : public integral_constant<std::size_t,
			       _Uint == 0 ? _Size : extent<_Tp,
							   _Uint - 1>::value>
    { };

  template<typename _Tp, unsigned _Uint>
    struct extent<_Tp[], _Uint>
    : public integral_constant<std::size_t,
			       _Uint == 0 ? 0 : extent<_Tp,
						       _Uint - 1>::value>
    { };


  // Type relations.

  /// is_same
  template<typename _Tp, typename _Up>
    struct is_same
#ifdef _GLIBCXX_HAVE_BUILTIN_IS_SAME
    : public integral_constant<bool, __is_same(_Tp, _Up)>
#else
# 1358 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
    : public false_type
#endif
# 1360 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
    { };

#ifndef _GLIBCXX_HAVE_BUILTIN_IS_SAME
  template<typename _Tp>
    struct is_same<_Tp, _Tp>
    : public true_type
    { };
#endif
# 1368 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  /// is_base_of
  template<typename _Base, typename _Derived>
    struct is_base_of
    : public integral_constant<bool, __is_base_of(_Base, _Derived)>
    { };

  template<typename _From, typename _To,
           bool = __or_<is_void<_From>, is_function<_To>,
                        is_array<_To>>::value>
    struct __is_convertible_helper
    {
      typedef typename is_void<_To>::type type;
    };

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wctor-dtor-privacy"
  template<typename _From, typename _To>
    class __is_convertible_helper<_From, _To, false>
    {
      template<typename _To1>
	static void __test_aux(_To1) noexcept;

      template<typename _From1, typename _To1,
	       typename = decltype(__test_aux<_To1>(std::declval<_From1>()))>
	static true_type
	__test(int);

      template<typename, typename>
	static false_type
	__test(...);

    public:
      typedef decltype(__test<_From, _To>(0)) type;
    };
#pragma GCC diagnostic pop

  /// is_convertible
  template<typename _From, typename _To>
    struct is_convertible
    : public __is_convertible_helper<_From, _To>::type
    { };

  // helper trait for unique_ptr<T[]>, shared_ptr<T[]>, and span<T, N>
  template<typename _ToElementType, typename _FromElementType>
    using __is_array_convertible
      = is_convertible<_FromElementType(*)[], _ToElementType(*)[]>;

  template<typename _From, typename _To,
           bool = __or_<is_void<_From>, is_function<_To>,
                        is_array<_To>>::value>
    struct __is_nt_convertible_helper
    : is_void<_To>
    { };

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wctor-dtor-privacy"
  template<typename _From, typename _To>
    class __is_nt_convertible_helper<_From, _To, false>
    {
      template<typename _To1>
	static void __test_aux(_To1) noexcept;

      template<typename _From1, typename _To1>
	static
	__bool_constant<noexcept(__test_aux<_To1>(std::declval<_From1>()))>
	__test(int);

      template<typename, typename>
	static false_type
	__test(...);

    public:
      using type = decltype(__test<_From, _To>(0));
    };
#pragma GCC diagnostic pop

  // is_nothrow_convertible for C++11
  template<typename _From, typename _To>
    struct __is_nothrow_convertible
    : public __is_nt_convertible_helper<_From, _To>::type
    { };

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 201703L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1452 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#define __cpp_lib_is_nothrow_convertible 201806L
  /// is_nothrow_convertible
  template<typename _From, typename _To>
    struct is_nothrow_convertible
    : public __is_nt_convertible_helper<_From, _To>::type
    { };

  /// is_nothrow_convertible_v
  template<typename _From, typename _To>
    inline constexpr bool is_nothrow_convertible_v
      = is_nothrow_convertible<_From, _To>::value;
#endif // C++2a
# 1464 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  // Const-volatile modifications.

  /// remove_const
  template<typename _Tp>
    struct remove_const
    { typedef _Tp     type; };

  template<typename _Tp>
    struct remove_const<_Tp const>
    { typedef _Tp     type; };

  /// remove_volatile
  template<typename _Tp>
    struct remove_volatile
    { typedef _Tp     type; };

  template<typename _Tp>
    struct remove_volatile<_Tp volatile>
    { typedef _Tp     type; };

  /// remove_cv
  template<typename _Tp>
    struct remove_cv
    { using type = _Tp; };

  template<typename _Tp>
    struct remove_cv<const _Tp>
    { using type = _Tp; };

  template<typename _Tp>
    struct remove_cv<volatile _Tp>
    { using type = _Tp; };

  template<typename _Tp>
    struct remove_cv<const volatile _Tp>
    { using type = _Tp; };

  /// add_const
  template<typename _Tp>
    struct add_const
    { typedef _Tp const     type; };

  /// add_volatile
  template<typename _Tp>
    struct add_volatile
    { typedef _Tp volatile     type; };

  /// add_cv
  template<typename _Tp>
    struct add_cv
    {
      typedef typename
      add_const<typename add_volatile<_Tp>::type>::type     type;
    };

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1521 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

#define __cpp_lib_transformation_trait_aliases 201304

  /// Alias template for remove_const
  template<typename _Tp>
    using remove_const_t = typename remove_const<_Tp>::type;

  /// Alias template for remove_volatile
  template<typename _Tp>
    using remove_volatile_t = typename remove_volatile<_Tp>::type;

  /// Alias template for remove_cv
  template<typename _Tp>
    using remove_cv_t = typename remove_cv<_Tp>::type;

  /// Alias template for add_const
  template<typename _Tp>
    using add_const_t = typename add_const<_Tp>::type;

  /// Alias template for add_volatile
  template<typename _Tp>
    using add_volatile_t = typename add_volatile<_Tp>::type;

  /// Alias template for add_cv
  template<typename _Tp>
    using add_cv_t = typename add_cv<_Tp>::type;
#endif
# 1548 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  // Reference transformations.

  /// remove_reference
  template<typename _Tp>
    struct remove_reference
    { typedef _Tp   type; };

  template<typename _Tp>
    struct remove_reference<_Tp&>
    { typedef _Tp   type; };

  template<typename _Tp>
    struct remove_reference<_Tp&&>
    { typedef _Tp   type; };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __add_lvalue_reference_helper
    { typedef _Tp   type; };

  template<typename _Tp>
    struct __add_lvalue_reference_helper<_Tp, true>
    { typedef _Tp&   type; };

  /// add_lvalue_reference
  template<typename _Tp>
    struct add_lvalue_reference
    : public __add_lvalue_reference_helper<_Tp>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __add_rvalue_reference_helper
    { typedef _Tp   type; };

  template<typename _Tp>
    struct __add_rvalue_reference_helper<_Tp, true>
    { typedef _Tp&&   type; };

  /// add_rvalue_reference
  template<typename _Tp>
    struct add_rvalue_reference
    : public __add_rvalue_reference_helper<_Tp>
    { };

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1593 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  /// Alias template for remove_reference
  template<typename _Tp>
    using remove_reference_t = typename remove_reference<_Tp>::type;

  /// Alias template for add_lvalue_reference
  template<typename _Tp>
    using add_lvalue_reference_t = typename add_lvalue_reference<_Tp>::type;

  /// Alias template for add_rvalue_reference
  template<typename _Tp>
    using add_rvalue_reference_t = typename add_rvalue_reference<_Tp>::type;
#endif
# 1605 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  // Sign modifications.

  // Utility for constructing identically cv-qualified types.
  template<typename _Unqualified, bool _IsConst, bool _IsVol>
    struct __cv_selector;

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, false, false>
    { typedef _Unqualified __type; };

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, false, true>
    { typedef volatile _Unqualified __type; };

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, true, false>
    { typedef const _Unqualified __type; };

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, true, true>
    { typedef const volatile _Unqualified __type; };

  template<typename _Qualified, typename _Unqualified,
	   bool _IsConst = is_const<_Qualified>::value,
	   bool _IsVol = is_volatile<_Qualified>::value>
    class __match_cv_qualifiers
    {
      typedef __cv_selector<_Unqualified, _IsConst, _IsVol> __match;

    public:
      typedef typename __match::__type __type;
    };

  // Utility for finding the unsigned versions of signed integral types.
  template<typename _Tp>
    struct __make_unsigned
    { typedef _Tp __type; };

  template<>
    struct __make_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __make_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __make_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __make_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __make_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __make_unsigned<long long>
    { typedef unsigned long long __type; };

#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_0)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1669 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  template<>
    struct __make_unsigned<__GLIBCXX_TYPE_INT_N_0>
    { typedef unsigned __GLIBCXX_TYPE_INT_N_0 __type; };
#endif
# 1673 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_1)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1674 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  template<>
    struct __make_unsigned<__GLIBCXX_TYPE_INT_N_1>
    { typedef unsigned __GLIBCXX_TYPE_INT_N_1 __type; };
#endif
# 1678 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_2)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1679 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  template<>
    struct __make_unsigned<__GLIBCXX_TYPE_INT_N_2>
    { typedef unsigned __GLIBCXX_TYPE_INT_N_2 __type; };
#endif
# 1683 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_3)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1684 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  template<>
    struct __make_unsigned<__GLIBCXX_TYPE_INT_N_3>
    { typedef unsigned __GLIBCXX_TYPE_INT_N_3 __type; };
#endif
# 1688 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  // Select between integral and enum: not possible to be both.
  template<typename _Tp,
	   bool _IsInt = is_integral<_Tp>::value,
	   bool _IsEnum = is_enum<_Tp>::value>
    class __make_unsigned_selector;

  template<typename _Tp>
    class __make_unsigned_selector<_Tp, true, false>
    {
      using __unsigned_type
	= typename __make_unsigned<__remove_cv_t<_Tp>>::__type;

    public:
      using __type
	= typename __match_cv_qualifiers<_Tp, __unsigned_type>::__type;
    };

  class __make_unsigned_selector_base
  {
  protected:
    template<typename...> struct _List { };

    template<typename _Tp, typename... _Up>
      struct _List<_Tp, _Up...> : _List<_Up...>
      { static constexpr size_t __size = sizeof(_Tp); };

    template<size_t _Sz, typename _Tp, bool = (_Sz <= _Tp::__size)>
      struct __select;

    template<size_t _Sz, typename _Uint, typename... _UInts>
      struct __select<_Sz, _List<_Uint, _UInts...>, true>
      { using __type = _Uint; };

    template<size_t _Sz, typename _Uint, typename... _UInts>
      struct __select<_Sz, _List<_Uint, _UInts...>, false>
      : __select<_Sz, _List<_UInts...>>
      { };
  };

  // Choose unsigned integer type with the smallest rank and same size as _Tp
  template<typename _Tp>
    class __make_unsigned_selector<_Tp, false, true>
    : __make_unsigned_selector_base
    {
      // With -fshort-enums, an enum may be as small as a char.
      using _UInts = _List<unsigned char, unsigned short, unsigned int,
			   unsigned long, unsigned long long>;

      using __unsigned_type = typename __select<sizeof(_Tp), _UInts>::__type;

    public:
      using __type
	= typename __match_cv_qualifiers<_Tp, __unsigned_type>::__type;
    };

  // wchar_t, char8_t, char16_t and char32_t are integral types but are
  // neither signed integer types nor unsigned integer types, so must be
  // transformed to the unsigned integer type with the smallest rank.
  // Use the partial specialization for enumeration types to do that.
#ifdef __WCHAR_TYPE__
  template<>
    struct __make_unsigned<wchar_t>
    {
      using __type
	= typename __make_unsigned_selector<wchar_t, false, true>::__type;
    };
#endif
# 1756 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

#ifdef _GLIBCXX_USE_CHAR8_T
  template<>
    struct __make_unsigned<char8_t>
    {
      using __type
	= typename __make_unsigned_selector<char8_t, false, true>::__type;
    };
#endif
# 1765 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  template<>
    struct __make_unsigned<char16_t>
    {
      using __type
	= typename __make_unsigned_selector<char16_t, false, true>::__type;
    };

  template<>
    struct __make_unsigned<char32_t>
    {
      using __type
	= typename __make_unsigned_selector<char32_t, false, true>::__type;
    };

  // Given an integral/enum type, return the corresponding unsigned
  // integer type.
  // Primary template.
  /// make_unsigned
  template<typename _Tp>
    struct make_unsigned
    { typedef typename __make_unsigned_selector<_Tp>::__type type; };

  // Integral, but don't define.
  template<>
    struct make_unsigned<bool>;


  // Utility for finding the signed versions of unsigned integral types.
  template<typename _Tp>
    struct __make_signed
    { typedef _Tp __type; };

  template<>
    struct __make_signed<char>
    { typedef signed char __type; };

  template<>
    struct __make_signed<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __make_signed<unsigned short>
    { typedef signed short __type; };

  template<>
    struct __make_signed<unsigned int>
    { typedef signed int __type; };

  template<>
    struct __make_signed<unsigned long>
    { typedef signed long __type; };

  template<>
    struct __make_signed<unsigned long long>
    { typedef signed long long __type; };

#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_0)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1823 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  template<>
    struct __make_signed<unsigned __GLIBCXX_TYPE_INT_N_0>
    { typedef __GLIBCXX_TYPE_INT_N_0 __type; };
#endif
# 1827 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_1)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1828 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  template<>
    struct __make_signed<unsigned __GLIBCXX_TYPE_INT_N_1>
    { typedef __GLIBCXX_TYPE_INT_N_1 __type; };
#endif
# 1832 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_2)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1833 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  template<>
    struct __make_signed<unsigned __GLIBCXX_TYPE_INT_N_2>
    { typedef __GLIBCXX_TYPE_INT_N_2 __type; };
#endif
# 1837 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_3)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1838 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  template<>
    struct __make_signed<unsigned __GLIBCXX_TYPE_INT_N_3>
    { typedef __GLIBCXX_TYPE_INT_N_3 __type; };
#endif
# 1842 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  // Select between integral and enum: not possible to be both.
  template<typename _Tp,
	   bool _IsInt = is_integral<_Tp>::value,
	   bool _IsEnum = is_enum<_Tp>::value>
    class __make_signed_selector;

  template<typename _Tp>
    class __make_signed_selector<_Tp, true, false>
    {
      using __signed_type
	= typename __make_signed<__remove_cv_t<_Tp>>::__type;

    public:
      using __type
	= typename __match_cv_qualifiers<_Tp, __signed_type>::__type;
    };

  // Choose signed integer type with the smallest rank and same size as _Tp
  template<typename _Tp>
    class __make_signed_selector<_Tp, false, true>
    {
      typedef typename __make_unsigned_selector<_Tp>::__type __unsigned_type;

    public:
      typedef typename __make_signed_selector<__unsigned_type>::__type __type;
    };

  // wchar_t, char16_t and char32_t are integral types but are neither
  // signed integer types nor unsigned integer types, so must be
  // transformed to the signed integer type with the smallest rank.
  // Use the partial specialization for enumeration types to do that.
#if 0 /* disabled by -frewrite-includes */
#if defined(__WCHAR_TYPE__)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 1875 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  template<>
    struct __make_signed<wchar_t>
    {
      using __type
	= typename __make_signed_selector<wchar_t, false, true>::__type;
    };
#endif
# 1882 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(_GLIBCXX_USE_CHAR8_T)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1884 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  template<>
    struct __make_signed<char8_t>
    {
      using __type
	= typename __make_signed_selector<char8_t, false, true>::__type;
    };
#endif
# 1891 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  template<>
    struct __make_signed<char16_t>
    {
      using __type
	= typename __make_signed_selector<char16_t, false, true>::__type;
    };

  template<>
    struct __make_signed<char32_t>
    {
      using __type
	= typename __make_signed_selector<char32_t, false, true>::__type;
    };

  // Given an integral/enum type, return the corresponding signed
  // integer type.
  // Primary template.
  /// make_signed
  template<typename _Tp>
    struct make_signed
    { typedef typename __make_signed_selector<_Tp>::__type type; };

  // Integral, but don't define.
  template<>
    struct make_signed<bool>;

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1919 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  /// Alias template for make_signed
  template<typename _Tp>
    using make_signed_t = typename make_signed<_Tp>::type;

  /// Alias template for make_unsigned
  template<typename _Tp>
    using make_unsigned_t = typename make_unsigned<_Tp>::type;
#endif
# 1927 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  // Array modifications.

  /// remove_extent
  template<typename _Tp>
    struct remove_extent
    { typedef _Tp     type; };

  template<typename _Tp, std::size_t _Size>
    struct remove_extent<_Tp[_Size]>
    { typedef _Tp     type; };

  template<typename _Tp>
    struct remove_extent<_Tp[]>
    { typedef _Tp     type; };

  /// remove_all_extents
  template<typename _Tp>
    struct remove_all_extents
    { typedef _Tp     type; };

  template<typename _Tp, std::size_t _Size>
    struct remove_all_extents<_Tp[_Size]>
    { typedef typename remove_all_extents<_Tp>::type     type; };

  template<typename _Tp>
    struct remove_all_extents<_Tp[]>
    { typedef typename remove_all_extents<_Tp>::type     type; };

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1957 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  /// Alias template for remove_extent
  template<typename _Tp>
    using remove_extent_t = typename remove_extent<_Tp>::type;

  /// Alias template for remove_all_extents
  template<typename _Tp>
    using remove_all_extents_t = typename remove_all_extents<_Tp>::type;
#endif
# 1965 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  // Pointer modifications.

  template<typename _Tp, typename>
    struct __remove_pointer_helper
    { typedef _Tp     type; };

  template<typename _Tp, typename _Up>
    struct __remove_pointer_helper<_Tp, _Up*>
    { typedef _Up     type; };

  /// remove_pointer
  template<typename _Tp>
    struct remove_pointer
    : public __remove_pointer_helper<_Tp, __remove_cv_t<_Tp>>
    { };

  /// add_pointer
  template<typename _Tp, bool = __or_<__is_referenceable<_Tp>,
				      is_void<_Tp>>::value>
    struct __add_pointer_helper
    { typedef _Tp     type; };

  template<typename _Tp>
    struct __add_pointer_helper<_Tp, true>
    { typedef typename remove_reference<_Tp>::type*     type; };

  template<typename _Tp>
    struct add_pointer
    : public __add_pointer_helper<_Tp>
    { };

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 1998 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  /// Alias template for remove_pointer
  template<typename _Tp>
    using remove_pointer_t = typename remove_pointer<_Tp>::type;

  /// Alias template for add_pointer
  template<typename _Tp>
    using add_pointer_t = typename add_pointer<_Tp>::type;
#endif
# 2006 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  template<std::size_t _Len>
    struct __aligned_storage_msa
    {
      union __type
      {
	unsigned char __data[_Len];
	struct __attribute__((__aligned__)) { } __align;
      };
    };

  /**
   *  @brief Alignment type.
   *
   *  The value of _Align is a default-alignment which shall be the
   *  most stringent alignment requirement for any C++ object type
   *  whose size is no greater than _Len (3.9). The member typedef
   *  type shall be a POD type suitable for use as uninitialized
   *  storage for any object whose size is at most _Len and whose
   *  alignment is a divisor of _Align.
  */
  template<std::size_t _Len, std::size_t _Align =
	   __alignof__(typename __aligned_storage_msa<_Len>::__type)>
    struct aligned_storage
    {
      union type
      {
	unsigned char __data[_Len];
	struct __attribute__((__aligned__((_Align)))) { } __align;
      };
    };

  template <typename... _Types>
    struct __strictest_alignment
    {
      static const size_t _S_alignment = 0;
      static const size_t _S_size = 0;
    };

  template <typename _Tp, typename... _Types>
    struct __strictest_alignment<_Tp, _Types...>
    {
      static const size_t _S_alignment =
        alignof(_Tp) > __strictest_alignment<_Types...>::_S_alignment
	? alignof(_Tp) : __strictest_alignment<_Types...>::_S_alignment;
      static const size_t _S_size =
        sizeof(_Tp) > __strictest_alignment<_Types...>::_S_size
	? sizeof(_Tp) : __strictest_alignment<_Types...>::_S_size;
    };

  /**
   *  @brief Provide aligned storage for types.
   *
   *  [meta.trans.other]
   *
   *  Provides aligned storage for any of the provided types of at
   *  least size _Len.
   *
   *  @see aligned_storage
   */
  template <size_t _Len, typename... _Types>
    struct aligned_union
    {
    private:
      static_assert(sizeof...(_Types) != 0, "At least one type is required");

      using __strictest = __strictest_alignment<_Types...>;
      static const size_t _S_len = _Len > __strictest::_S_size
	? _Len : __strictest::_S_size;
    public:
      /// The value of the strictest alignment of _Types.
      static const size_t alignment_value = __strictest::_S_alignment;
      /// The storage.
      typedef typename aligned_storage<_S_len, alignment_value>::type type;
    };

  template <size_t _Len, typename... _Types>
    const size_t aligned_union<_Len, _Types...>::alignment_value;

  // Decay trait for arrays and functions, used for perfect forwarding
  // in make_pair, make_tuple, etc.
  template<typename _Up,
	   bool _IsArray = is_array<_Up>::value,
	   bool _IsFunction = is_function<_Up>::value>
    struct __decay_selector;

  // NB: DR 705.
  template<typename _Up>
    struct __decay_selector<_Up, false, false>
    { typedef __remove_cv_t<_Up> __type; };

  template<typename _Up>
    struct __decay_selector<_Up, true, false>
    { typedef typename remove_extent<_Up>::type* __type; };

  template<typename _Up>
    struct __decay_selector<_Up, false, true>
    { typedef typename add_pointer<_Up>::type __type; };

  /// decay
  template<typename _Tp>
    class decay
    {
      typedef typename remove_reference<_Tp>::type __remove_type;

    public:
      typedef typename __decay_selector<__remove_type>::__type type;
    };

  // __decay_t (std::decay_t for C++11).
  template<typename _Tp>
    using __decay_t = typename decay<_Tp>::type;

  template<typename _Tp>
    class reference_wrapper;

  // Helper which adds a reference to a type when given a reference_wrapper
  template<typename _Tp>
    struct __strip_reference_wrapper
    {
      typedef _Tp __type;
    };

  template<typename _Tp>
    struct __strip_reference_wrapper<reference_wrapper<_Tp> >
    {
      typedef _Tp& __type;
    };

  template<typename _Tp>
    using __decay_and_strip = __strip_reference_wrapper<__decay_t<_Tp>>;


  // Primary template.
  /// Define a member typedef @c type only if a boolean constant is true.
  template<bool, typename _Tp = void>
    struct enable_if
    { };

  // Partial specialization for true.
  template<typename _Tp>
    struct enable_if<true, _Tp>
    { typedef _Tp type; };

  // __enable_if_t (std::enable_if_t for C++11)
  template<bool _Cond, typename _Tp = void>
    using __enable_if_t = typename enable_if<_Cond, _Tp>::type;

  template<typename... _Cond>
    using _Require = __enable_if_t<__and_<_Cond...>::value>;

  // Primary template.
  /// Define a member typedef @c type to one of two argument types.
  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct conditional
    { typedef _Iftrue type; };

  // Partial specialization for false.
  template<typename _Iftrue, typename _Iffalse>
    struct conditional<false, _Iftrue, _Iffalse>
    { typedef _Iffalse type; };

  // __remove_cvref_t (std::remove_cvref_t for C++11).
  template<typename _Tp>
    using __remove_cvref_t
     = typename remove_cv<typename remove_reference<_Tp>::type>::type;

  /// common_type
  template<typename... _Tp>
    struct common_type;

  // Sfinae-friendly common_type implementation:

  struct __do_common_type_impl
  {
    template<typename _Tp, typename _Up>
      using __cond_t
	= decltype(true ? std::declval<_Tp>() : std::declval<_Up>());

    // if decay_t<decltype(false ? declval<D1>() : declval<D2>())>
    // denotes a valid type, let C denote that type.
    template<typename _Tp, typename _Up>
      static __success_type<__decay_t<__cond_t<_Tp, _Up>>>
      _S_test(int);

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 201703L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2192 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
    // Otherwise, if COND-RES(CREF(D1), CREF(D2)) denotes a type,
    // let C denote the type decay_t<COND-RES(CREF(D1), CREF(D2))>.
    template<typename _Tp, typename _Up>
      static __success_type<__remove_cvref_t<__cond_t<const _Tp&, const _Up&>>>
      _S_test_2(int);
#endif
# 2198 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

    template<typename, typename>
      static __failure_type
      _S_test_2(...);

    template<typename _Tp, typename _Up>
      static decltype(_S_test_2<_Tp, _Up>(0))
      _S_test(...);
  };

  // If sizeof...(T) is zero, there shall be no member type.
  template<>
    struct common_type<>
    { };

  // If sizeof...(T) is one, the same type, if any, as common_type_t<T0, T0>.
  template<typename _Tp0>
    struct common_type<_Tp0>
    : public common_type<_Tp0, _Tp0>
    { };

  // If sizeof...(T) is two, ...
  template<typename _Tp1, typename _Tp2,
	   typename _Dp1 = __decay_t<_Tp1>, typename _Dp2 = __decay_t<_Tp2>>
    struct __common_type_impl
    {
      // If is_same_v<T1, D1> is false or is_same_v<T2, D2> is false,
      // let C denote the same type, if any, as common_type_t<D1, D2>.
      using type = common_type<_Dp1, _Dp2>;
    };

  template<typename _Tp1, typename _Tp2>
    struct __common_type_impl<_Tp1, _Tp2, _Tp1, _Tp2>
    : private __do_common_type_impl
    {
      // Otherwise, if decay_t<decltype(false ? declval<D1>() : declval<D2>())>
      // denotes a valid type, let C denote that type.
      using type = decltype(_S_test<_Tp1, _Tp2>(0));
    };

  // If sizeof...(T) is two, ...
  template<typename _Tp1, typename _Tp2>
    struct common_type<_Tp1, _Tp2>
    : public __common_type_impl<_Tp1, _Tp2>::type
    { };

  template<typename...>
    struct __common_type_pack
    { };

  template<typename, typename, typename = void>
    struct __common_type_fold;

  // If sizeof...(T) is greater than two, ...
  template<typename _Tp1, typename _Tp2, typename... _Rp>
    struct common_type<_Tp1, _Tp2, _Rp...>
    : public __common_type_fold<common_type<_Tp1, _Tp2>,
				__common_type_pack<_Rp...>>
    { };

  // Let C denote the same type, if any, as common_type_t<T1, T2>.
  // If there is such a type C, type shall denote the same type, if any,
  // as common_type_t<C, R...>.
  template<typename _CTp, typename... _Rp>
    struct __common_type_fold<_CTp, __common_type_pack<_Rp...>,
			      __void_t<typename _CTp::type>>
    : public common_type<typename _CTp::type, _Rp...>
    { };

  // Otherwise, there shall be no member type.
  template<typename _CTp, typename _Rp>
    struct __common_type_fold<_CTp, _Rp, void>
    { };

  template<typename _Tp, bool = is_enum<_Tp>::value>
    struct __underlying_type_impl
    {
      using type = __underlying_type(_Tp);
    };

  template<typename _Tp>
    struct __underlying_type_impl<_Tp, false>
    { };

  /// The underlying type of an enum.
  template<typename _Tp>
    struct underlying_type
    : public __underlying_type_impl<_Tp>
    { };

  template<typename _Tp>
    struct __declval_protector
    {
      static const bool __stop = false;
    };

  template<typename _Tp>
    auto declval() noexcept -> decltype(__declval<_Tp>(0))
    {
      static_assert(__declval_protector<_Tp>::__stop,
		    "declval() must not be used!");
      return __declval<_Tp>(0);
    }

  /// result_of
  template<typename _Signature>
    struct result_of;

  // Sfinae-friendly result_of implementation:

#define __cpp_lib_result_of_sfinae 201210

  struct __invoke_memfun_ref { };
  struct __invoke_memfun_deref { };
  struct __invoke_memobj_ref { };
  struct __invoke_memobj_deref { };
  struct __invoke_other { };

  // Associate a tag type with a specialization of __success_type.
  template<typename _Tp, typename _Tag>
    struct __result_of_success : __success_type<_Tp>
    { using __invoke_type = _Tag; };

  // [func.require] paragraph 1 bullet 1:
  struct __result_of_memfun_ref_impl
  {
    template<typename _Fp, typename _Tp1, typename... _Args>
      static __result_of_success<decltype(
      (std::declval<_Tp1>().*std::declval<_Fp>())(std::declval<_Args>()...)
      ), __invoke_memfun_ref> _S_test(int);

    template<typename...>
      static __failure_type _S_test(...);
  };

  template<typename _MemPtr, typename _Arg, typename... _Args>
    struct __result_of_memfun_ref
    : private __result_of_memfun_ref_impl
    {
      typedef decltype(_S_test<_MemPtr, _Arg, _Args...>(0)) type;
    };

  // [func.require] paragraph 1 bullet 2:
  struct __result_of_memfun_deref_impl
  {
    template<typename _Fp, typename _Tp1, typename... _Args>
      static __result_of_success<decltype(
      ((*std::declval<_Tp1>()).*std::declval<_Fp>())(std::declval<_Args>()...)
      ), __invoke_memfun_deref> _S_test(int);

    template<typename...>
      static __failure_type _S_test(...);
  };

  template<typename _MemPtr, typename _Arg, typename... _Args>
    struct __result_of_memfun_deref
    : private __result_of_memfun_deref_impl
    {
      typedef decltype(_S_test<_MemPtr, _Arg, _Args...>(0)) type;
    };

  // [func.require] paragraph 1 bullet 3:
  struct __result_of_memobj_ref_impl
  {
    template<typename _Fp, typename _Tp1>
      static __result_of_success<decltype(
      std::declval<_Tp1>().*std::declval<_Fp>()
      ), __invoke_memobj_ref> _S_test(int);

    template<typename, typename>
      static __failure_type _S_test(...);
  };

  template<typename _MemPtr, typename _Arg>
    struct __result_of_memobj_ref
    : private __result_of_memobj_ref_impl
    {
      typedef decltype(_S_test<_MemPtr, _Arg>(0)) type;
    };

  // [func.require] paragraph 1 bullet 4:
  struct __result_of_memobj_deref_impl
  {
    template<typename _Fp, typename _Tp1>
      static __result_of_success<decltype(
      (*std::declval<_Tp1>()).*std::declval<_Fp>()
      ), __invoke_memobj_deref> _S_test(int);

    template<typename, typename>
      static __failure_type _S_test(...);
  };

  template<typename _MemPtr, typename _Arg>
    struct __result_of_memobj_deref
    : private __result_of_memobj_deref_impl
    {
      typedef decltype(_S_test<_MemPtr, _Arg>(0)) type;
    };

  template<typename _MemPtr, typename _Arg>
    struct __result_of_memobj;

  template<typename _Res, typename _Class, typename _Arg>
    struct __result_of_memobj<_Res _Class::*, _Arg>
    {
      typedef __remove_cvref_t<_Arg> _Argval;
      typedef _Res _Class::* _MemPtr;
      typedef typename conditional<__or_<is_same<_Argval, _Class>,
        is_base_of<_Class, _Argval>>::value,
        __result_of_memobj_ref<_MemPtr, _Arg>,
        __result_of_memobj_deref<_MemPtr, _Arg>
      >::type::type type;
    };

  template<typename _MemPtr, typename _Arg, typename... _Args>
    struct __result_of_memfun;

  template<typename _Res, typename _Class, typename _Arg, typename... _Args>
    struct __result_of_memfun<_Res _Class::*, _Arg, _Args...>
    {
      typedef typename remove_reference<_Arg>::type _Argval;
      typedef _Res _Class::* _MemPtr;
      typedef typename conditional<is_base_of<_Class, _Argval>::value,
        __result_of_memfun_ref<_MemPtr, _Arg, _Args...>,
        __result_of_memfun_deref<_MemPtr, _Arg, _Args...>
      >::type::type type;
    };

  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // 2219.  INVOKE-ing a pointer to member with a reference_wrapper
  //        as the object expression

  // Used by result_of, invoke etc. to unwrap a reference_wrapper.
  template<typename _Tp, typename _Up = __remove_cvref_t<_Tp>>
    struct __inv_unwrap
    {
      using type = _Tp;
    };

  template<typename _Tp, typename _Up>
    struct __inv_unwrap<_Tp, reference_wrapper<_Up>>
    {
      using type = _Up&;
    };

  template<bool, bool, typename _Functor, typename... _ArgTypes>
    struct __result_of_impl
    {
      typedef __failure_type type;
    };

  template<typename _MemPtr, typename _Arg>
    struct __result_of_impl<true, false, _MemPtr, _Arg>
    : public __result_of_memobj<__decay_t<_MemPtr>,
				typename __inv_unwrap<_Arg>::type>
    { };

  template<typename _MemPtr, typename _Arg, typename... _Args>
    struct __result_of_impl<false, true, _MemPtr, _Arg, _Args...>
    : public __result_of_memfun<__decay_t<_MemPtr>,
				typename __inv_unwrap<_Arg>::type, _Args...>
    { };

  // [func.require] paragraph 1 bullet 5:
  struct __result_of_other_impl
  {
    template<typename _Fn, typename... _Args>
      static __result_of_success<decltype(
      std::declval<_Fn>()(std::declval<_Args>()...)
      ), __invoke_other> _S_test(int);

    template<typename...>
      static __failure_type _S_test(...);
  };

  template<typename _Functor, typename... _ArgTypes>
    struct __result_of_impl<false, false, _Functor, _ArgTypes...>
    : private __result_of_other_impl
    {
      typedef decltype(_S_test<_Functor, _ArgTypes...>(0)) type;
    };

  // __invoke_result (std::invoke_result for C++11)
  template<typename _Functor, typename... _ArgTypes>
    struct __invoke_result
    : public __result_of_impl<
        is_member_object_pointer<
          typename remove_reference<_Functor>::type
        >::value,
        is_member_function_pointer<
          typename remove_reference<_Functor>::type
        >::value,
	_Functor, _ArgTypes...
      >::type
    { };

  template<typename _Functor, typename... _ArgTypes>
    struct result_of<_Functor(_ArgTypes...)>
    : public __invoke_result<_Functor, _ArgTypes...>
    { };

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201402L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2500 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  /// Alias template for aligned_storage
  template<size_t _Len, size_t _Align =
	    __alignof__(typename __aligned_storage_msa<_Len>::__type)>
    using aligned_storage_t = typename aligned_storage<_Len, _Align>::type;

  template <size_t _Len, typename... _Types>
    using aligned_union_t = typename aligned_union<_Len, _Types...>::type;

  /// Alias template for decay
  template<typename _Tp>
    using decay_t = typename decay<_Tp>::type;

  /// Alias template for enable_if
  template<bool _Cond, typename _Tp = void>
    using enable_if_t = typename enable_if<_Cond, _Tp>::type;

  /// Alias template for conditional
  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    using conditional_t = typename conditional<_Cond, _Iftrue, _Iffalse>::type;

  /// Alias template for common_type
  template<typename... _Tp>
    using common_type_t = typename common_type<_Tp...>::type;

  /// Alias template for underlying_type
  template<typename _Tp>
    using underlying_type_t = typename underlying_type<_Tp>::type;

  /// Alias template for result_of
  template<typename _Tp>
    using result_of_t = typename result_of<_Tp>::type;
#endif // C++14
# 2532 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201703L || !defined(__STRICT_ANSI__) // c++17 or gnu++11
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2534 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#define __cpp_lib_void_t 201411
  /// A metafunction that always yields void, used for detecting valid types.
  template<typename...> using void_t = void;
#endif
# 2538 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  /// Implementation of the detection idiom (negative case).
  template<typename _Default, typename _AlwaysVoid,
	   template<typename...> class _Op, typename... _Args>
    struct __detector
    {
      using value_t = false_type;
      using type = _Default;
    };

  /// Implementation of the detection idiom (positive case).
  template<typename _Default, template<typename...> class _Op,
	    typename... _Args>
    struct __detector<_Default, __void_t<_Op<_Args...>>, _Op, _Args...>
    {
      using value_t = true_type;
      using type = _Op<_Args...>;
    };

  // Detect whether _Op<_Args...> is a valid type, use _Default if not.
  template<typename _Default, template<typename...> class _Op,
	   typename... _Args>
    using __detected_or = __detector<_Default, void, _Op, _Args...>;

  // _Op<_Args...> if that is a valid type, otherwise _Default.
  template<typename _Default, template<typename...> class _Op,
	   typename... _Args>
    using __detected_or_t
      = typename __detected_or<_Default, _Op, _Args...>::type;

  /// @} group metaprogramming

  /**
   *  Use SFINAE to determine if the type _Tp has a publicly-accessible
   *  member type _NTYPE.
   */
#define _GLIBCXX_HAS_NESTED_TYPE(_NTYPE)				\
  template<typename _Tp, typename = __void_t<>>				\
    struct __has_##_NTYPE						\
    : false_type							\
    { };								\
  template<typename _Tp>						\
    struct __has_##_NTYPE<_Tp, __void_t<typename _Tp::_NTYPE>>		\
    : true_type								\
    { };

  template <typename _Tp>
    struct __is_swappable;

  template <typename _Tp>
    struct __is_nothrow_swappable;

  template<typename... _Elements>
    class tuple;

  template<typename>
    struct __is_tuple_like_impl : false_type
    { };

  template<typename... _Tps>
    struct __is_tuple_like_impl<tuple<_Tps...>> : true_type
    { };

  // Internal type trait that allows us to sfinae-protect tuple_cat.
  template<typename _Tp>
    struct __is_tuple_like
    : public __is_tuple_like_impl<__remove_cvref_t<_Tp>>::type
    { };

  template<typename _Tp>
    _GLIBCXX20_CONSTEXPR
    inline
    _Require<__not_<__is_tuple_like<_Tp>>,
	     is_move_constructible<_Tp>,
	     is_move_assignable<_Tp>>
    swap(_Tp&, _Tp&)
    noexcept(__and_<is_nothrow_move_constructible<_Tp>,
	            is_nothrow_move_assignable<_Tp>>::value);

  template<typename _Tp, size_t _Nm>
    _GLIBCXX20_CONSTEXPR
    inline
    __enable_if_t<__is_swappable<_Tp>::value>
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
    noexcept(__is_nothrow_swappable<_Tp>::value);

  namespace __swappable_details {
    using std::swap;

    struct __do_is_swappable_impl
    {
      template<typename _Tp, typename
               = decltype(swap(std::declval<_Tp&>(), std::declval<_Tp&>()))>
        static true_type __test(int);

      template<typename>
        static false_type __test(...);
    };

    struct __do_is_nothrow_swappable_impl
    {
      template<typename _Tp>
        static __bool_constant<
          noexcept(swap(std::declval<_Tp&>(), std::declval<_Tp&>()))
        > __test(int);

      template<typename>
        static false_type __test(...);
    };

  } // namespace __swappable_details

  template<typename _Tp>
    struct __is_swappable_impl
    : public __swappable_details::__do_is_swappable_impl
    {
      typedef decltype(__test<_Tp>(0)) type;
    };

  template<typename _Tp>
    struct __is_nothrow_swappable_impl
    : public __swappable_details::__do_is_nothrow_swappable_impl
    {
      typedef decltype(__test<_Tp>(0)) type;
    };

  template<typename _Tp>
    struct __is_swappable
    : public __is_swappable_impl<_Tp>::type
    { };

  template<typename _Tp>
    struct __is_nothrow_swappable
    : public __is_nothrow_swappable_impl<_Tp>::type
    { };

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 201402L || !defined(__STRICT_ANSI__) // c++1z or gnu++11
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2675 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#define __cpp_lib_is_swappable 201603
  /// Metafunctions used for detecting swappable types: p0185r1

  /// is_swappable
  template<typename _Tp>
    struct is_swappable
    : public __is_swappable_impl<_Tp>::type
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  /// is_nothrow_swappable
  template<typename _Tp>
    struct is_nothrow_swappable
    : public __is_nothrow_swappable_impl<_Tp>::type
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201402L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2697 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  /// is_swappable_v
  template<typename _Tp>
    _GLIBCXX17_INLINE constexpr bool is_swappable_v =
      is_swappable<_Tp>::value;

  /// is_nothrow_swappable_v
  template<typename _Tp>
    _GLIBCXX17_INLINE constexpr bool is_nothrow_swappable_v =
      is_nothrow_swappable<_Tp>::value;
#endif // __cplusplus >= 201402L
# 2707 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  namespace __swappable_with_details {
    using std::swap;

    struct __do_is_swappable_with_impl
    {
      template<typename _Tp, typename _Up, typename
               = decltype(swap(std::declval<_Tp>(), std::declval<_Up>())),
               typename
               = decltype(swap(std::declval<_Up>(), std::declval<_Tp>()))>
        static true_type __test(int);

      template<typename, typename>
        static false_type __test(...);
    };

    struct __do_is_nothrow_swappable_with_impl
    {
      template<typename _Tp, typename _Up>
        static __bool_constant<
          noexcept(swap(std::declval<_Tp>(), std::declval<_Up>()))
          &&
          noexcept(swap(std::declval<_Up>(), std::declval<_Tp>()))
        > __test(int);

      template<typename, typename>
        static false_type __test(...);
    };

  } // namespace __swappable_with_details

  template<typename _Tp, typename _Up>
    struct __is_swappable_with_impl
    : public __swappable_with_details::__do_is_swappable_with_impl
    {
      typedef decltype(__test<_Tp, _Up>(0)) type;
    };

  // Optimization for the homogenous lvalue case, not required:
  template<typename _Tp>
    struct __is_swappable_with_impl<_Tp&, _Tp&>
    : public __swappable_details::__do_is_swappable_impl
    {
      typedef decltype(__test<_Tp&>(0)) type;
    };

  template<typename _Tp, typename _Up>
    struct __is_nothrow_swappable_with_impl
    : public __swappable_with_details::__do_is_nothrow_swappable_with_impl
    {
      typedef decltype(__test<_Tp, _Up>(0)) type;
    };

  // Optimization for the homogenous lvalue case, not required:
  template<typename _Tp>
    struct __is_nothrow_swappable_with_impl<_Tp&, _Tp&>
    : public __swappable_details::__do_is_nothrow_swappable_impl
    {
      typedef decltype(__test<_Tp&>(0)) type;
    };

  /// is_swappable_with
  template<typename _Tp, typename _Up>
    struct is_swappable_with
    : public __is_swappable_with_impl<_Tp, _Up>::type
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"first template argument must be a complete class or an unbounded array");
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Up>{}),
	"second template argument must be a complete class or an unbounded array");
    };

  /// is_nothrow_swappable_with
  template<typename _Tp, typename _Up>
    struct is_nothrow_swappable_with
    : public __is_nothrow_swappable_with_impl<_Tp, _Up>::type
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"first template argument must be a complete class or an unbounded array");
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Up>{}),
	"second template argument must be a complete class or an unbounded array");
    };

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201402L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2791 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
  /// is_swappable_with_v
  template<typename _Tp, typename _Up>
    _GLIBCXX17_INLINE constexpr bool is_swappable_with_v =
      is_swappable_with<_Tp, _Up>::value;

  /// is_nothrow_swappable_with_v
  template<typename _Tp, typename _Up>
    _GLIBCXX17_INLINE constexpr bool is_nothrow_swappable_with_v =
      is_nothrow_swappable_with<_Tp, _Up>::value;
#endif // __cplusplus >= 201402L
# 2801 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

#endif// c++1z or gnu++11
# 2803 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  // __is_invocable (std::is_invocable for C++11)

  // The primary template is used for invalid INVOKE expressions.
  template<typename _Result, typename _Ret,
	   bool = is_void<_Ret>::value, typename = void>
    struct __is_invocable_impl : false_type { };

  // Used for valid INVOKE and INVOKE<void> expressions.
  template<typename _Result, typename _Ret>
    struct __is_invocable_impl<_Result, _Ret,
			       /* is_void<_Ret> = */ true,
			       __void_t<typename _Result::type>>
    : true_type
    { };

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wctor-dtor-privacy"
  // Used for INVOKE<R> expressions to check the implicit conversion to R.
  template<typename _Result, typename _Ret>
    struct __is_invocable_impl<_Result, _Ret,
			       /* is_void<_Ret> = */ false,
			       __void_t<typename _Result::type>>
    {
    private:
      // The type of the INVOKE expression.
      // Unlike declval, this doesn't add_rvalue_reference.
      static typename _Result::type _S_get();

      template<typename _Tp>
	static void _S_conv(_Tp);

      // This overload is viable if INVOKE(f, args...) can convert to _Tp.
      template<typename _Tp, typename = decltype(_S_conv<_Tp>(_S_get()))>
	static true_type
	_S_test(int);

      template<typename _Tp>
	static false_type
	_S_test(...);

    public:
      using type = decltype(_S_test<_Ret>(1));
    };
#pragma GCC diagnostic pop

  template<typename _Fn, typename... _ArgTypes>
    struct __is_invocable
    : __is_invocable_impl<__invoke_result<_Fn, _ArgTypes...>, void>::type
    { };

  template<typename _Fn, typename _Tp, typename... _Args>
    constexpr bool __call_is_nt(__invoke_memfun_ref)
    {
      using _Up = typename __inv_unwrap<_Tp>::type;
      return noexcept((std::declval<_Up>().*std::declval<_Fn>())(
	    std::declval<_Args>()...));
    }

  template<typename _Fn, typename _Tp, typename... _Args>
    constexpr bool __call_is_nt(__invoke_memfun_deref)
    {
      return noexcept(((*std::declval<_Tp>()).*std::declval<_Fn>())(
	    std::declval<_Args>()...));
    }

  template<typename _Fn, typename _Tp>
    constexpr bool __call_is_nt(__invoke_memobj_ref)
    {
      using _Up = typename __inv_unwrap<_Tp>::type;
      return noexcept(std::declval<_Up>().*std::declval<_Fn>());
    }

  template<typename _Fn, typename _Tp>
    constexpr bool __call_is_nt(__invoke_memobj_deref)
    {
      return noexcept((*std::declval<_Tp>()).*std::declval<_Fn>());
    }

  template<typename _Fn, typename... _Args>
    constexpr bool __call_is_nt(__invoke_other)
    {
      return noexcept(std::declval<_Fn>()(std::declval<_Args>()...));
    }

  template<typename _Result, typename _Fn, typename... _Args>
    struct __call_is_nothrow
    : __bool_constant<
	std::__call_is_nt<_Fn, _Args...>(typename _Result::__invoke_type{})
      >
    { };

  template<typename _Fn, typename... _Args>
    using __call_is_nothrow_
      = __call_is_nothrow<__invoke_result<_Fn, _Args...>, _Fn, _Args...>;

  // __is_nothrow_invocable (std::is_nothrow_invocable for C++11)
  template<typename _Fn, typename... _Args>
    struct __is_nothrow_invocable
    : __and_<__is_invocable<_Fn, _Args...>,
             __call_is_nothrow_<_Fn, _Args...>>::type
    { };

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wctor-dtor-privacy"
  struct __nonesuchbase {};
  struct __nonesuch : private __nonesuchbase {
    ~__nonesuch() = delete;
    __nonesuch(__nonesuch const&) = delete;
    void operator=(__nonesuch const&) = delete;
  };
#pragma GCC diagnostic pop

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201703L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 2917 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
# define __cpp_lib_is_invocable 201703

  /// std::invoke_result
  template<typename _Functor, typename... _ArgTypes>
    struct invoke_result
    : public __invoke_result<_Functor, _ArgTypes...>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Functor>{}),
	"_Functor must be a complete class or an unbounded array");
      static_assert((std::__is_complete_or_unbounded(
	__type_identity<_ArgTypes>{}) && ...),
	"each argument type must be a complete class or an unbounded array");
    };

  /// std::invoke_result_t
  template<typename _Fn, typename... _Args>
    using invoke_result_t = typename invoke_result<_Fn, _Args...>::type;

  /// std::is_invocable
  template<typename _Fn, typename... _ArgTypes>
    struct is_invocable
    : __is_invocable_impl<__invoke_result<_Fn, _ArgTypes...>, void>::type
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Fn>{}),
	"_Fn must be a complete class or an unbounded array");
      static_assert((std::__is_complete_or_unbounded(
	__type_identity<_ArgTypes>{}) && ...),
	"each argument type must be a complete class or an unbounded array");
    };

  /// std::is_invocable_r
  template<typename _Ret, typename _Fn, typename... _ArgTypes>
    struct is_invocable_r
    : __is_invocable_impl<__invoke_result<_Fn, _ArgTypes...>, _Ret>::type
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Fn>{}),
	"_Fn must be a complete class or an unbounded array");
      static_assert((std::__is_complete_or_unbounded(
	__type_identity<_ArgTypes>{}) && ...),
	"each argument type must be a complete class or an unbounded array");
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Ret>{}),
	"_Ret must be a complete class or an unbounded array");
    };

  /// std::is_nothrow_invocable
  template<typename _Fn, typename... _ArgTypes>
    struct is_nothrow_invocable
    : __and_<__is_invocable_impl<__invoke_result<_Fn, _ArgTypes...>, void>,
	     __call_is_nothrow_<_Fn, _ArgTypes...>>::type
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Fn>{}),
	"_Fn must be a complete class or an unbounded array");
      static_assert((std::__is_complete_or_unbounded(
	__type_identity<_ArgTypes>{}) && ...),
	"each argument type must be a complete class or an unbounded array");
    };

  template<typename _Result, typename _Ret, typename = void>
    struct __is_nt_invocable_impl : false_type { };

  template<typename _Result, typename _Ret>
    struct __is_nt_invocable_impl<_Result, _Ret,
				  __void_t<typename _Result::type>>
    : __or_<is_void<_Ret>,
	    __is_nothrow_convertible<typename _Result::type, _Ret>>
    { };

  /// std::is_nothrow_invocable_r
  template<typename _Ret, typename _Fn, typename... _ArgTypes>
    struct is_nothrow_invocable_r
    : __and_<__is_nt_invocable_impl<__invoke_result<_Fn, _ArgTypes...>, _Ret>,
             __call_is_nothrow_<_Fn, _ArgTypes...>>::type
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Fn>{}),
	"_Fn must be a complete class or an unbounded array");
      static_assert((std::__is_complete_or_unbounded(
	__type_identity<_ArgTypes>{}) && ...),
	"each argument type must be a complete class or an unbounded array");
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Ret>{}),
	"_Ret must be a complete class or an unbounded array");
    };

  /// std::is_invocable_v
  template<typename _Fn, typename... _Args>
    inline constexpr bool is_invocable_v = is_invocable<_Fn, _Args...>::value;

  /// std::is_nothrow_invocable_v
  template<typename _Fn, typename... _Args>
    inline constexpr bool is_nothrow_invocable_v
      = is_nothrow_invocable<_Fn, _Args...>::value;

  /// std::is_invocable_r_v
  template<typename _Ret, typename _Fn, typename... _Args>
    inline constexpr bool is_invocable_r_v
      = is_invocable_r<_Ret, _Fn, _Args...>::value;

  /// std::is_nothrow_invocable_r_v
  template<typename _Ret, typename _Fn, typename... _Args>
    inline constexpr bool is_nothrow_invocable_r_v
      = is_nothrow_invocable_r<_Ret, _Fn, _Args...>::value;
#endif // C++17
# 3018 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201703L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 3020 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
# define __cpp_lib_type_trait_variable_templates 201510L
template <typename _Tp>
  inline constexpr bool is_void_v = is_void<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_null_pointer_v = is_null_pointer<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_integral_v = is_integral<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_floating_point_v = is_floating_point<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_array_v = is_array<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_pointer_v = is_pointer<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_lvalue_reference_v =
    is_lvalue_reference<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_rvalue_reference_v =
    is_rvalue_reference<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_member_object_pointer_v =
    is_member_object_pointer<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_member_function_pointer_v =
    is_member_function_pointer<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_enum_v = is_enum<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_union_v = is_union<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_class_v = is_class<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_function_v = is_function<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_reference_v = is_reference<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_arithmetic_v = is_arithmetic<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_fundamental_v = is_fundamental<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_object_v = is_object<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_scalar_v = is_scalar<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_compound_v = is_compound<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_member_pointer_v = is_member_pointer<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_const_v = is_const<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_volatile_v = is_volatile<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_trivial_v = is_trivial<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_trivially_copyable_v =
    is_trivially_copyable<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_standard_layout_v = is_standard_layout<_Tp>::value;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
template <typename _Tp>
  _GLIBCXX20_DEPRECATED("use is_standard_layout_v && is_trivial_v instead")
  inline constexpr bool is_pod_v = is_pod<_Tp>::value;
template <typename _Tp>
  _GLIBCXX17_DEPRECATED
  inline constexpr bool is_literal_type_v = is_literal_type<_Tp>::value;
#pragma GCC diagnostic pop
 template <typename _Tp>
  inline constexpr bool is_empty_v = is_empty<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_polymorphic_v = is_polymorphic<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_abstract_v = is_abstract<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_final_v = is_final<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_signed_v = is_signed<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_unsigned_v = is_unsigned<_Tp>::value;
template <typename _Tp, typename... _Args>
  inline constexpr bool is_constructible_v =
    is_constructible<_Tp, _Args...>::value;
template <typename _Tp>
  inline constexpr bool is_default_constructible_v =
    is_default_constructible<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_copy_constructible_v =
    is_copy_constructible<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_move_constructible_v =
    is_move_constructible<_Tp>::value;
template <typename _Tp, typename _Up>
  inline constexpr bool is_assignable_v = is_assignable<_Tp, _Up>::value;
template <typename _Tp>
  inline constexpr bool is_copy_assignable_v = is_copy_assignable<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_move_assignable_v = is_move_assignable<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_destructible_v = is_destructible<_Tp>::value;
template <typename _Tp, typename... _Args>
  inline constexpr bool is_trivially_constructible_v =
    is_trivially_constructible<_Tp, _Args...>::value;
template <typename _Tp>
  inline constexpr bool is_trivially_default_constructible_v =
    is_trivially_default_constructible<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_trivially_copy_constructible_v =
    is_trivially_copy_constructible<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_trivially_move_constructible_v =
    is_trivially_move_constructible<_Tp>::value;
template <typename _Tp, typename _Up>
  inline constexpr bool is_trivially_assignable_v =
    is_trivially_assignable<_Tp, _Up>::value;
template <typename _Tp>
  inline constexpr bool is_trivially_copy_assignable_v =
    is_trivially_copy_assignable<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_trivially_move_assignable_v =
    is_trivially_move_assignable<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_trivially_destructible_v =
    is_trivially_destructible<_Tp>::value;
template <typename _Tp, typename... _Args>
  inline constexpr bool is_nothrow_constructible_v =
    is_nothrow_constructible<_Tp, _Args...>::value;
template <typename _Tp>
  inline constexpr bool is_nothrow_default_constructible_v =
    is_nothrow_default_constructible<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_nothrow_copy_constructible_v =
    is_nothrow_copy_constructible<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_nothrow_move_constructible_v =
    is_nothrow_move_constructible<_Tp>::value;
template <typename _Tp, typename _Up>
  inline constexpr bool is_nothrow_assignable_v =
    is_nothrow_assignable<_Tp, _Up>::value;
template <typename _Tp>
  inline constexpr bool is_nothrow_copy_assignable_v =
    is_nothrow_copy_assignable<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_nothrow_move_assignable_v =
    is_nothrow_move_assignable<_Tp>::value;
template <typename _Tp>
  inline constexpr bool is_nothrow_destructible_v =
    is_nothrow_destructible<_Tp>::value;
template <typename _Tp>
  inline constexpr bool has_virtual_destructor_v =
    has_virtual_destructor<_Tp>::value;
template <typename _Tp>
  inline constexpr size_t alignment_of_v = alignment_of<_Tp>::value;
template <typename _Tp>
  inline constexpr size_t rank_v = rank<_Tp>::value;
template <typename _Tp, unsigned _Idx = 0>
  inline constexpr size_t extent_v = extent<_Tp, _Idx>::value;
#ifdef _GLIBCXX_HAVE_BUILTIN_IS_SAME
template <typename _Tp, typename _Up>
  inline constexpr bool is_same_v = __is_same(_Tp, _Up);
#else
# 3180 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
template <typename _Tp, typename _Up>
  inline constexpr bool is_same_v = std::is_same<_Tp, _Up>::value;
#endif
# 3183 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
template <typename _Base, typename _Derived>
  inline constexpr bool is_base_of_v = is_base_of<_Base, _Derived>::value;
template <typename _From, typename _To>
  inline constexpr bool is_convertible_v = is_convertible<_From, _To>::value;

#ifdef _GLIBCXX_HAVE_BUILTIN_HAS_UNIQ_OBJ_REP
# define __cpp_lib_has_unique_object_representations 201606
  /// has_unique_object_representations
  template<typename _Tp>
    struct has_unique_object_representations
    : bool_constant<__has_unique_object_representations(
      remove_cv_t<remove_all_extents_t<_Tp>>
      )>
    {
      static_assert(std::__is_complete_or_unbounded(__type_identity<_Tp>{}),
	"template argument must be a complete class or an unbounded array");
    };

  template<typename _Tp>
    inline constexpr bool has_unique_object_representations_v
      = has_unique_object_representations<_Tp>::value;
#endif
# 3205 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

#ifdef _GLIBCXX_HAVE_BUILTIN_IS_AGGREGATE
# define __cpp_lib_is_aggregate 201703
  /// is_aggregate
  template<typename _Tp>
    struct is_aggregate
    : bool_constant<__is_aggregate(remove_cv_t<_Tp>)>
    { };

  /// is_aggregate_v
  template<typename _Tp>
    inline constexpr bool is_aggregate_v = is_aggregate<_Tp>::value;
#endif
# 3218 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#endif // C++17
# 3219 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 201703L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 3221 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#define __cpp_lib_remove_cvref 201711L

  /// Remove references and cv-qualifiers.
  template<typename _Tp>
    struct remove_cvref
    : remove_cv<_Tp>
    { };

  template<typename _Tp>
    struct remove_cvref<_Tp&>
    : remove_cv<_Tp>
    { };

  template<typename _Tp>
    struct remove_cvref<_Tp&&>
    : remove_cv<_Tp>
    { };

  template<typename _Tp>
    using remove_cvref_t = typename remove_cvref<_Tp>::type;

#define __cpp_lib_type_identity 201806L
  /// Identity metafunction.
  template<typename _Tp>
    struct type_identity { using type = _Tp; };

  template<typename _Tp>
    using type_identity_t = typename type_identity<_Tp>::type;

#define __cpp_lib_unwrap_ref 201811L

  /// Unwrap a reference_wrapper
  template<typename _Tp>
    struct unwrap_reference { using type = _Tp; };

  template<typename _Tp>
    struct unwrap_reference<reference_wrapper<_Tp>> { using type = _Tp&; };

  template<typename _Tp>
    using unwrap_reference_t = typename unwrap_reference<_Tp>::type;

  /// Decay type and if it's a reference_wrapper, unwrap it
  template<typename _Tp>
    struct unwrap_ref_decay { using type = unwrap_reference_t<decay_t<_Tp>>; };

  template<typename _Tp>
    using unwrap_ref_decay_t = typename unwrap_ref_decay<_Tp>::type;

#define __cpp_lib_bounded_array_traits 201902L

  /// True for a type that is an array of known bound.
  template<typename _Tp>
    struct is_bounded_array
    : public __is_array_known_bounds<_Tp>
    { };

  /// True for a type that is an array of unknown bound.
  template<typename _Tp>
    struct is_unbounded_array
    : public __is_array_unknown_bounds<_Tp>
    { };

  template<typename _Tp>
    inline constexpr bool is_bounded_array_v
      = is_bounded_array<_Tp>::value;

  template<typename _Tp>
    inline constexpr bool is_unbounded_array_v
      = is_unbounded_array<_Tp>::value;

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 202002L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 3292 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
#define __cpp_lib_is_scoped_enum 202011L

  template<typename _Tp>
    struct is_scoped_enum
    : false_type
    { };

  template<typename _Tp>
    requires __is_enum(_Tp)
    && requires(_Tp __t) { __t = __t; } // fails if incomplete
    struct is_scoped_enum<_Tp>
    : bool_constant<!requires(_Tp __t, void(*__f)(int)) { __f(__t); }>
    { };

  // FIXME remove this partial specialization and use remove_cv_t<_Tp> above
  // when PR c++/99968 is fixed.
  template<typename _Tp>
    requires __is_enum(_Tp)
    && requires(_Tp __t) { __t = __t; } // fails if incomplete
    struct is_scoped_enum<const _Tp>
    : bool_constant<!requires(_Tp __t, void(*__f)(int)) { __f(__t); }>
    { };

  template<typename _Tp>
    inline constexpr bool is_scoped_enum_v = is_scoped_enum<_Tp>::value;
#endif // C++23
# 3318 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

#ifdef _GLIBCXX_HAVE_BUILTIN_IS_CONSTANT_EVALUATED

#define __cpp_lib_is_constant_evaluated 201811L

  constexpr inline bool
  is_constant_evaluated() noexcept
  { return __builtin_is_constant_evaluated(); }
#endif
# 3327 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

  template<typename _From, typename _To>
    using __copy_cv = typename __match_cv_qualifiers<_From, _To>::__type;

  template<typename _Xp, typename _Yp>
    using __cond_res
      = decltype(false ? declval<_Xp(&)()>()() : declval<_Yp(&)()>()());

  template<typename _Ap, typename _Bp, typename = void>
    struct __common_ref_impl
    { };

  // [meta.trans.other], COMMON-REF(A, B)
  template<typename _Ap, typename _Bp>
    using __common_ref = typename __common_ref_impl<_Ap, _Bp>::type;

  // COND-RES(COPYCV(X, Y) &, COPYCV(Y, X) &)
  template<typename _Xp, typename _Yp>
    using __condres_cvref
      = __cond_res<__copy_cv<_Xp, _Yp>&, __copy_cv<_Yp, _Xp>&>;

  // If A and B are both lvalue reference types, ...
  template<typename _Xp, typename _Yp>
    struct __common_ref_impl<_Xp&, _Yp&, __void_t<__condres_cvref<_Xp, _Yp>>>
    : enable_if<is_reference_v<__condres_cvref<_Xp, _Yp>>,
		__condres_cvref<_Xp, _Yp>>
    { };

  // let C be remove_reference_t<COMMON-REF(X&, Y&)>&&
  template<typename _Xp, typename _Yp>
    using __common_ref_C = remove_reference_t<__common_ref<_Xp&, _Yp&>>&&;

  // If A and B are both rvalue reference types, ...
  template<typename _Xp, typename _Yp>
    struct __common_ref_impl<_Xp&&, _Yp&&,
      _Require<is_convertible<_Xp&&, __common_ref_C<_Xp, _Yp>>,
	       is_convertible<_Yp&&, __common_ref_C<_Xp, _Yp>>>>
    { using type = __common_ref_C<_Xp, _Yp>; };

  // let D be COMMON-REF(const X&, Y&)
  template<typename _Xp, typename _Yp>
    using __common_ref_D = __common_ref<const _Xp&, _Yp&>;

  // If A is an rvalue reference and B is an lvalue reference, ...
  template<typename _Xp, typename _Yp>
    struct __common_ref_impl<_Xp&&, _Yp&,
      _Require<is_convertible<_Xp&&, __common_ref_D<_Xp, _Yp>>>>
    { using type = __common_ref_D<_Xp, _Yp>; };

  // If A is an lvalue reference and B is an rvalue reference, ...
  template<typename _Xp, typename _Yp>
    struct __common_ref_impl<_Xp&, _Yp&&>
    : __common_ref_impl<_Yp&&, _Xp&>
    { };

  template<typename _Tp, typename _Up,
	   template<typename> class _TQual, template<typename> class _UQual>
    struct basic_common_reference
    { };

  template<typename _Tp>
    struct __xref
    { template<typename _Up> using __type = __copy_cv<_Tp, _Up>; };

  template<typename _Tp>
    struct __xref<_Tp&>
    { template<typename _Up> using __type = __copy_cv<_Tp, _Up>&; };

  template<typename _Tp>
    struct __xref<_Tp&&>
    { template<typename _Up> using __type = __copy_cv<_Tp, _Up>&&; };

  template<typename _Tp1, typename _Tp2>
    using __basic_common_ref
      = typename basic_common_reference<remove_cvref_t<_Tp1>,
					remove_cvref_t<_Tp2>,
					__xref<_Tp1>::template __type,
					__xref<_Tp2>::template __type>::type;

  template<typename... _Tp>
    struct common_reference;

  template<typename... _Tp>
    using common_reference_t = typename common_reference<_Tp...>::type;

  // If sizeof...(T) is zero, there shall be no member type.
  template<>
    struct common_reference<>
    { };

  // If sizeof...(T) is one ...
  template<typename _Tp0>
    struct common_reference<_Tp0>
    { using type = _Tp0; };

  template<typename _Tp1, typename _Tp2, int _Bullet = 1, typename = void>
    struct __common_reference_impl
    : __common_reference_impl<_Tp1, _Tp2, _Bullet + 1>
    { };

  // If sizeof...(T) is two ...
  template<typename _Tp1, typename _Tp2>
    struct common_reference<_Tp1, _Tp2>
    : __common_reference_impl<_Tp1, _Tp2>
    { };

  // If T1 and T2 are reference types and COMMON-REF(T1, T2) is well-formed, ...
  template<typename _Tp1, typename _Tp2>
    struct __common_reference_impl<_Tp1&, _Tp2&, 1,
				   void_t<__common_ref<_Tp1&, _Tp2&>>>
    { using type = __common_ref<_Tp1&, _Tp2&>; };

  template<typename _Tp1, typename _Tp2>
    struct __common_reference_impl<_Tp1&&, _Tp2&&, 1,
				   void_t<__common_ref<_Tp1&&, _Tp2&&>>>
    { using type = __common_ref<_Tp1&&, _Tp2&&>; };

  template<typename _Tp1, typename _Tp2>
    struct __common_reference_impl<_Tp1&, _Tp2&&, 1,
				   void_t<__common_ref<_Tp1&, _Tp2&&>>>
    { using type = __common_ref<_Tp1&, _Tp2&&>; };

  template<typename _Tp1, typename _Tp2>
    struct __common_reference_impl<_Tp1&&, _Tp2&, 1,
				   void_t<__common_ref<_Tp1&&, _Tp2&>>>
    { using type = __common_ref<_Tp1&&, _Tp2&>; };

  // Otherwise, if basic_common_reference<...>::type is well-formed, ...
  template<typename _Tp1, typename _Tp2>
    struct __common_reference_impl<_Tp1, _Tp2, 2,
				   void_t<__basic_common_ref<_Tp1, _Tp2>>>
    { using type = __basic_common_ref<_Tp1, _Tp2>; };

  // Otherwise, if COND-RES(T1, T2) is well-formed, ...
  template<typename _Tp1, typename _Tp2>
    struct __common_reference_impl<_Tp1, _Tp2, 3,
				   void_t<__cond_res<_Tp1, _Tp2>>>
    { using type = __cond_res<_Tp1, _Tp2>; };

  // Otherwise, if common_type_t<T1, T2> is well-formed, ...
  template<typename _Tp1, typename _Tp2>
    struct __common_reference_impl<_Tp1, _Tp2, 4,
				   void_t<common_type_t<_Tp1, _Tp2>>>
    { using type = common_type_t<_Tp1, _Tp2>; };

  // Otherwise, there shall be no member type.
  template<typename _Tp1, typename _Tp2>
    struct __common_reference_impl<_Tp1, _Tp2, 5, void>
    { };

  // Otherwise, if sizeof...(T) is greater than two, ...
  template<typename _Tp1, typename _Tp2, typename... _Rest>
    struct common_reference<_Tp1, _Tp2, _Rest...>
    : __common_type_fold<common_reference<_Tp1, _Tp2>,
			 __common_type_pack<_Rest...>>
    { };

  // Reuse __common_type_fold for common_reference<T1, T2, Rest...>
  template<typename _Tp1, typename _Tp2, typename... _Rest>
    struct __common_type_fold<common_reference<_Tp1, _Tp2>,
			      __common_type_pack<_Rest...>,
			      void_t<common_reference_t<_Tp1, _Tp2>>>
    : public common_reference<common_reference_t<_Tp1, _Tp2>, _Rest...>
    { };

#endif // C++2a
# 3493 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

_GLIBCXX_END_NAMESPACE_VERSION
} // namespace std

#endif  // C++11
# 3498 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3

#endif  // _GLIBCXX_TYPE_TRAITS
# 3500 "C:/Msys2/mingw64/include/c++/11.2.0/type_traits" 3
# 10 "multi-return.cpp" 2
#if 0 /* expanded by -frewrite-includes */
#include <utility>
#endif /* expanded by -frewrite-includes */
# 10 "multi-return.cpp"
# 1 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 1 3
// <utility> -*- C++ -*-

// Copyright (C) 2001-2021 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996,1997
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */

/** @file include/utility
 *  This is a Standard C++ Library header.
 */

#ifndef _GLIBCXX_UTILITY
#define _GLIBCXX_UTILITY 1

#if 0 /* expanded by -frewrite-includes */
#pragma GCC system_header
#endif /* expanded by -frewrite-includes */
# 59 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3

/**
 * @defgroup utilities Utilities
 *
 * Components deemed generally useful. Includes pair, tuple,
 * forward/move helpers, ratio, function object, metaprogramming and
 * type traits, time, date, and memory functions.
 */

#if 0 /* expanded by -frewrite-includes */
#include <bits/c++config.h>
#endif /* expanded by -frewrite-includes */
# 68 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
# 69 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
#if 0 /* expanded by -frewrite-includes */
#include <bits/stl_relops.h>
#endif /* expanded by -frewrite-includes */
# 69 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
# 1 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_relops.h" 1 3
// std::rel_ops implementation -*- C++ -*-

// Copyright (C) 2001-2021 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the, 2009 Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 * Copyright (c) 1996,1997
 * Silicon Graphics
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 */

/** @file bits/stl_relops.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{utility}
 *
 *  Inclusion of this file has been removed from
 *  all of the other STL headers for safety reasons, except std_utility.h.
 *  For more information, see the thread of about twenty messages starting
 *  with http://gcc.gnu.org/ml/libstdc++/2001-01/msg00223.html, or
 *  http://gcc.gnu.org/onlinedocs/libstdc++/faq.html#faq.ambiguous_overloads
 *
 *  Short summary: the rel_ops operators should be avoided for the present.
 */

#ifndef _STL_RELOPS_H
#define _STL_RELOPS_H 1

namespace std _GLIBCXX_VISIBILITY(default)
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION

  namespace rel_ops
  {
    /** @namespace std::rel_ops
     *  @brief  The generated relational operators are sequestered here.
     */

    /**
     *  @brief Defines @c != for arbitrary types, in terms of @c ==.
     *  @param  __x  A thing.
     *  @param  __y  Another thing.
     *  @return   __x != __y
     *
     *  This function uses @c == to determine its result.
     */
    template <class _Tp>
      inline bool
      operator!=(const _Tp& __x, const _Tp& __y)
      { return !(__x == __y); }

    /**
     *  @brief Defines @c > for arbitrary types, in terms of @c <.
     *  @param  __x  A thing.
     *  @param  __y  Another thing.
     *  @return   __x > __y
     *
     *  This function uses @c < to determine its result.
     */
    template <class _Tp>
      inline bool
      operator>(const _Tp& __x, const _Tp& __y)
      { return __y < __x; }

    /**
     *  @brief Defines @c <= for arbitrary types, in terms of @c <.
     *  @param  __x  A thing.
     *  @param  __y  Another thing.
     *  @return   __x <= __y
     *
     *  This function uses @c < to determine its result.
     */
    template <class _Tp>
      inline bool
      operator<=(const _Tp& __x, const _Tp& __y)
      { return !(__y < __x); }

    /**
     *  @brief Defines @c >= for arbitrary types, in terms of @c <.
     *  @param  __x  A thing.
     *  @param  __y  Another thing.
     *  @return   __x >= __y
     *
     *  This function uses @c < to determine its result.
     */
    template <class _Tp>
      inline bool
      operator>=(const _Tp& __x, const _Tp& __y)
      { return !(__x < __y); }
  } // namespace rel_ops

_GLIBCXX_END_NAMESPACE_VERSION
} // namespace std

#endif /* _STL_RELOPS_H */
# 134 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_relops.h" 3
# 70 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <bits/stl_pair.h>
#endif /* expanded by -frewrite-includes */
# 70 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
# 1 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 1 3
// Pair implementation -*- C++ -*-

// Copyright (C) 2001-2021 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/*
 *
 * Copyright (c) 1994
 * Hewlett-Packard Company
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Hewlett-Packard Company makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 *
 * Copyright (c) 1996,1997
 * Silicon Graphics Computer Systems, Inc.
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Silicon Graphics makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 */

/** @file bits/stl_pair.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{utility}
 */

#ifndef _STL_PAIR_H
#define _STL_PAIR_H 1

#if 0 /* expanded by -frewrite-includes */
#include <bits/move.h> // for std::move / std::forward, and std::swap
#endif /* expanded by -frewrite-includes */
# 59 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
# 1 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 1 3
// Move, forward and identity for C++11 + swap -*- C++ -*-

// Copyright (C) 2007-2021 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file bits/move.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{utility}
 */

#ifndef _MOVE_H
#define _MOVE_H 1

#if 0 /* expanded by -frewrite-includes */
#include <bits/c++config.h>
#endif /* expanded by -frewrite-includes */
# 33 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3
# 34 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus < 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 35 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3
#if 0 /* expanded by -frewrite-includes */
# include <bits/concept_check.h>
#endif /* expanded by -frewrite-includes */
# 35 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3
# 36 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3
#endif
# 37 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3

namespace std _GLIBCXX_VISIBILITY(default)
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION

  // Used, in C++03 mode too, by allocators, etc.
  /**
   *  @brief Same as C++11 std::addressof
   *  @ingroup utilities
   */
  template<typename _Tp>
    inline _GLIBCXX_CONSTEXPR _Tp*
    __addressof(_Tp& __r) _GLIBCXX_NOEXCEPT
    { return __builtin_addressof(__r); }

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 53 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3

_GLIBCXX_END_NAMESPACE_VERSION
} // namespace

#if 0 /* expanded by -frewrite-includes */
#include <type_traits> // Brings in std::declval too.
#endif /* expanded by -frewrite-includes */
# 57 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3
# 58 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3

namespace std _GLIBCXX_VISIBILITY(default)
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION

  /**
   *  @addtogroup utilities
   *  @{
   */

  /**
   *  @brief  Forward an lvalue.
   *  @return The parameter cast to the specified type.
   *
   *  This function is used to implement "perfect forwarding".
   */
  template<typename _Tp>
    _GLIBCXX_NODISCARD
    constexpr _Tp&&
    forward(typename std::remove_reference<_Tp>::type& __t) noexcept
    { return static_cast<_Tp&&>(__t); }

  /**
   *  @brief  Forward an rvalue.
   *  @return The parameter cast to the specified type.
   *
   *  This function is used to implement "perfect forwarding".
   */
  template<typename _Tp>
    _GLIBCXX_NODISCARD
    constexpr _Tp&&
    forward(typename std::remove_reference<_Tp>::type&& __t) noexcept
    {
      static_assert(!std::is_lvalue_reference<_Tp>::value, "template argument"
		    " substituting _Tp must not be an lvalue reference type");
      return static_cast<_Tp&&>(__t);
    }

  /**
   *  @brief  Convert a value to an rvalue.
   *  @param  __t  A thing of arbitrary type.
   *  @return The parameter cast to an rvalue-reference to allow moving it.
  */
  template<typename _Tp>
    _GLIBCXX_NODISCARD
    constexpr typename std::remove_reference<_Tp>::type&&
    move(_Tp&& __t) noexcept
    { return static_cast<typename std::remove_reference<_Tp>::type&&>(__t); }


  template<typename _Tp>
    struct __move_if_noexcept_cond
    : public __and_<__not_<is_nothrow_move_constructible<_Tp>>,
                    is_copy_constructible<_Tp>>::type { };

  /**
   *  @brief  Conditionally convert a value to an rvalue.
   *  @param  __x  A thing of arbitrary type.
   *  @return The parameter, possibly cast to an rvalue-reference.
   *
   *  Same as std::move unless the type's move constructor could throw and the
   *  type is copyable, in which case an lvalue-reference is returned instead.
   */
  template<typename _Tp>
    _GLIBCXX_NODISCARD
    constexpr typename
    conditional<__move_if_noexcept_cond<_Tp>::value, const _Tp&, _Tp&&>::type
    move_if_noexcept(_Tp& __x) noexcept
    { return std::move(__x); }

  // declval, from type_traits.

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 201402L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 131 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3
  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // 2296. std::addressof should be constexpr
# define __cpp_lib_addressof_constexpr 201603
#endif
# 135 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3
  /**
   *  @brief Returns the actual address of the object or function
   *         referenced by r, even in the presence of an overloaded
   *         operator&.
   *  @param  __r  Reference to an object or function.
   *  @return   The actual address.
  */
  template<typename _Tp>
    _GLIBCXX_NODISCARD
    inline _GLIBCXX17_CONSTEXPR _Tp*
    addressof(_Tp& __r) noexcept
    { return std::__addressof(__r); }

  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // 2598. addressof works on temporaries
  template<typename _Tp>
    const _Tp* addressof(const _Tp&&) = delete;

  // C++11 version of std::exchange for internal use.
  template <typename _Tp, typename _Up = _Tp>
    _GLIBCXX20_CONSTEXPR
    inline _Tp
    __exchange(_Tp& __obj, _Up&& __new_val)
    {
      _Tp __old_val = std::move(__obj);
      __obj = std::forward<_Up>(__new_val);
      return __old_val;
    }

  /// @} group utilities

#define _GLIBCXX_FWDREF(_Tp) _Tp&&
#define _GLIBCXX_MOVE(__val) std::move(__val)
#define _GLIBCXX_FORWARD(_Tp, __val) std::forward<_Tp>(__val)
#else
# 170 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3
#define _GLIBCXX_FWDREF(_Tp) const _Tp&
#define _GLIBCXX_MOVE(__val) (__val)
#define _GLIBCXX_FORWARD(_Tp, __val) (__val)
#endif
# 174 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3

  /**
   *  @addtogroup utilities
   *  @{
   */

  /**
   *  @brief Swaps two values.
   *  @param  __a  A thing of arbitrary type.
   *  @param  __b  Another thing of arbitrary type.
   *  @return   Nothing.
  */
  template<typename _Tp>
    _GLIBCXX20_CONSTEXPR
    inline
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 190 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3
    typename enable_if<__and_<__not_<__is_tuple_like<_Tp>>,
			      is_move_constructible<_Tp>,
			      is_move_assignable<_Tp>>::value>::type
#else
# 194 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3
    void
#endif
# 196 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3
    swap(_Tp& __a, _Tp& __b)
    _GLIBCXX_NOEXCEPT_IF(__and_<is_nothrow_move_constructible<_Tp>,
				is_nothrow_move_assignable<_Tp>>::value)
    {
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus < 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 201 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3
      // concept requirements
      __glibcxx_function_requires(_SGIAssignableConcept<_Tp>)
#endif
# 204 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3
      _Tp __tmp = _GLIBCXX_MOVE(__a);
      __a = _GLIBCXX_MOVE(__b);
      __b = _GLIBCXX_MOVE(__tmp);
    }

  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // DR 809. std::swap should be overloaded for array types.
  /// Swap the contents of two arrays.
  template<typename _Tp, size_t _Nm>
    _GLIBCXX20_CONSTEXPR
    inline
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 216 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3
    typename enable_if<__is_swappable<_Tp>::value>::type
#else
# 218 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3
    void
#endif
# 220 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
    _GLIBCXX_NOEXCEPT_IF(__is_nothrow_swappable<_Tp>::value)
    {
      for (size_t __n = 0; __n < _Nm; ++__n)
	swap(__a[__n], __b[__n]);
    }

  /// @} group utilities
_GLIBCXX_END_NAMESPACE_VERSION
} // namespace

#endif /* _MOVE_H */
# 232 "C:/Msys2/mingw64/include/c++/11.2.0/bits/move.h" 3
# 60 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 2 3

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 62 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
#if 0 /* expanded by -frewrite-includes */
# include <type_traits> // for std::__decay_and_strip, std::is_reference_v
#endif /* expanded by -frewrite-includes */
# 62 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
# 63 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
#endif
# 64 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 201703L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 65 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
#if 0 /* expanded by -frewrite-includes */
# include <compare>
#endif /* expanded by -frewrite-includes */
# 65 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
# 66 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
# define __cpp_lib_constexpr_utility 201811L
#endif
# 68 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3

namespace std _GLIBCXX_VISIBILITY(default)
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION

  /**
   *  @addtogroup utilities
   *  @{
   */

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 79 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
  /// Tag type for piecewise construction of std::pair objects.
  struct piecewise_construct_t { explicit piecewise_construct_t() = default; };

  /// Tag for piecewise construction of std::pair objects.
  _GLIBCXX17_INLINE constexpr piecewise_construct_t piecewise_construct =
    piecewise_construct_t();

  /// @cond undocumented

  // Forward declarations.
  template<typename...>
    class tuple;

  template<size_t...>
    struct _Index_tuple;

  // Concept utility functions, reused in conditionally-explicit
  // constructors.
  // See PR 70437, don't look at is_constructible or
  // is_convertible if the types are the same to
  // avoid querying those properties for incomplete types.
  template <bool, typename _T1, typename _T2>
    struct _PCC
    {
      template <typename _U1, typename _U2>
      static constexpr bool _ConstructiblePair()
      {
	return __and_<is_constructible<_T1, const _U1&>,
		      is_constructible<_T2, const _U2&>>::value;
      }

      template <typename _U1, typename _U2>
      static constexpr bool _ImplicitlyConvertiblePair()
      {
	return __and_<is_convertible<const _U1&, _T1>,
		      is_convertible<const _U2&, _T2>>::value;
      }

      template <typename _U1, typename _U2>
      static constexpr bool _MoveConstructiblePair()
      {
	return __and_<is_constructible<_T1, _U1&&>,
		      is_constructible<_T2, _U2&&>>::value;
      }

      template <typename _U1, typename _U2>
      static constexpr bool _ImplicitlyMoveConvertiblePair()
      {
	return __and_<is_convertible<_U1&&, _T1>,
		      is_convertible<_U2&&, _T2>>::value;
      }

      template <bool __implicit, typename _U1, typename _U2>
      static constexpr bool _CopyMovePair()
      {
	using __do_converts = __and_<is_convertible<const _U1&, _T1>,
				  is_convertible<_U2&&, _T2>>;
	using __converts = typename conditional<__implicit,
				       __do_converts,
				       __not_<__do_converts>>::type;
	return __and_<is_constructible<_T1, const _U1&>,
		      is_constructible<_T2, _U2&&>,
		      __converts
		      >::value;
      }

      template <bool __implicit, typename _U1, typename _U2>
      static constexpr bool _MoveCopyPair()
      {
	using __do_converts = __and_<is_convertible<_U1&&, _T1>,
				  is_convertible<const _U2&, _T2>>;
	using __converts = typename conditional<__implicit,
				       __do_converts,
				       __not_<__do_converts>>::type;
	return __and_<is_constructible<_T1, _U1&&>,
		      is_constructible<_T2, const _U2&&>,
		      __converts
		      >::value;
      }
  };

  template <typename _T1, typename _T2>
    struct _PCC<false, _T1, _T2>
    {
      template <typename _U1, typename _U2>
      static constexpr bool _ConstructiblePair()
      {
	return false;
      }

      template <typename _U1, typename _U2>
      static constexpr bool _ImplicitlyConvertiblePair()
      {
	return false;
      }

      template <typename _U1, typename _U2>
      static constexpr bool _MoveConstructiblePair()
      {
	return false;
      }

      template <typename _U1, typename _U2>
      static constexpr bool _ImplicitlyMoveConvertiblePair()
      {
	return false;
      }
  };
#endif // C++11
# 188 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3

  template<typename _U1, typename _U2> class __pair_base
  {
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 192 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
    template<typename _T1, typename _T2> friend struct pair;
    __pair_base() = default;
    ~__pair_base() = default;
    __pair_base(const __pair_base&) = default;
    __pair_base& operator=(const __pair_base&) = delete;
#endif // C++11
# 198 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
  };

  /// @endcond

 /**
   *  @brief Struct holding two objects of arbitrary type.
   *
   *  @tparam _T1  Type of first object.
   *  @tparam _T2  Type of second object.
   *
   *  <https://gcc.gnu.org/onlinedocs/libstdc++/manual/utilities.html>
   */
  template<typename _T1, typename _T2>
    struct pair
    : private __pair_base<_T1, _T2>
    {
      typedef _T1 first_type;    ///< The type of the `first` member
      typedef _T2 second_type;   ///< The type of the `second` member

      _T1 first;                 ///< The first member
      _T2 second;                ///< The second member

      // _GLIBCXX_RESOLVE_LIB_DEFECTS
      // 265.  std::pair::pair() effects overly restrictive
      /** The default constructor creates @c first and @c second using their
       *  respective default constructors.  */
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 225 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
      template <typename _U1 = _T1,
                typename _U2 = _T2,
                typename enable_if<__and_<
                                     __is_implicitly_default_constructible<_U1>,
                                     __is_implicitly_default_constructible<_U2>>
                                   ::value, bool>::type = true>
#endif
# 232 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
      _GLIBCXX_CONSTEXPR pair()
      : first(), second() { }

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 236 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
      template <typename _U1 = _T1,
                typename _U2 = _T2,
                typename enable_if<__and_<
                       is_default_constructible<_U1>,
                       is_default_constructible<_U2>,
                       __not_<
                         __and_<__is_implicitly_default_constructible<_U1>,
                                __is_implicitly_default_constructible<_U2>>>>
                                   ::value, bool>::type = false>
      explicit constexpr pair()
      : first(), second() { }
#endif
# 248 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus < 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 250 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
      /// Two objects may be passed to a @c pair constructor to be copied.
      pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }
#else
# 254 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
      // Shortcut for constraining the templates that don't take pairs.
      /// @cond undocumented
      using _PCCP = _PCC<true, _T1, _T2>;
      /// @endcond

      /// Construct from two const lvalues, allowing implicit conversions.
      template<typename _U1 = _T1, typename _U2=_T2, typename
	       enable_if<_PCCP::template
			   _ConstructiblePair<_U1, _U2>()
	                 && _PCCP::template
			   _ImplicitlyConvertiblePair<_U1, _U2>(),
                         bool>::type=true>
      constexpr pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }

      /// Construct from two const lvalues, disallowing implicit conversions.
       template<typename _U1 = _T1, typename _U2=_T2, typename
		enable_if<_PCCP::template
			    _ConstructiblePair<_U1, _U2>()
	                  && !_PCCP::template
			    _ImplicitlyConvertiblePair<_U1, _U2>(),
                         bool>::type=false>
      explicit constexpr pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }
#endif
# 279 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus < 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 281 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
      /// There is also a templated constructor to convert from other pairs.
      template<typename _U1, typename _U2>
	pair(const pair<_U1, _U2>& __p)
	: first(__p.first), second(__p.second) { }
#else
# 286 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
      // Shortcut for constraining the templates that take pairs.
      /// @cond undocumented
      template <typename _U1, typename _U2>
        using _PCCFP = _PCC<!is_same<_T1, _U1>::value
			    || !is_same<_T2, _U2>::value,
			    _T1, _T2>;
      /// @endcond

      template<typename _U1, typename _U2, typename
	       enable_if<_PCCFP<_U1, _U2>::template
			   _ConstructiblePair<_U1, _U2>()
	                 && _PCCFP<_U1, _U2>::template
			   _ImplicitlyConvertiblePair<_U1, _U2>(),
			  bool>::type=true>
        constexpr pair(const pair<_U1, _U2>& __p)
        : first(__p.first), second(__p.second) { }

      template<typename _U1, typename _U2, typename
	       enable_if<_PCCFP<_U1, _U2>::template
			   _ConstructiblePair<_U1, _U2>()
			 && !_PCCFP<_U1, _U2>::template
			   _ImplicitlyConvertiblePair<_U1, _U2>(),
                         bool>::type=false>
	explicit constexpr pair(const pair<_U1, _U2>& __p)
	: first(__p.first), second(__p.second) { }
#endif
# 312 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 314 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
      constexpr pair(const pair&) = default;	///< Copy constructor
      constexpr pair(pair&&) = default;		///< Move constructor

      // DR 811.
      template<typename _U1, typename
	       enable_if<_PCCP::template
			   _MoveCopyPair<true, _U1, _T2>(),
                         bool>::type=true>
       constexpr pair(_U1&& __x, const _T2& __y)
       : first(std::forward<_U1>(__x)), second(__y) { }

      template<typename _U1, typename
	       enable_if<_PCCP::template
			   _MoveCopyPair<false, _U1, _T2>(),
                         bool>::type=false>
       explicit constexpr pair(_U1&& __x, const _T2& __y)
       : first(std::forward<_U1>(__x)), second(__y) { }

      template<typename _U2, typename
	       enable_if<_PCCP::template
			   _CopyMovePair<true, _T1, _U2>(),
                         bool>::type=true>
       constexpr pair(const _T1& __x, _U2&& __y)
       : first(__x), second(std::forward<_U2>(__y)) { }

      template<typename _U2, typename
	       enable_if<_PCCP::template
			   _CopyMovePair<false, _T1, _U2>(),
                         bool>::type=false>
       explicit pair(const _T1& __x, _U2&& __y)
       : first(__x), second(std::forward<_U2>(__y)) { }

      template<typename _U1, typename _U2, typename
	       enable_if<_PCCP::template
			   _MoveConstructiblePair<_U1, _U2>()
			  && _PCCP::template
			   _ImplicitlyMoveConvertiblePair<_U1, _U2>(),
                         bool>::type=true>
	constexpr pair(_U1&& __x, _U2&& __y)
	: first(std::forward<_U1>(__x)), second(std::forward<_U2>(__y)) { }

      template<typename _U1, typename _U2, typename
	       enable_if<_PCCP::template
			   _MoveConstructiblePair<_U1, _U2>()
			  && !_PCCP::template
			   _ImplicitlyMoveConvertiblePair<_U1, _U2>(),
                         bool>::type=false>
	explicit constexpr pair(_U1&& __x, _U2&& __y)
	: first(std::forward<_U1>(__x)), second(std::forward<_U2>(__y)) { }


      template<typename _U1, typename _U2, typename
	       enable_if<_PCCFP<_U1, _U2>::template
			   _MoveConstructiblePair<_U1, _U2>()
			  && _PCCFP<_U1, _U2>::template
			   _ImplicitlyMoveConvertiblePair<_U1, _U2>(),
                         bool>::type=true>
	constexpr pair(pair<_U1, _U2>&& __p)
	: first(std::forward<_U1>(__p.first)),
	  second(std::forward<_U2>(__p.second)) { }

      template<typename _U1, typename _U2, typename
	       enable_if<_PCCFP<_U1, _U2>::template
			   _MoveConstructiblePair<_U1, _U2>()
			  && !_PCCFP<_U1, _U2>::template
			   _ImplicitlyMoveConvertiblePair<_U1, _U2>(),
                         bool>::type=false>
	explicit constexpr pair(pair<_U1, _U2>&& __p)
	: first(std::forward<_U1>(__p.first)),
	  second(std::forward<_U2>(__p.second)) { }

      template<typename... _Args1, typename... _Args2>
	_GLIBCXX20_CONSTEXPR
        pair(piecewise_construct_t, tuple<_Args1...>, tuple<_Args2...>);

      _GLIBCXX20_CONSTEXPR pair&
      operator=(typename conditional<
		__and_<is_copy_assignable<_T1>,
		       is_copy_assignable<_T2>>::value,
		const pair&, const __nonesuch&>::type __p)
      {
	first = __p.first;
	second = __p.second;
	return *this;
      }

      _GLIBCXX20_CONSTEXPR pair&
      operator=(typename conditional<
		__and_<is_move_assignable<_T1>,
		       is_move_assignable<_T2>>::value,
		pair&&, __nonesuch&&>::type __p)
      noexcept(__and_<is_nothrow_move_assignable<_T1>,
		      is_nothrow_move_assignable<_T2>>::value)
      {
	first = std::forward<first_type>(__p.first);
	second = std::forward<second_type>(__p.second);
	return *this;
      }

      template<typename _U1, typename _U2>
	_GLIBCXX20_CONSTEXPR
	typename enable_if<__and_<is_assignable<_T1&, const _U1&>,
				  is_assignable<_T2&, const _U2&>>::value,
			   pair&>::type
	operator=(const pair<_U1, _U2>& __p)
	{
	  first = __p.first;
	  second = __p.second;
	  return *this;
	}

      template<typename _U1, typename _U2>
	_GLIBCXX20_CONSTEXPR
	typename enable_if<__and_<is_assignable<_T1&, _U1&&>,
				  is_assignable<_T2&, _U2&&>>::value,
			   pair&>::type
	operator=(pair<_U1, _U2>&& __p)
	{
	  first = std::forward<_U1>(__p.first);
	  second = std::forward<_U2>(__p.second);
	  return *this;
	}

      /// Swap the first members and then the second members.
      _GLIBCXX20_CONSTEXPR void
      swap(pair& __p)
      noexcept(__and_<__is_nothrow_swappable<_T1>,
                      __is_nothrow_swappable<_T2>>::value)
      {
	using std::swap;
	swap(first, __p.first);
	swap(second, __p.second);
      }

    private:
      template<typename... _Args1, size_t... _Indexes1,
	       typename... _Args2, size_t... _Indexes2>
	_GLIBCXX20_CONSTEXPR
        pair(tuple<_Args1...>&, tuple<_Args2...>&,
	     _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);
#endif // C++11
# 455 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
    };

  /// @relates pair @{

#if 0 /* disabled by -frewrite-includes */
#if __cpp_deduction_guides >= 201606
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 460 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
  template<typename _T1, typename _T2> pair(_T1, _T2) -> pair<_T1, _T2>;
#endif
# 462 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3

  /// Two pairs of the same type are equal iff their members are equal.
  template<typename _T1, typename _T2>
    inline _GLIBCXX_CONSTEXPR bool
    operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first == __y.first && __x.second == __y.second; }

#if 0 /* disabled by -frewrite-includes */
#if __cpp_lib_three_way_comparison && __cpp_lib_concepts
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 470 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
  template<typename _T1, typename _T2>
    constexpr common_comparison_category_t<__detail::__synth3way_t<_T1>,
					   __detail::__synth3way_t<_T2>>
    operator<=>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    {
      if (auto __c = __detail::__synth3way(__x.first, __y.first); __c != 0)
	return __c;
      return __detail::__synth3way(__x.second, __y.second);
    }
#else
# 480 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
  /** Defines a lexicographical order for pairs.
   *
   * For two pairs of the same type, `P` is ordered before `Q` if
   * `P.first` is less than `Q.first`, or if `P.first` and `Q.first`
   * are equivalent (neither is less than the other) and `P.second` is less
   * than `Q.second`.
  */
  template<typename _T1, typename _T2>
    inline _GLIBCXX_CONSTEXPR bool
    operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first < __y.first
	     || (!(__y.first < __x.first) && __x.second < __y.second); }

  /// Uses @c operator== to find the result.
  template<typename _T1, typename _T2>
    inline _GLIBCXX_CONSTEXPR bool
    operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x == __y); }

  /// Uses @c operator< to find the result.
  template<typename _T1, typename _T2>
    inline _GLIBCXX_CONSTEXPR bool
    operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __y < __x; }

  /// Uses @c operator< to find the result.
  template<typename _T1, typename _T2>
    inline _GLIBCXX_CONSTEXPR bool
    operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__y < __x); }

  /// Uses @c operator< to find the result.
  template<typename _T1, typename _T2>
    inline _GLIBCXX_CONSTEXPR bool
    operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x < __y); }
#endif // !(three_way_comparison && concepts)
# 517 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 519 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
  /** Swap overload for pairs. Calls std::pair::swap().
   *
   * @note This std::swap overload is not declared in C++03 mode,
   * which has performance implications, e.g. see https://gcc.gnu.org/PR38466
  */
  template<typename _T1, typename _T2>
    _GLIBCXX20_CONSTEXPR inline
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 201402L || !defined(__STRICT_ANSI__) // c++1z or gnu++11
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 527 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
    // Constrained free swap overload, see p0185r1
    typename enable_if<__and_<__is_swappable<_T1>,
                              __is_swappable<_T2>>::value>::type
#else
# 531 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
    void
#endif
# 533 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
    swap(pair<_T1, _T2>& __x, pair<_T1, _T2>& __y)
    noexcept(noexcept(__x.swap(__y)))
    { __x.swap(__y); }

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 201402L || !defined(__STRICT_ANSI__) // c++1z or gnu++11
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 538 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
  template<typename _T1, typename _T2>
    typename enable_if<!__and_<__is_swappable<_T1>,
			       __is_swappable<_T2>>::value>::type
    swap(pair<_T1, _T2>&, pair<_T1, _T2>&) = delete;
#endif
# 543 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
#endif // __cplusplus >= 201103L
# 544 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3

  /// @} relates pair

  /**
   *  @brief A convenience wrapper for creating a pair from two objects.
   *  @param  __x  The first object.
   *  @param  __y  The second object.
   *  @return   A newly-constructed pair<> object of the appropriate type.
   *
   *  The C++98 standard says the objects are passed by reference-to-const,
   *  but C++03 says they are passed by value (this was LWG issue #181).
   *
   *  Since C++11 they have been passed by forwarding reference and then
   *  forwarded to the new members of the pair. To create a pair with a
   *  member of reference type, pass a `reference_wrapper` to this function.
   */
  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // 181.  make_pair() unintended behavior
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 563 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
  // NB: DR 706.
  template<typename _T1, typename _T2>
    constexpr pair<typename __decay_and_strip<_T1>::__type,
                   typename __decay_and_strip<_T2>::__type>
    make_pair(_T1&& __x, _T2&& __y)
    {
      typedef typename __decay_and_strip<_T1>::__type __ds_type1;
      typedef typename __decay_and_strip<_T2>::__type __ds_type2;
      typedef pair<__ds_type1, __ds_type2> 	      __pair_type;
      return __pair_type(std::forward<_T1>(__x), std::forward<_T2>(__y));
    }
#else
# 575 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
  template<typename _T1, typename _T2>
    inline pair<_T1, _T2>
    make_pair(_T1 __x, _T2 __y)
    { return pair<_T1, _T2>(__x, __y); }
#endif
# 580 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3

  /// @}

_GLIBCXX_END_NAMESPACE_VERSION
} // namespace std

#endif /* _STL_PAIR_H */
# 587 "C:/Msys2/mingw64/include/c++/11.2.0/bits/stl_pair.h" 3
# 71 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 2 3

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 73 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3

#if 0 /* expanded by -frewrite-includes */
#include <type_traits>
#endif /* expanded by -frewrite-includes */
# 74 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
# 75 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
#if 0 /* expanded by -frewrite-includes */
#include <bits/move.h>
#endif /* expanded by -frewrite-includes */
# 75 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
# 76 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
#if 0 /* expanded by -frewrite-includes */
#include <initializer_list>
#endif /* expanded by -frewrite-includes */
# 76 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
# 1 "C:/Msys2/mingw64/include/c++/11.2.0/initializer_list" 1 3
// std::initializer_list support -*- C++ -*-

// Copyright (C) 2008-2021 Free Software Foundation, Inc.
//
// This file is part of GCC.
//
// GCC is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// GCC is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file initializer_list
 *  This is a Standard C++ Library header.
 */

#ifndef _INITIALIZER_LIST
#define _INITIALIZER_LIST

#if 0 /* expanded by -frewrite-includes */
#pragma GCC system_header
#endif /* expanded by -frewrite-includes */
# 34 "C:/Msys2/mingw64/include/c++/11.2.0/initializer_list" 3

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus < 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 36 "C:/Msys2/mingw64/include/c++/11.2.0/initializer_list" 3
#if 0 /* expanded by -frewrite-includes */
# include <bits/c++0x_warning.h>
#endif /* expanded by -frewrite-includes */
# 36 "C:/Msys2/mingw64/include/c++/11.2.0/initializer_list" 3
# 37 "C:/Msys2/mingw64/include/c++/11.2.0/initializer_list" 3
#else // C++0x
# 38 "C:/Msys2/mingw64/include/c++/11.2.0/initializer_list" 3

#pragma GCC visibility push(default)

#if 0 /* expanded by -frewrite-includes */
#include <bits/c++config.h>
#endif /* expanded by -frewrite-includes */
# 41 "C:/Msys2/mingw64/include/c++/11.2.0/initializer_list" 3
# 42 "C:/Msys2/mingw64/include/c++/11.2.0/initializer_list" 3

namespace std
{
  /// initializer_list
  template<class _E>
    class initializer_list
    {
    public:
      typedef _E 		value_type;
      typedef const _E& 	reference;
      typedef const _E& 	const_reference;
      typedef size_t 		size_type;
      typedef const _E* 	iterator;
      typedef const _E* 	const_iterator;

    private:
      iterator			_M_array;
      size_type			_M_len;

      // The compiler can call a private constructor.
      constexpr initializer_list(const_iterator __a, size_type __l)
      : _M_array(__a), _M_len(__l) { }

    public:
      constexpr initializer_list() noexcept
      : _M_array(0), _M_len(0) { }

      // Number of elements.
      constexpr size_type
      size() const noexcept { return _M_len; }

      // First element.
      constexpr const_iterator
      begin() const noexcept { return _M_array; }

      // One past the last element.
      constexpr const_iterator
      end() const noexcept { return begin() + size(); }
    };

  /**
   *  @brief  Return an iterator pointing to the first element of
   *          the initializer_list.
   *  @param  __ils  Initializer list.
   *  @relates initializer_list
   */
  template<class _Tp>
    constexpr const _Tp*
    begin(initializer_list<_Tp> __ils) noexcept
    { return __ils.begin(); }

  /**
   *  @brief  Return an iterator pointing to one past the last element
   *          of the initializer_list.
   *  @param  __ils  Initializer list.
   *  @relates initializer_list
   */
  template<class _Tp>
    constexpr const _Tp*
    end(initializer_list<_Tp> __ils) noexcept
    { return __ils.end(); }
}

#pragma GCC visibility pop

#endif // C++11
# 108 "C:/Msys2/mingw64/include/c++/11.2.0/initializer_list" 3

#endif // _INITIALIZER_LIST
# 110 "C:/Msys2/mingw64/include/c++/11.2.0/initializer_list" 3
# 77 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 2 3

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 201703L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 79 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
#if 0 /* expanded by -frewrite-includes */
#include <ext/numeric_traits.h>
#endif /* expanded by -frewrite-includes */
# 79 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
# 80 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
#endif
# 81 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3

namespace std _GLIBCXX_VISIBILITY(default)
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION

  /// Finds the size of a given tuple type.
  template<typename _Tp>
    struct tuple_size;

  // _GLIBCXX_RESOLVE_LIB_DEFECTS
  // 2313. tuple_size should always derive from integral_constant<size_t, N>
  // 2770. tuple_size<const T> specialization is not SFINAE compatible

  template<typename _Tp,
	   typename _Up = typename remove_cv<_Tp>::type,
	   typename = typename enable_if<is_same<_Tp, _Up>::value>::type,
	   size_t = tuple_size<_Tp>::value>
    using __enable_if_has_tuple_size = _Tp;

  template<typename _Tp>
    struct tuple_size<const __enable_if_has_tuple_size<_Tp>>
    : public tuple_size<_Tp> { };

  template<typename _Tp>
    struct tuple_size<volatile __enable_if_has_tuple_size<_Tp>>
    : public tuple_size<_Tp> { };

  template<typename _Tp>
    struct tuple_size<const volatile __enable_if_has_tuple_size<_Tp>>
    : public tuple_size<_Tp> { };

  /// Gives the type of the ith element of a given tuple type.
  template<size_t __i, typename _Tp>
    struct tuple_element;

  // Duplicate of C++14's tuple_element_t for internal use in C++11 mode
  template<size_t __i, typename _Tp>
    using __tuple_element_t = typename tuple_element<__i, _Tp>::type;

  template<size_t __i, typename _Tp>
    struct tuple_element<__i, const _Tp>
    {
      typedef typename add_const<__tuple_element_t<__i, _Tp>>::type type;
    };

  template<size_t __i, typename _Tp>
    struct tuple_element<__i, volatile _Tp>
    {
      typedef typename add_volatile<__tuple_element_t<__i, _Tp>>::type type;
    };

  template<size_t __i, typename _Tp>
    struct tuple_element<__i, const volatile _Tp>
    {
      typedef typename add_cv<__tuple_element_t<__i, _Tp>>::type type;
    };

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201402L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 139 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
// The standard says this macro and alias template should be in <tuple>
// but we define them here, to be available when the partial specializations
// of tuple_element<pair<T,U>> and tuple_element<array<T,N>> are defined.
#define __cpp_lib_tuple_element_t 201402L

  template<size_t __i, typename _Tp>
    using tuple_element_t = typename tuple_element<__i, _Tp>::type;
#endif
# 147 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3

  // Various functions which give std::pair a tuple-like interface.

  /// Partial specialization for std::pair
  template<typename _T1, typename _T2>
    struct __is_tuple_like_impl<pair<_T1, _T2>> : true_type
    { };

  /// Partial specialization for std::pair
  template<class _Tp1, class _Tp2>
    struct tuple_size<pair<_Tp1, _Tp2>>
    : public integral_constant<size_t, 2> { };

  /// Partial specialization for std::pair
  template<class _Tp1, class _Tp2>
    struct tuple_element<0, pair<_Tp1, _Tp2>>
    { typedef _Tp1 type; };

  /// Partial specialization for std::pair
  template<class _Tp1, class _Tp2>
    struct tuple_element<1, pair<_Tp1, _Tp2>>
    { typedef _Tp2 type; };

  template<size_t _Int>
    struct __pair_get;

  template<>
    struct __pair_get<0>
    {
      template<typename _Tp1, typename _Tp2>
	static constexpr _Tp1&
	__get(pair<_Tp1, _Tp2>& __pair) noexcept
	{ return __pair.first; }

      template<typename _Tp1, typename _Tp2>
	static constexpr _Tp1&&
	__move_get(pair<_Tp1, _Tp2>&& __pair) noexcept
	{ return std::forward<_Tp1>(__pair.first); }

      template<typename _Tp1, typename _Tp2>
	static constexpr const _Tp1&
	__const_get(const pair<_Tp1, _Tp2>& __pair) noexcept
	{ return __pair.first; }

      template<typename _Tp1, typename _Tp2>
	static constexpr const _Tp1&&
	__const_move_get(const pair<_Tp1, _Tp2>&& __pair) noexcept
	{ return std::forward<const _Tp1>(__pair.first); }
    };

  template<>
    struct __pair_get<1>
    {
      template<typename _Tp1, typename _Tp2>
	static constexpr _Tp2&
	__get(pair<_Tp1, _Tp2>& __pair) noexcept
	{ return __pair.second; }

      template<typename _Tp1, typename _Tp2>
	static constexpr _Tp2&&
	__move_get(pair<_Tp1, _Tp2>&& __pair) noexcept
	{ return std::forward<_Tp2>(__pair.second); }

      template<typename _Tp1, typename _Tp2>
	static constexpr const _Tp2&
	__const_get(const pair<_Tp1, _Tp2>& __pair) noexcept
	{ return __pair.second; }

      template<typename _Tp1, typename _Tp2>
	static constexpr const _Tp2&&
	__const_move_get(const pair<_Tp1, _Tp2>&& __pair) noexcept
	{ return std::forward<const _Tp2>(__pair.second); }
    };

  template<size_t _Int, class _Tp1, class _Tp2>
    constexpr typename tuple_element<_Int, pair<_Tp1, _Tp2>>::type&
    get(pair<_Tp1, _Tp2>& __in) noexcept
    { return __pair_get<_Int>::__get(__in); }

  template<size_t _Int, class _Tp1, class _Tp2>
    constexpr typename tuple_element<_Int, pair<_Tp1, _Tp2>>::type&&
    get(pair<_Tp1, _Tp2>&& __in) noexcept
    { return __pair_get<_Int>::__move_get(std::move(__in)); }

  template<size_t _Int, class _Tp1, class _Tp2>
    constexpr const typename tuple_element<_Int, pair<_Tp1, _Tp2>>::type&
    get(const pair<_Tp1, _Tp2>& __in) noexcept
    { return __pair_get<_Int>::__const_get(__in); }

  template<size_t _Int, class _Tp1, class _Tp2>
    constexpr const typename tuple_element<_Int, pair<_Tp1, _Tp2>>::type&&
    get(const pair<_Tp1, _Tp2>&& __in) noexcept
    { return __pair_get<_Int>::__const_move_get(std::move(__in)); }

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201402L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 242 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3

#define __cpp_lib_tuples_by_type 201304

  template <typename _Tp, typename _Up>
    constexpr _Tp&
    get(pair<_Tp, _Up>& __p) noexcept
    { return __p.first; }

  template <typename _Tp, typename _Up>
    constexpr const _Tp&
    get(const pair<_Tp, _Up>& __p) noexcept
    { return __p.first; }

  template <typename _Tp, typename _Up>
    constexpr _Tp&&
    get(pair<_Tp, _Up>&& __p) noexcept
    { return std::move(__p.first); }

  template <typename _Tp, typename _Up>
    constexpr const _Tp&&
    get(const pair<_Tp, _Up>&& __p) noexcept
    { return std::move(__p.first); }

  template <typename _Tp, typename _Up>
    constexpr _Tp&
    get(pair<_Up, _Tp>& __p) noexcept
    { return __p.second; }

  template <typename _Tp, typename _Up>
    constexpr const _Tp&
    get(const pair<_Up, _Tp>& __p) noexcept
    { return __p.second; }

  template <typename _Tp, typename _Up>
    constexpr _Tp&&
    get(pair<_Up, _Tp>&& __p) noexcept
    { return std::move(__p.second); }

  template <typename _Tp, typename _Up>
    constexpr const _Tp&&
    get(const pair<_Up, _Tp>&& __p) noexcept
    { return std::move(__p.second); }

#define __cpp_lib_exchange_function 201304

  /// Assign @p __new_val to @p __obj and return its previous value.
  template <typename _Tp, typename _Up = _Tp>
    _GLIBCXX20_CONSTEXPR
    inline _Tp
    exchange(_Tp& __obj, _Up&& __new_val)
    { return std::__exchange(__obj, std::forward<_Up>(__new_val)); }

#endif // C++14
# 295 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3

  // Stores a tuple of indices.  Used by tuple and pair, and by bind() to
  // extract the elements in a tuple.
  template<size_t... _Indexes> struct _Index_tuple { };

  // Builds an _Index_tuple<0, 1, 2, ..., _Num-1>.
  template<size_t _Num>
    struct _Build_index_tuple
    {
#if 0 /* disabled by -frewrite-includes */
#if __has_builtin(__make_integer_seq)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 305 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
      template<typename, size_t... _Indices>
        using _IdxTuple = _Index_tuple<_Indices...>;

      // Clang defines __make_integer_seq for this purpose.
      using __type = __make_integer_seq<_IdxTuple, size_t, _Num>;
#else
# 311 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
      // For GCC and other compilers, use __integer_pack instead.
      using __type = _Index_tuple<__integer_pack(_Num)...>;
#endif
# 314 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
    };

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201402L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 317 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3

#define __cpp_lib_integer_sequence 201304

  /// Class template integer_sequence
  template<typename _Tp, _Tp... _Idx>
    struct integer_sequence
    {
      typedef _Tp value_type;
      static constexpr size_t size() noexcept { return sizeof...(_Idx); }
    };

  /// Alias template make_integer_sequence
  template<typename _Tp, _Tp _Num>
    using make_integer_sequence
#if 0 /* disabled by -frewrite-includes */
#if __has_builtin(__make_integer_seq)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 332 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
      = __make_integer_seq<integer_sequence, _Tp, _Num>;
#else
# 334 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
      = integer_sequence<_Tp, __integer_pack(_Num)...>;
#endif
# 336 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3

  /// Alias template index_sequence
  template<size_t... _Idx>
    using index_sequence = integer_sequence<size_t, _Idx...>;

  /// Alias template make_index_sequence
  template<size_t _Num>
    using make_index_sequence = make_integer_sequence<size_t, _Num>;

  /// Alias template index_sequence_for
  template<typename... _Types>
    using index_sequence_for = make_index_sequence<sizeof...(_Types)>;
#endif
# 349 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 201402L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 351 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3

  struct in_place_t {
    explicit in_place_t() = default;
  };

  inline constexpr in_place_t in_place{};

  template<typename _Tp> struct in_place_type_t
  {
    explicit in_place_type_t() = default;
  };

  template<typename _Tp>
    inline constexpr in_place_type_t<_Tp> in_place_type{};

  template<size_t _Idx> struct in_place_index_t
  {
    explicit in_place_index_t() = default;
  };

  template<size_t _Idx>
    inline constexpr in_place_index_t<_Idx> in_place_index{};

  template<typename>
    struct __is_in_place_type_impl : false_type
    { };

  template<typename _Tp>
    struct __is_in_place_type_impl<in_place_type_t<_Tp>> : true_type
    { };

  template<typename _Tp>
    struct __is_in_place_type
      : public __is_in_place_type_impl<_Tp>
    { };

#define  __cpp_lib_as_const 201510
  template<typename _Tp>
    [[nodiscard]]
    constexpr add_const_t<_Tp>&
    as_const(_Tp& __t) noexcept
    { return __t; }

  template<typename _Tp>
    void as_const(const _Tp&&) = delete;

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 201703L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 398 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
#define __cpp_lib_integer_comparison_functions 202002L

  template<typename _Tp, typename _Up>
    constexpr bool
    cmp_equal(_Tp __t, _Up __u) noexcept
    {
      static_assert(__is_standard_integer<_Tp>::value);
      static_assert(__is_standard_integer<_Up>::value);

      if constexpr (is_signed_v<_Tp> == is_signed_v<_Up>)
	return __t == __u;
      else if constexpr (is_signed_v<_Tp>)
	return __t >= 0 && make_unsigned_t<_Tp>(__t) == __u;
      else
	return __u >= 0 && __t == make_unsigned_t<_Up>(__u);
    }

  template<typename _Tp, typename _Up>
    constexpr bool
    cmp_not_equal(_Tp __t, _Up __u) noexcept
    { return !std::cmp_equal(__t, __u); }

  template<typename _Tp, typename _Up>
    constexpr bool
    cmp_less(_Tp __t, _Up __u) noexcept
    {
      static_assert(__is_standard_integer<_Tp>::value);
      static_assert(__is_standard_integer<_Up>::value);

      if constexpr (is_signed_v<_Tp> == is_signed_v<_Up>)
	return __t < __u;
      else if constexpr (is_signed_v<_Tp>)
	return __t < 0 || make_unsigned_t<_Tp>(__t) < __u;
      else
	return __u >= 0 && __t < make_unsigned_t<_Up>(__u);
    }

  template<typename _Tp, typename _Up>
    constexpr bool
    cmp_greater(_Tp __t, _Up __u) noexcept
    { return std::cmp_less(__u, __t); }

  template<typename _Tp, typename _Up>
    constexpr bool
    cmp_less_equal(_Tp __t, _Up __u) noexcept
    { return !std::cmp_less(__u, __t); }

  template<typename _Tp, typename _Up>
    constexpr bool
    cmp_greater_equal(_Tp __t, _Up __u) noexcept
    { return !std::cmp_less(__t, __u); }

  template<typename _Up, typename _Tp>
    constexpr bool
    in_range(_Tp __t) noexcept
    {
      static_assert(__is_standard_integer<_Up>::value);
      static_assert(__is_standard_integer<_Tp>::value);
      using __gnu_cxx::__int_traits;

      if constexpr (is_signed_v<_Tp> == is_signed_v<_Up>)
	return __int_traits<_Up>::__min <= __t
	  && __t <= __int_traits<_Up>::__max;
      else if constexpr (is_signed_v<_Tp>)
	return __t >= 0
	  && make_unsigned_t<_Tp>(__t) <= __int_traits<_Up>::__max;
      else
	return __t <= make_unsigned_t<_Up>(__int_traits<_Up>::__max);
    }

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 202002L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 469 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
#define __cpp_lib_to_underlying 202102L
  /// Convert an object of enumeration type to its underlying type.
  template<typename _Tp>
    [[nodiscard]]
    constexpr underlying_type_t<_Tp>
    to_underlying(_Tp __value) noexcept
    { return static_cast<underlying_type_t<_Tp>>(__value); }
#endif // C++23
# 477 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
#endif // C++20
# 478 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
#endif // C++17
# 479 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3

_GLIBCXX_END_NAMESPACE_VERSION
} // namespace

#endif
# 484 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3

#endif /* _GLIBCXX_UTILITY */
# 486 "C:/Msys2/mingw64/include/c++/11.2.0/utility" 3
# 11 "multi-return.cpp" 2
#if 0 /* disabled by -frewrite-includes */
#if (defined(_MSVC_LANG) ? _MSVC_LANG : __cplusplus) >= 202002L || (defined(__circle_lang__) || defined(__clang__) || defined(__CUDACC_VER_BUILD__) || defined(__CUDACC_VER_MAJOR__) || defined(__CUDACC_VER_MINOR__) || defined(__GNUC__) || defined(__ICC) || defined(__INTEL_COMPILER) || defined(__INTEL_LLVM_COMPILER) || defined(__NVCC__) || defined(__NVCOMPILER))
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 12 "multi-return.cpp"
#if 0 /* expanded by -frewrite-includes */
# include <version>
#endif /* expanded by -frewrite-includes */
# 12 "multi-return.cpp"
# 1 "C:/Msys2/mingw64/include/c++/11.2.0/version" 1 3
// -*- C++ -*- Libstdc++ version details header.

// Copyright (C) 2018-2021 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file version
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 */

#ifndef _GLIBCXX_VERSION_INCLUDED
#define _GLIBCXX_VERSION_INCLUDED

#if 0 /* expanded by -frewrite-includes */
#pragma GCC system_header
#endif /* expanded by -frewrite-includes */
# 34 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3

#if 0 /* expanded by -frewrite-includes */
#include <bits/c++config.h>
#endif /* expanded by -frewrite-includes */
# 35 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# 36 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3

// c++03
#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_HOSTED
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 39 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# define __cpp_lib_incomplete_container_elements 201505
#endif
# 41 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined(__STRICT_ANSI__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 43 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
// gnu++03
# define __cpp_lib_uncaught_exceptions 201411L
#endif
# 46 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 48 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
// c++11
#define __cpp_lib_is_null_pointer 201309
#define __cpp_lib_result_of_sfinae 201210

#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_HOSTED
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 53 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# define __cpp_lib_allocator_traits_is_always_equal 201411
# define __cpp_lib_shared_ptr_arrays 201611L
#endif
# 56 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined(__STRICT_ANSI__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 58 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
// gnu++11
# define __cpp_lib_is_swappable 201603
# define __cpp_lib_void_t 201411
#if 0 /* disabled by -frewrite-includes */
# if _GLIBCXX_HOSTED
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 62 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#  define __cpp_lib_enable_shared_from_this 201603
# endif
# 64 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#endif
# 65 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3

// For C++11 and later we support ISO/IEC 29124 Mathematical Special Functions
#define __STDCPP_MATH_SPEC_FUNCS__ 201003L

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201402L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 70 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
// c++14
#if 0 /* disabled by -frewrite-includes */
#if __cpp_impl_coroutine
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 72 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# define __cpp_lib_coroutine 201902L
#endif
# 74 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#define __cpp_lib_integral_constant_callable 201304
#define __cpp_lib_is_final 201402L
#define __cpp_lib_transformation_trait_aliases 201304

#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_HOSTED
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 79 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# define __cpp_lib_chrono_udls 201304
# define __cpp_lib_complex_udls 201309
# define __cpp_lib_exchange_function 201304
# define __cpp_lib_generic_associative_lookup 201304
# define __cpp_lib_integer_sequence 201304
# define __cpp_lib_make_reverse_iterator 201402
# define __cpp_lib_make_unique 201304
# ifndef _GLIBCXX_DEBUG // PR libstdc++/70303
#  define __cpp_lib_null_iterators 201304L
# endif
# 89 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# define __cpp_lib_quoted_string_io 201304
# define __cpp_lib_robust_nonmodifying_seq_ops 201304
# ifdef _GLIBCXX_HAS_GTHREADS
#  define __cpp_lib_shared_timed_mutex 201402L
# endif
# 94 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# define __cpp_lib_string_udls 201304
# define __cpp_lib_transparent_operators 201510
# define __cpp_lib_tuple_element_t 201402L
# define __cpp_lib_tuples_by_type 201304
#endif
# 99 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201703L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 101 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
// c++17
#define __cpp_lib_addressof_constexpr 201603
#define __cpp_lib_atomic_is_always_lock_free 201603
#define __cpp_lib_bool_constant 201505
#define __cpp_lib_byte 201603
#ifdef _GLIBCXX_HAVE_BUILTIN_HAS_UNIQ_OBJ_REP
# define __cpp_lib_has_unique_object_representations 201606
#endif
# 109 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#ifdef _GLIBCXX_HAVE_BUILTIN_IS_AGGREGATE
# define __cpp_lib_is_aggregate 201703
#endif
# 112 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#define __cpp_lib_is_invocable 201703
#define __cpp_lib_is_swappable 201603
#ifdef _GLIBCXX_HAVE_BUILTIN_LAUNDER
# define __cpp_lib_launder 201606
#endif
# 117 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#define __cpp_lib_logical_traits 201510
#define __cpp_lib_type_trait_variable_templates 201510L
#define __cpp_lib_uncaught_exceptions 201411L
#define __cpp_lib_void_t 201411

#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_HOSTED
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 123 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#define __cpp_lib_any 201606L
#define __cpp_lib_apply 201603
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus == 201703L // N.B. updated value in C++20
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 126 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# define __cpp_lib_array_constexpr 201803L
#endif
# 128 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#define __cpp_lib_as_const 201510
#define __cpp_lib_boyer_moore_searcher 201603
#define __cpp_lib_chrono 201611
#define __cpp_lib_clamp 201603
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus == 201703L // N.B. updated value in C++20
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 133 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# define __cpp_lib_constexpr_char_traits 201611L
# define __cpp_lib_constexpr_string 201611L
#endif
# 136 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#define __cpp_lib_enable_shared_from_this 201603
#define __cpp_lib_execution 201902L // FIXME: should be 201603L
#define __cpp_lib_filesystem 201703
#define __cpp_lib_gcd 201606
#define __cpp_lib_gcd_lcm 201606
#define __cpp_lib_hypot 201603
#define __cpp_lib_invoke 201411L
#define __cpp_lib_lcm 201606
#define __cpp_lib_make_from_tuple 201606
#define __cpp_lib_map_try_emplace 201411
#define __cpp_lib_math_special_functions 201603L
#ifdef _GLIBCXX_HAS_GTHREADS
# define __cpp_lib_memory_resource 201603L
#else
# 150 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# define __cpp_lib_memory_resource 1
#endif
# 152 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#define __cpp_lib_node_extract 201606
#define __cpp_lib_nonmember_container_access 201411
#define __cpp_lib_not_fn 201603
#define __cpp_lib_optional 201606L
#define __cpp_lib_parallel_algorithm 201603L
#define __cpp_lib_raw_memory_algorithms 201606L
#define __cpp_lib_sample 201603
#ifdef _GLIBCXX_HAS_GTHREADS
# define __cpp_lib_scoped_lock 201703
# define __cpp_lib_shared_mutex 201505L
#endif
# 163 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#define __cpp_lib_shared_ptr_weak_type 201606
#define __cpp_lib_string_view 201803L
#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_HAVE_USELOCALE
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 166 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# define __cpp_lib_to_chars 201611L
#endif
# 168 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#define __cpp_lib_unordered_map_try_emplace 201411
#define __cpp_lib_variant 201606L
#endif
# 171 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 202002L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 173 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
// c++20
#define __cpp_lib_atomic_flag_test 201907L
#define __cpp_lib_atomic_float 201711L
#define __cpp_lib_atomic_ref 201806L
#define __cpp_lib_atomic_value_initialization 201911L
#define __cpp_lib_bitops 201907L
#define __cpp_lib_bounded_array_traits 201902L
// __cpp_lib_char8_t is defined in <bits/c++config.h>
#if 0 /* disabled by -frewrite-includes */
#if __cpp_concepts >= 201907L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 182 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# define __cpp_lib_concepts 202002L
#endif
# 184 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#if 0 /* disabled by -frewrite-includes */
#if __cpp_impl_destroying_delete
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 185 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# define __cpp_lib_destroying_delete 201806L
#endif
# 187 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#define __cpp_lib_endian 201907L
#define __cpp_lib_int_pow2 202002L
#ifdef _GLIBCXX_HAVE_BUILTIN_IS_CONSTANT_EVALUATED
# define __cpp_lib_is_constant_evaluated 201811L
#endif
# 192 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#define __cpp_lib_is_nothrow_convertible 201806L
#define __cpp_lib_remove_cvref 201711L
#if 0 /* disabled by -frewrite-includes */
#if __cpp_impl_three_way_comparison >= 201907L && __cpp_lib_concepts
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 195 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# define __cpp_lib_three_way_comparison 201907L
#endif
# 197 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#define __cpp_lib_type_identity 201806L
#define __cpp_lib_unwrap_ref 201811L

#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_HOSTED
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 201 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#define __cpp_lib_array_constexpr 201811L
#define __cpp_lib_assume_aligned 201811L
#if 0 /* disabled by -frewrite-includes */
#if defined _GLIBCXX_HAS_GTHREADS || defined _GLIBCXX_HAVE_LINUX_FUTEX
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 204 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# define __cpp_lib_atomic_wait 201907L
#if 0 /* disabled by -frewrite-includes */
# if __cpp_aligned_new
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 206 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#  define __cpp_lib_barrier 201907L
# endif
# 208 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#endif
# 209 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#define __cpp_lib_bind_front 201907L
#if 0 /* disabled by -frewrite-includes */
#if __has_builtin(__builtin_bit_cast)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 211 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# define __cpp_lib_bit_cast 201806L
#endif
# 213 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
// FIXME: #define __cpp_lib_execution 201902L
#define __cpp_lib_integer_comparison_functions 202002L
#define __cpp_lib_constexpr_algorithms 201806L
#ifdef __cpp_lib_is_constant_evaluated
# define __cpp_lib_constexpr_char_traits 201811L
#endif
# 219 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#define __cpp_lib_constexpr_complex 201711L
#define __cpp_lib_constexpr_dynamic_alloc 201907L
#define __cpp_lib_constexpr_functional 201907L
#define __cpp_lib_constexpr_iterator 201811L
#define __cpp_lib_constexpr_memory 201811L
#define __cpp_lib_constexpr_numeric 201911L
#ifdef __cpp_lib_is_constant_evaluated
# define __cpp_lib_constexpr_string 201811L
#endif
# 228 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#define __cpp_lib_constexpr_string_view 201811L
#define __cpp_lib_constexpr_tuple 201811L
#define __cpp_lib_constexpr_utility 201811L
#define __cpp_lib_erase_if 202002L
#define __cpp_lib_generic_unordered_lookup 201811L
#define __cpp_lib_interpolate 201902L
#ifdef _GLIBCXX_HAS_GTHREADS
# define __cpp_lib_jthread 201911L
#endif
# 237 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#if 0 /* disabled by -frewrite-includes */
#if __cpp_lib_atomic_wait
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 238 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# define __cpp_lib_latch 201907L
#endif
# 240 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#define __cpp_lib_list_remove_return_type 201806L
#if 0 /* disabled by -frewrite-includes */
#if __cpp_lib_concepts
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 242 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# define __cpp_lib_make_obj_using_allocator 201811L
#endif
# 244 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#define __cpp_lib_math_constants 201907L
#define __cpp_lib_polymorphic_allocator 201902L
#if 0 /* disabled by -frewrite-includes */
#if __cpp_lib_concepts
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 247 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# define __cpp_lib_ranges 201911L
#endif
# 249 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#if 0 /* disabled by -frewrite-includes */
#if __cpp_lib_atomic_wait || _GLIBCXX_HAVE_POSIX_SEMAPHORE
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 250 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# define __cpp_lib_semaphore 201907L
#endif
# 252 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#define __cpp_lib_shift 201806L
#if 0 /* disabled by -frewrite-includes */
#if __has_builtin(__builtin_source_location)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 254 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# define __cpp_lib_source_location 201907L
#endif
# 256 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#if 0 /* disabled by -frewrite-includes */
#if __cpp_lib_concepts
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 257 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# define __cpp_lib_span 202002L
#endif
# 259 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#define __cpp_lib_ssize 201902L
#define __cpp_lib_starts_ends_with 201711L
#if 0 /* disabled by -frewrite-includes */
# if _GLIBCXX_USE_CXX11_ABI
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 262 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
// Only supported with cxx11-abi
#  define __cpp_lib_syncbuf 201803L
# endif
# 265 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#define __cpp_lib_to_address 201711L
#define __cpp_lib_to_array 201907L
#endif
# 268 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3

#if 0 /* disabled by -frewrite-includes */
#if __cplusplus > 202002L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 270 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
// c++2b
#define __cpp_lib_is_scoped_enum 202011L
#define __cpp_lib_string_contains 202011L
#define __cpp_lib_to_underlying 202102L
#endif // C++2b
# 275 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#endif // C++20
# 276 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#endif // C++17
# 277 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#endif // C++14
# 278 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
#endif // C++11
# 279 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3

#endif // _GLIBCXX_VERSION_INCLUDED
# 281 "C:/Msys2/mingw64/include/c++/11.2.0/version" 3
# 13 "multi-return.cpp" 2
#endif
# 14 "multi-return.cpp"

/* ... ->> Metafunction for evaluating operation validity without implicit rvalue-reference-qualification unlike `std::declval<...>()` */
template <typename type>
constexpr static type instanceof() noexcept;
// ...
struct $return final {
  struct nil;

  private:
    // ... ->> Metafunctions denoting C++ operators --- WARN (Lapys) -> Dependency on `decltype(...)` keyword prevents ISO C++98 support
    struct values_operation final {
      struct add                final { template <typename typeA, typename typeB> constexpr static decltype(instanceof<typeA>()   + instanceof<typeB>()) value(typeA&& valueA, typeB&& valueB) noexcept(noexcept(instanceof<typeA>()   + instanceof<typeB>())) { return (static_cast<typeA>(std::forward<typeA>(valueA))   + static_cast<typeB>(std::forward<typeB>(valueB))); } };
      struct assign             final { template <typename typeA, typename typeB> constexpr static decltype(instanceof<typeA>()   = instanceof<typeB>()) value(typeA&& valueA, typeB&& valueB) noexcept(noexcept(instanceof<typeA>()   = instanceof<typeB>())) { return (static_cast<typeA>(std::forward<typeA>(valueA))   = static_cast<typeB>(std::forward<typeB>(valueB))); } };
      struct assign_add         final { template <typename typeA, typename typeB> constexpr static decltype(instanceof<typeA>()  += instanceof<typeB>()) value(typeA&& valueA, typeB&& valueB) noexcept(noexcept(instanceof<typeA>()  += instanceof<typeB>())) { return (static_cast<typeA>(std::forward<typeA>(valueA))  += static_cast<typeB>(std::forward<typeB>(valueB))); } };
      struct assign_bitwise_and final { template <typename typeA, typename typeB> constexpr static decltype(instanceof<typeA>()  &= instanceof<typeB>()) value(typeA&& valueA, typeB&& valueB) noexcept(noexcept(instanceof<typeA>()  &= instanceof<typeB>())) { return (static_cast<typeA>(std::forward<typeA>(valueA))  &= static_cast<typeB>(std::forward<typeB>(valueB))); } };
      struct assign_bitwise_or  final { template <typename typeA, typename typeB> constexpr static decltype(instanceof<typeA>()  |= instanceof<typeB>()) value(typeA&& valueA, typeB&& valueB) noexcept(noexcept(instanceof<typeA>()  |= instanceof<typeB>())) { return (static_cast<typeA>(std::forward<typeA>(valueA))  |= static_cast<typeB>(std::forward<typeB>(valueB))); } };
      struct assign_bitwise_xor final { template <typename typeA, typename typeB> constexpr static decltype(instanceof<typeA>()  ^= instanceof<typeB>()) value(typeA&& valueA, typeB&& valueB) noexcept(noexcept(instanceof<typeA>()  ^= instanceof<typeB>())) { return (static_cast<typeA>(std::forward<typeA>(valueA))  ^= static_cast<typeB>(std::forward<typeB>(valueB))); } };
      struct assign_divide      final { template <typename typeA, typename typeB> constexpr static decltype(instanceof<typeA>()  /= instanceof<typeB>()) value(typeA&& valueA, typeB&& valueB) noexcept(noexcept(instanceof<typeA>()  /= instanceof<typeB>())) { return (static_cast<typeA>(std::forward<typeA>(valueA))  /= static_cast<typeB>(std::forward<typeB>(valueB))); } };
      struct assign_left_shift  final { template <typename typeA, typename typeB> constexpr static decltype(instanceof<typeA>() <<= instanceof<typeB>()) value(typeA&& valueA, typeB&& valueB) noexcept(noexcept(instanceof<typeA>() <<= instanceof<typeB>())) { return (static_cast<typeA>(std::forward<typeA>(valueA)) <<= static_cast<typeB>(std::forward<typeB>(valueB))); } };
      struct assign_modulo      final { template <typename typeA, typename typeB> constexpr static decltype(instanceof<typeA>()  %= instanceof<typeB>()) value(typeA&& valueA, typeB&& valueB) noexcept(noexcept(instanceof<typeA>()  %= instanceof<typeB>())) { return (static_cast<typeA>(std::forward<typeA>(valueA))  %= static_cast<typeB>(std::forward<typeB>(valueB))); } };
      struct assign_multiply    final { template <typename typeA, typename typeB> constexpr static decltype(instanceof<typeA>()  *= instanceof<typeB>()) value(typeA&& valueA, typeB&& valueB) noexcept(noexcept(instanceof<typeA>()  *= instanceof<typeB>())) { return (static_cast<typeA>(std::forward<typeA>(valueA))  *= static_cast<typeB>(std::forward<typeB>(valueB))); } };
      struct assign_right_shift final { template <typename typeA, typename typeB> constexpr static decltype(instanceof<typeA>() >>= instanceof<typeB>()) value(typeA&& valueA, typeB&& valueB) noexcept(noexcept(instanceof<typeA>() >>= instanceof<typeB>())) { return (static_cast<typeA>(std::forward<typeA>(valueA)) >>= static_cast<typeB>(std::forward<typeB>(valueB))); } };
      struct assign_subtract    final { template <typename typeA, typename typeB> constexpr static decltype(instanceof<typeA>()  -= instanceof<typeB>()) value(typeA&& valueA, typeB&& valueB) noexcept(noexcept(instanceof<typeA>()  -= instanceof<typeB>())) { return (static_cast<typeA>(std::forward<typeA>(valueA))  -= static_cast<typeB>(std::forward<typeB>(valueB))); } };
    };

    // ... ->> Collection of requested types to sequentially cast an object to
    template <typename base = void, typename = void>
    struct values_cast final {
      template <typename type>
      constexpr static type&& value(type&& value) noexcept {
        return std::forward<type&&>(value);
      }
    };

    template <typename base>
    struct values_cast<base, values_cast<> > final {
      typedef base type;

      template <typename type>
      constexpr static base value(type&& value) noexcept(noexcept((base) std::declval<type>())) {
        return (base) std::forward<type>(value);
      }
    };

    template <typename base, typename subbase>
    struct values_cast<base, values_cast<subbase> > final {
      typedef typename values_cast<subbase>::type type;

      template <typename type>
      constexpr static typename values_cast<subbase>::type value(type&& value) noexcept(noexcept((base) std::declval<type>()) && noexcept(values_cast<subbase>::value(instanceof<base>()))) {
        return values_cast<subbase>::value((base) std::forward<type>(value));
      }
    };

    // ... ->> Collection of object (references)
    template <bool = false, typename = void, class = void, class = values_cast<>, std::nullptr_t = nullptr>
    struct values;

    template <std::nullptr_t specialization>
    struct values<false, void, void, values_cast<>, specialization> {
      friend struct $return;
      template <bool, typename, class, class, std::nullptr_t> friend struct values;

      /* ... */
      private:
        typedef values_cast<> cast;
        typedef values     <> previous;
        typedef void          type;

        /* ... */
        static std::size_t const length = 0u;

        /* ... ->> Metafunction denoting `values` type when an object is added to the collection */
        template <typename subbase>
        struct addof final {
          typedef values<false, typename std::conditional<std::is_constructible<subbase, subbase>::value && (
            std::is_reference<subbase>                                        ::value ||
            std::is_same     <subbase, typename std::remove_cv<subbase>::type>::value
          ), subbase, subbase&&>::type, previous, cast> type;
        };

        // ... ->> Metafunction denoting `values` type with re-specified `allocated` flag
        template <bool suballocated>
        struct allocate final {
          typedef values<suballocated> type;
        };

        // ... ->> Metafunction indexing a subcollection within `values`
        template <std::size_t>
        struct at final {
          typedef values<> type;
        };

        // ... ->> Metafunction generating `values` from a specified `base`
        template <typename base, class subvalues = values<> >
        struct buildof final {
          typedef subvalues type;
        };

        // ... ->> Metafunction denoting `values_cast` type used when referring to an object in `values`
        template <class, class = cast>
        struct castof;

        // ... ->> Metafunction concatenating two `values`
        template <class>
        struct concatenationof;

        template <bool suballocated>
        struct concatenationof<values<suballocated> > final {
          typedef values<suballocated> type;
        };

        template <bool suballocated, typename subbase, class subprevious, class subcast>
        struct concatenationof<values<suballocated, subbase, subprevious, subcast> > final {
          typedef values<true, subbase, typename concatenationof<subprevious>::type, subcast> type;
        };

        // ... ->> Metafunction asserting if specified `type` is a `values` collection
        template <typename base>
        struct is final {
          static bool const value = std::is_same<base, nil>::value;
        };

        template <typename base> struct is<base&>               final { static bool const value = is<base>::value; };
        template <typename base> struct is<base&&>              final { static bool const value = is<base>::value; };
        template <typename base> struct is<base const>          final { static bool const value = is<base>::value; };
        template <typename base> struct is<base const volatile> final { static bool const value = is<base>::value; };
        template <typename base> struct is<base volatile>       final { static bool const value = is<base>::value; };

        template <bool suballocated, typename subbase, class subprevious, class subcast>
        struct is<values<suballocated, subbase, subprevious, subcast> > final {
          static bool const value = true;
        };

        // ... ->> Metafunction denoting `values` type when an operation is performed on its collection
        template <class, class subvalues, class = values, class = subvalues>
        struct operationof final {
          typedef values<> type;
        };

      /* ... */
      public:
        constexpr values()                noexcept {}
        constexpr values(values<> const&) noexcept {}

      /* ... */
      
#if 0 /* disabled by -frewrite-includes */
#if defined(__ICC) || defined(__INTEL_COMPILER) || defined(__INTEL_LLVM_COMPILER)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 161 "multi-return.cpp"
        public:
      #else
# 163 "multi-return.cpp"
        private:
      #endif
# 165 "multi-return.cpp"
        // ... ->> Concatenate two `values`
        template <class subvalues>
        constexpr static subvalues&& concatenate(values const&, subvalues&& valued) noexcept {
          return std::forward<subvalues>(valued);
        }

        // ... ->> Compute an operation resulting in a new `values` collection
        template <class, class subvalues, class = values, class = subvalues>
        constexpr values<> const& operate(subvalues const&) const noexcept {
          return *this;
        }

      /* ... */
      template <typename type>
      constexpr friend typename std::enable_if<false != is<type>::value, type&&>::type operator ,(values const& valuedA, type&& valuedB) noexcept {
        return concatenate(valuedA, std::forward<type>(valuedB));
      }

      template <typename type>
      constexpr friend typename std::enable_if<false == is<type>::value, typename addof<type>::type>::type operator ,(values const& valued, type&& value)
        #ifdef _MSC_VER
          noexcept(std::is_reference<type>::value)
        #else
# 188 "multi-return.cpp"
          noexcept(noexcept(typename addof<type>::type(std::declval<type>(), instanceof<values const&>())))
        #endif
# 190 "multi-return.cpp"
      { return {std::forward<type>(value), valued}; }
    };

    template <std::nullptr_t specialization>
    struct values<true, void, void, values_cast<>, specialization> : public values<false> {};

    template <typename base, class _previous, class _cast, std::nullptr_t specialization>
    struct values<false, base, _previous, _cast, specialization> : public values<false> {
      friend struct $return;
      template <bool, typename, class, class, std::nullptr_t> friend struct values;

      /* ... */
      private:
        typedef _cast             cast;
        typedef  values_operation operation;
        typedef _previous         previous;
        typedef  base             type;

        /* ... */
        static std::size_t const length = previous::length + 1u;

        /* ... ->> See `struct values<>::add` */
        template <typename subbase>
        struct addof final {
          typedef values<false, typename std::conditional<std::is_constructible<subbase, subbase>::value && (
            std::is_reference<subbase>                                        ::value ||
            std::is_same     <subbase, typename std::remove_cv<subbase>::type>::value
          ), subbase, subbase&&>::type, values<false, base, previous, cast>, values_cast<> > type;
        };

        // ... ->> See `struct values<>::allocate`
        template <bool suballocated>
        struct allocate final {
          typedef values<suballocated, base, previous, cast> type;
        };

        // ... ->> See `struct values<>::at`; Indexed from one (`1u`)
        template <std::size_t index>
        struct at final {
          typedef typename std::conditional<
            index == values::length,
            values<false, base, previous, cast>,
            typename previous::template at<index>::type
          >::type type;
        };

        // ... ->> See `struct values<>::buildof`
        template <typename subbase, class subvalues = values<> >
        struct buildof final {
          typedef typename std::conditional<
            is<subbase>::value,
            typename std::remove_cv<typename std::remove_reference<subbase>::type>::type,
            typename previous::template buildof<subbase, typename subvalues::template addof<subbase>::type>::type
          >::type type;
        };

        // ... ->> See `struct values<>::castof`
        template <class subvalues, class subcast = cast>
        struct castof final {
          typedef typename previous::template castof<subvalues, typename castof<values, subcast>::type>::type type;
        };

        template <bool suballocated, class subcast>
        struct castof<values<suballocated, base, previous, cast>, subcast> final {
          typedef typename std::conditional<std::is_same<cast, values_cast<> >::value, subcast, cast>::type type;
        };

        // ... ->> See `struct values<>::concatenationof`
        template <class>
        struct concatenationof;

        template <bool suballocated, typename subbase, class subprevious, class subcast>
        struct concatenationof<values<suballocated, subbase, subprevious, subcast> > final {
          typedef values<true, subbase, typename subprevious::template concatenationof<values>::type, subcast> type;
        };

        // ... ->> See `struct values<>::operationof` --- WARN (Lapys) -> Dependency on `decltype(...)` keyword prevents ISO C++98 support
        template <class, class subvalues, class = values, class = subvalues>
        struct operationof;

        template <class operation, class valuesA, class valuesB>
        struct operationof<operation, values<>, valuesA, valuesB> final {
          typedef values<> type;
        };

        template <class operation, bool suballocated, typename subbase, class subprevious, class subcast, class valuesA, class valuesB>
        struct operationof<operation, values<suballocated, subbase, subprevious, subcast>, valuesA, valuesB> final {
          typedef values<true, decltype(operation::value(
            valuesA::template castof<values<false,        base,    previous,    cast>    >::type::value(static_cast<base>   (std::declval<base>   ())),
            valuesB::template castof<values<suballocated, subbase, subprevious, subcast> >::type::value(static_cast<subbase>(std::declval<subbase>()))
          )), typename previous::template operationof<operation, subprevious, valuesA, valuesB>::type, cast> type;
        };

      /* ... */
      private:
        base            value;
        previous const &prevalues;

      /* ... */
      public:
        constexpr values(base&& value, previous const& previous) noexcept(noexcept(base(instanceof<base&&>()))) :
          value    (static_cast<base>(static_cast<base&&>(value))),
          prevalues{previous}
        {}

        constexpr values(values<false, base, previous, cast> const& valued) noexcept(noexcept(values<false, base, previous, cast>(instanceof<base&&>(), instanceof<previous const&>()))) :
          values::values(static_cast<base&&>(const_cast<base&>(valued.value)), valued.prevalues)
        {}

      /* ... */
      
#if 0 /* disabled by -frewrite-includes */
#if defined(__circle_lang__) || defined(__ICC) || defined(__INTEL_COMPILER) || defined(__INTEL_LLVM_COMPILER)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 301 "multi-return.cpp"
        public:
      #else
# 303 "multi-return.cpp"
        private:
      #endif
# 305 "multi-return.cpp"
        // ... ->> Construct `values` from a specified `type`; See `struct values<>::buildof`
        template <bool suballocated, typename type, class subprevious, class subcast>
        constexpr static values<suballocated, type, subprevious, subcast> const& build(values<suballocated, type, subprevious, subcast> const& valued) noexcept {
          return valued;
        }

        template <typename type>
        constexpr static typename buildof<type>::type build(type&&, typename buildof<type>::type const& valued) noexcept {
          return valued;
        }

        template <typename typeA, class subvalues = values<> >
        constexpr static typename std::enable_if<false == std::is_same<subvalues, typename buildof<typeA>::type>::value, typename buildof<typeA>::type>::type build(
          typeA&& value,
          subvalues const& valued = subvalues{},
          typename subvalues::template addof<typeA>::type const& bruh = {}
        ) noexcept {
          return values::build(std::forward<typeA>(value), bruh);
        }

        // ... ->> See `values<>::concatenate(...)`
        constexpr static values<> concatenate(values<> const&, values<> const&) noexcept {
          return {};
        }

        template <class subvalues>
        constexpr static typename values<>::template concatenationof<subvalues>::type concatenate(subvalues const& valued, values<> const&) noexcept(noexcept(typename subvalues::type(instanceof<typename subvalues::type>()))) {
          return {static_cast<typename subvalues::type>(valued.value), concatenate(valued.prevalues, {})};
        }

        template <class subvaluesA, class subvaluesB>
        constexpr static typename subvaluesB::template concatenationof<subvaluesA>::type concatenate(subvaluesA const& valuedA, subvaluesB const& valuedB) noexcept(noexcept(typename subvaluesB::type(instanceof<typename subvaluesB::type>()))) {
          return {static_cast<typename subvaluesB::type>(valuedB.value), concatenate(valuedA, valuedB.prevalues)};
        }

        // ... ->> See `values<>::operate(...)`
        template <class operation, class subvalues, class valuesA = values, class valuesB = subvalues>
        constexpr typename std::enable_if<values::length == subvalues::length, typename operationof<operation, subvalues>::type>::type operate(subvalues const& valued) const noexcept(
          noexcept(operation::value(
            valuesA::template castof<values>   ::type::value(instanceof<typename values   ::type>()),
            valuesB::template castof<subvalues>::type::value(instanceof<typename subvalues::type>())
          ))
          
#if 0 /* disabled by -frewrite-includes */
#if defined(__clang__) || false == (defined(__ICC) || defined(__INTEL_COMPILER) || defined(__INTEL_LLVM_COMPILER))
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 348 "multi-return.cpp"
            && noexcept(typename operationof<operation, subvalues>::type(
              operation::value(valuesA::template castof<values>::type::value(instanceof<typename values::type>()), valuesB::template castof<subvalues>::type::value(instanceof<typename subvalues::type>())),
              instanceof<typename values::previous const&>().template operate<operation, typename subvalues::previous, valuesA, valuesB>(instanceof<typename subvalues::previous const&>())
            ))
          #endif
# 353 "multi-return.cpp"
        ) {
          return {operation::value(
            valuesA::template castof<values>   ::type::value(static_cast<typename values   ::type>(this -> value)),
            valuesB::template castof<subvalues>::type::value(static_cast<typename subvalues::type>(valued .value))
          ), this -> prevalues.template operate<operation, typename subvalues::previous, valuesA, valuesB>(valued.prevalues)};
        }

        // ... ->> Resolver for `friend` operator overloads
        template <class operation, typename type>
        constexpr typename std::enable_if<false != is<type>::value, typename operationof<operation, typename std::remove_cv<typename std::remove_reference<type>::type>::type>::type>::type suboperate(type&& valued) const noexcept(noexcept(this -> template operate<operation>(valued))) {
          return this -> template operate<operation>(valued);
        }

        template <class operation, typename type>
        constexpr typename std::enable_if<false == is<type>::value, typename operationof<operation, typename buildof<type>::type>::type>::type suboperate(type&& value) const noexcept(noexcept(this -> template suboperate<operation>(values::build(std::declval<type>())))) {
          return this -> template suboperate<operation>(values::build(std::forward<type>(value)));
        }

      /* ... */
      public:
        template <typename type>
        constexpr friend typename std::enable_if<false != is<type>::value, typename std::remove_reference<type>::type::template concatenationof<values>::type>::type operator ,(values const& valued, type&& value)
          #ifdef __circle_lang__
            noexcept(false)
          #else
# 378 "multi-return.cpp"
            noexcept(noexcept(values::concatenate(valued, value)))
          #endif
# 380 "multi-return.cpp"
        { return values::concatenate(valued, value); }

        template <typename type>
        constexpr friend typename std::enable_if<false == is<type>::value, typename addof<type>::type>::type operator ,(values const& valued, type&& value)
          
#if 0 /* disabled by -frewrite-includes */
#if defined(__circle_lang__) || defined(_MSC_VER)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 385 "multi-return.cpp"
            noexcept(std::is_reference<type>::value)
          #else
# 387 "multi-return.cpp"
            noexcept(noexcept(typename addof<type>::type(std::declval<type>(), instanceof<values const&>())))
          #endif
# 389 "multi-return.cpp"
        { return {std::forward<type>(value), valued}; }

        // ...
        template <typename type>
        constexpr friend typename buildof<type>::type::template operationof<operation::add, values>::type operator +(type&& value, values const& valued)
          
#if 0 /* disabled by -frewrite-includes */
#if defined(__circle_lang__) || defined(_MSC_VER)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 395 "multi-return.cpp"
            noexcept(false)
          #else
# 397 "multi-return.cpp"
            noexcept(noexcept(values::build(std::declval<type>()).template suboperate<operation::add>(valued)))
          #endif
# 399 "multi-return.cpp"
        { return values::build(std::forward<type>(value)).template suboperate<operation::add>(valued); }

        #ifdef _MSC_VER
          template <typename type>
          constexpr typename std::enable_if<false == is<type>::value, typename values::template operationof<operation::add, typename buildof<type>::type>::type>::type operator +(type&& value) const noexcept(noexcept(*this + values::build(std::declval<type>()))) {
            return *this + values::build(std::forward<type>(value));
          }
        #else
# 407 "multi-return.cpp"
          template <typename type>
          constexpr friend typename std::enable_if<false == is<type>::value, typename operationof<operation::add, typename buildof<type>::type>::type>::type operator +(values const& valued, type&& value)
            #ifdef __circle_lang__
              noexcept(false)
            #else
# 412 "multi-return.cpp"
              noexcept(noexcept(valued + values::build(std::declval<type>())))
            #endif
# 414 "multi-return.cpp"
          { return valued + values::build(std::forward<type>(value)); }
        #endif
# 416 "multi-return.cpp"
    };

    template <typename base, class _previous, class _cast, std::nullptr_t specialization>
    struct values<true, base, _previous, _cast, specialization> final : public values<false, base, _previous, _cast> {
      friend struct $return;
      template <bool, typename, class, class, std::nullptr_t> friend struct values;

      private:
        typedef _cast                                cast;
        typedef _previous                            previous;
        typedef  base                                type;
        typedef  values<false, base, previous, cast> subvalues;

        using subvalues::allocate;

        /* ... ->> See `struct values<>::at` */
        template <std::size_t index>
        struct at final {
          typedef typename values<false, base, previous, cast>::template at<index>::type::template allocate<true>::type type;
        };

        /* ... */
        previous prevalues;

      public:
        constexpr values(base&& value, previous const& previous) noexcept(noexcept(subvalues(instanceof<base&&>(), instanceof<values::previous const&>())) && noexcept(values::previous(instanceof<values::previous const&>()))) :
          subvalues::values(static_cast<base&&>(value), this -> prevalues),
          prevalues{previous}
        {}

        constexpr values(values<true, base, previous, cast> const& valued) noexcept(noexcept(values<true, base, previous, cast>(instanceof<base&&>(), instanceof<previous const&>()))) :
          values::values(static_cast<base&&>(const_cast<base&>(valued.value)), valued.prevalues)
        {}
    };

  public:
    struct nil final : public values<> {};
};

constexpr static $return::nil const $ = {};

/* Main */
#if 0 /* expanded by -frewrite-includes */
#include <cstdlib>
#endif /* expanded by -frewrite-includes */
# 458 "multi-return.cpp"
# 1 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 1 3
// -*- C++ -*- forwarding header.

// Copyright (C) 1997-2021 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/cstdlib
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c stdlib.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */

//
// ISO C++ 14882: 20.4.6  C library
//

#if 0 /* expanded by -frewrite-includes */
#pragma GCC system_header
#endif /* expanded by -frewrite-includes */
# 40 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3

#if 0 /* expanded by -frewrite-includes */
#include <bits/c++config.h>
#endif /* expanded by -frewrite-includes */
# 41 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
# 42 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3

#ifndef _GLIBCXX_CSTDLIB
#define _GLIBCXX_CSTDLIB 1

#if 0 /* disabled by -frewrite-includes */
#if !_GLIBCXX_HOSTED
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 47 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
// The C standard does not require a freestanding implementation to
// provide <stdlib.h>.  However, the C++ standard does still require
// <cstdlib> -- but only the functionality mentioned in
// [lib.support.start.term].

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

namespace std
{
  extern "C" void abort(void) throw () _GLIBCXX_NORETURN;
  extern "C" int atexit(void (*)(void)) throw ();
  extern "C" void exit(int) throw () _GLIBCXX_NORETURN;
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 61 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
# ifdef _GLIBCXX_HAVE_AT_QUICK_EXIT
  extern "C" int at_quick_exit(void (*)(void)) throw ();
# endif
# 64 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
# ifdef _GLIBCXX_HAVE_QUICK_EXIT
  extern "C" void quick_exit(int) throw() _GLIBCXX_NORETURN;
# endif
# 67 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
#endif
# 68 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
} // namespace std

#else
# 71 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3

// Need to ensure this finds the C library's <stdlib.h> not a libstdc++
// wrapper that might already be installed later in the include search path.
#define _GLIBCXX_INCLUDE_NEXT_C_HEADERS
#if 0 /* expanded by -frewrite-includes */
#include_next <stdlib.h>
#endif /* expanded by -frewrite-includes */
# 75 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
# 1 "C:/Msys2/mingw64/include/stdlib.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _INC_STDLIB
#define _INC_STDLIB

#if 0 /* expanded by -frewrite-includes */
#include <corecrt.h>
#endif /* expanded by -frewrite-includes */
# 9 "C:/Msys2/mingw64/include/stdlib.h" 3
# 10 "C:/Msys2/mingw64/include/stdlib.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <corecrt_wstdlib.h>
#endif /* expanded by -frewrite-includes */
# 10 "C:/Msys2/mingw64/include/stdlib.h" 3
# 1 "C:/Msys2/mingw64/include/corecrt_wstdlib.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _INC_CORECRT_WSTDLIB
#define _INC_CORECRT_WSTDLIB

#if 0 /* expanded by -frewrite-includes */
#include <corecrt.h>
#endif /* expanded by -frewrite-includes */
# 9 "C:/Msys2/mingw64/include/corecrt_wstdlib.h" 3
# 10 "C:/Msys2/mingw64/include/corecrt_wstdlib.h" 3

#ifdef __cplusplus
extern "C" {
#endif
# 14 "C:/Msys2/mingw64/include/corecrt_wstdlib.h" 3

  _CRTIMP errno_t __cdecl _itow_s (int _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t,_itow_s,int,_Val,wchar_t,_DstBuf,int,_Radix)

  _CRTIMP errno_t __cdecl _ltow_s (long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t,_ltow_s,long,_Val,wchar_t,_DstBuf,int,_Radix)

  _CRTIMP errno_t __cdecl _ultow_s (unsigned long _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t,_ultow_s,unsigned long,_Val,wchar_t,_DstBuf,int,_Radix)

  _CRTIMP errno_t __cdecl _wgetenv_s(size_t *_ReturnSize,wchar_t *_DstBuf,size_t _DstSizeInWords,const wchar_t *_VarName);
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t,_wgetenv_s,size_t*,_ReturnSize,wchar_t,_DstBuf,const wchar_t*,_VarName)

  _CRTIMP errno_t __cdecl _wdupenv_s(wchar_t **_Buffer,size_t *_BufferSizeInWords,const wchar_t *_VarName);
  _CRTIMP errno_t __cdecl _i64tow_s(__int64 _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);
  _CRTIMP errno_t __cdecl _ui64tow_s(unsigned __int64 _Val,wchar_t *_DstBuf,size_t _SizeInWords,int _Radix);

  _CRTIMP errno_t __cdecl _wmakepath_s(wchar_t *_PathResult,size_t _SizeInWords,const wchar_t *_Drive,const wchar_t *_Dir,const wchar_t *_Filename,const wchar_t *_Ext);
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(errno_t,_wmakepath_s,wchar_t,_PathResult,const wchar_t*,_Drive,const wchar_t*,_Dir,const wchar_t*,_Filename,const wchar_t*,_Ext)

  _CRTIMP errno_t __cdecl _wputenv_s(const wchar_t *_Name,const wchar_t *_Value);

  _CRTIMP errno_t __cdecl _wsearchenv_s(const wchar_t *_Filename,const wchar_t *_EnvVar,wchar_t *_ResultPath,size_t _SizeInWords);
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_2_0(errno_t,_wsearchenv_s,const wchar_t*,_Filename,const wchar_t*,_EnvVar,wchar_t,_ResultPath)

  _CRTIMP errno_t __cdecl _wsplitpath_s(const wchar_t *_FullPath,wchar_t *_Drive,size_t _DriveSizeInWords,wchar_t *_Dir,size_t _DirSizeInWords,wchar_t *_Filename,size_t _FilenameSizeInWords,wchar_t *_Ext,size_t _ExtSizeInWords);
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(errno_t,_wsplitpath_s,wchar_t,_Dest)

#ifdef __cplusplus
}
#endif
# 45 "C:/Msys2/mingw64/include/corecrt_wstdlib.h" 3
#endif /* _INC_CORECRT_WSTDLIB */
# 46 "C:/Msys2/mingw64/include/corecrt_wstdlib.h" 3

# 11 "C:/Msys2/mingw64/include/stdlib.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <limits.h>
#endif /* expanded by -frewrite-includes */
# 11 "C:/Msys2/mingw64/include/stdlib.h" 3
# 1 "C:/Msys2/mingw64/lib/clang/14.0.0/include/limits.h" 1 3
/*===---- limits.h - Standard header for integer sizes --------------------===*\
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
\*===----------------------------------------------------------------------===*/

#ifndef __CLANG_LIMITS_H
#define __CLANG_LIMITS_H

/* The system's limits.h may, in turn, try to #include_next GCC's limits.h.
   Avert this #include_next madness. */
#if 0 /* disabled by -frewrite-includes */
#if defined __GNUC__ && !defined _GCC_LIMITS_H_
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 15 "C:/Msys2/mingw64/lib/clang/14.0.0/include/limits.h" 3
#define _GCC_LIMITS_H_
#endif
# 17 "C:/Msys2/mingw64/lib/clang/14.0.0/include/limits.h" 3

/* System headers include a number of constants from POSIX in <limits.h>.
   Include it if we're hosted. */
#if 0 /* disabled by -frewrite-includes */
#if __STDC_HOSTED__ && __has_include_next(<limits.h>)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 21 "C:/Msys2/mingw64/lib/clang/14.0.0/include/limits.h" 3
#if 0 /* expanded by -frewrite-includes */
#include_next <limits.h>
#endif /* expanded by -frewrite-includes */
# 21 "C:/Msys2/mingw64/lib/clang/14.0.0/include/limits.h" 3
# 1 "C:/Msys2/mingw64/include/limits.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#if 0 /* expanded by -frewrite-includes */
#include <crtdefs.h>
#endif /* expanded by -frewrite-includes */
# 6 "C:/Msys2/mingw64/include/limits.h" 3
# 1 "C:/Msys2/mingw64/include/crtdefs.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */

#ifndef _INC_CRTDEFS
#define _INC_CRTDEFS

#if 0 /* expanded by -frewrite-includes */
#include <corecrt.h>
#endif /* expanded by -frewrite-includes */
# 10 "C:/Msys2/mingw64/include/crtdefs.h" 3
# 11 "C:/Msys2/mingw64/include/crtdefs.h" 3

#endif /* _INC_CRTDEFS */
# 13 "C:/Msys2/mingw64/include/crtdefs.h" 3
# 7 "C:/Msys2/mingw64/include/limits.h" 2 3

#ifndef _INC_LIMITS
#define _INC_LIMITS

/*
 * File system limits
 *
 * NOTE: Apparently the actual size of PATH_MAX is 260, but a space is
 *       required for the NUL. TODO: Test?
 * NOTE: PATH_MAX is the POSIX equivalent for Microsoft's MAX_PATH; the two
 *       are semantically identical, with a limit of 259 characters for the
 *       path name, plus one for a terminating NUL, for a total of 260.
 */
#define PATH_MAX	260

#define CHAR_BIT 8
#define SCHAR_MIN (-128)
#define SCHAR_MAX 127
#define UCHAR_MAX 0xff

#ifdef __CHAR_UNSIGNED__
#define CHAR_MIN 0
#define CHAR_MAX UCHAR_MAX
#else
# 31 "C:/Msys2/mingw64/include/limits.h" 3
#define CHAR_MIN SCHAR_MIN
#define CHAR_MAX SCHAR_MAX
#endif
# 34 "C:/Msys2/mingw64/include/limits.h" 3

#define MB_LEN_MAX 5
#define SHRT_MIN (-32768)
#define SHRT_MAX 32767
#define USHRT_MAX 0xffffU
#define INT_MIN (-2147483647 - 1)
#define INT_MAX 2147483647
#define UINT_MAX 0xffffffffU
#define LONG_MIN (-2147483647L - 1)
#define LONG_MAX 2147483647L
#define ULONG_MAX 0xffffffffUL
#define LLONG_MAX 9223372036854775807ll
#define LLONG_MIN (-9223372036854775807ll - 1)
#define ULLONG_MAX 0xffffffffffffffffull

#define _I8_MIN (-127 - 1)
#define _I8_MAX 127
#define _UI8_MAX 0xffu

#define _I16_MIN (-32767 - 1)
#define _I16_MAX 32767
#define _UI16_MAX 0xffffu

#define _I32_MIN (-2147483647 - 1)
#define _I32_MAX 2147483647
#define _UI32_MAX 0xffffffffu

#if 0 /* disabled by -frewrite-includes */
#if defined(__GNUC__)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 62 "C:/Msys2/mingw64/include/limits.h" 3
#undef LONG_LONG_MAX
#define LONG_LONG_MAX 9223372036854775807ll
#undef LONG_LONG_MIN
#define LONG_LONG_MIN (-LONG_LONG_MAX-1)
#undef ULONG_LONG_MAX
#define ULONG_LONG_MAX (2ull * LONG_LONG_MAX + 1ull)
#endif
# 69 "C:/Msys2/mingw64/include/limits.h" 3

#define _I64_MIN (-9223372036854775807ll - 1)
#define _I64_MAX 9223372036854775807ll
#define _UI64_MAX 0xffffffffffffffffull

#ifndef SIZE_MAX
#ifdef _WIN64
#define SIZE_MAX _UI64_MAX
#else
# 78 "C:/Msys2/mingw64/include/limits.h" 3
#define SIZE_MAX UINT_MAX
#endif
# 80 "C:/Msys2/mingw64/include/limits.h" 3
#endif
# 81 "C:/Msys2/mingw64/include/limits.h" 3

#ifndef SSIZE_MAX
#ifdef _WIN64
#define SSIZE_MAX _I64_MAX
#else
# 86 "C:/Msys2/mingw64/include/limits.h" 3
#define SSIZE_MAX INT_MAX
#endif
# 88 "C:/Msys2/mingw64/include/limits.h" 3
#endif
# 89 "C:/Msys2/mingw64/include/limits.h" 3

#ifdef _POSIX_
#define _POSIX_ARG_MAX 4096
#define _POSIX_CHILD_MAX 6
#define _POSIX_LINK_MAX 8
#define _POSIX_MAX_CANON 255
#define _POSIX_MAX_INPUT 255
#define _POSIX_NAME_MAX 14
#define _POSIX_NGROUPS_MAX 0
#define _POSIX_OPEN_MAX 16
#define _POSIX_PATH_MAX 255
#define _POSIX_PIPE_BUF 512
#define _POSIX_SSIZE_MAX 32767
#define _POSIX_STREAM_MAX 8
#define _POSIX_TZNAME_MAX 3
#define ARG_MAX 14500
#define LINK_MAX 1024
#define MAX_CANON _POSIX_MAX_CANON
#define MAX_INPUT _POSIX_MAX_INPUT
#define NAME_MAX 255
#define NGROUPS_MAX 16
#define OPEN_MAX 32
#undef PATH_MAX
#define PATH_MAX 512
#define PIPE_BUF _POSIX_PIPE_BUF
/*#define SSIZE_MAX _POSIX_SSIZE_MAX*/
#define STREAM_MAX 20
#define TZNAME_MAX 10
#endif
# 118 "C:/Msys2/mingw64/include/limits.h" 3

#endif /* _INC_LIMITS */
# 120 "C:/Msys2/mingw64/include/limits.h" 3
# 22 "C:/Msys2/mingw64/lib/clang/14.0.0/include/limits.h" 2 3
#endif
# 23 "C:/Msys2/mingw64/lib/clang/14.0.0/include/limits.h" 3

/* Many system headers try to "help us out" by defining these.  No really, we
   know how big each datatype is. */
#undef  SCHAR_MIN
#undef  SCHAR_MAX
#undef  UCHAR_MAX
#undef  SHRT_MIN
#undef  SHRT_MAX
#undef  USHRT_MAX
#undef  INT_MIN
#undef  INT_MAX
#undef  UINT_MAX
#undef  LONG_MIN
#undef  LONG_MAX
#undef  ULONG_MAX

#undef  CHAR_BIT
#undef  CHAR_MIN
#undef  CHAR_MAX

/* C90/99 5.2.4.2.1 */
#define SCHAR_MAX __SCHAR_MAX__
#define SHRT_MAX  __SHRT_MAX__
#define INT_MAX   __INT_MAX__
#define LONG_MAX  __LONG_MAX__

#define SCHAR_MIN (-__SCHAR_MAX__-1)
#define SHRT_MIN  (-__SHRT_MAX__ -1)
#define INT_MIN   (-__INT_MAX__  -1)
#define LONG_MIN  (-__LONG_MAX__ -1L)

#define UCHAR_MAX (__SCHAR_MAX__*2  +1)
#define USHRT_MAX (__SHRT_MAX__ *2  +1)
#define UINT_MAX  (__INT_MAX__  *2U +1U)
#define ULONG_MAX (__LONG_MAX__ *2UL+1UL)

#ifndef MB_LEN_MAX
#define MB_LEN_MAX 1
#endif
# 62 "C:/Msys2/mingw64/lib/clang/14.0.0/include/limits.h" 3

#define CHAR_BIT  __CHAR_BIT__

/* C2x 5.2.4.2.1 */
/* FIXME: This is using the placeholder dates Clang produces for these macros
   in C2x mode; switch to the correct values once they've been published. */
#if 0 /* disabled by -frewrite-includes */
#if __STDC_VERSION__ >= 202000L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 69 "C:/Msys2/mingw64/lib/clang/14.0.0/include/limits.h" 3
#define BOOL_WIDTH   __BOOL_WIDTH__
#define CHAR_WIDTH   CHAR_BIT
#define SCHAR_WIDTH  CHAR_BIT
#define UCHAR_WIDTH  CHAR_BIT
#define USHRT_WIDTH  __SHRT_WIDTH__
#define SHRT_WIDTH   __SHRT_WIDTH__
#define UINT_WIDTH   __INT_WIDTH__
#define INT_WIDTH    __INT_WIDTH__
#define ULONG_WIDTH  __LONG_WIDTH__
#define LONG_WIDTH   __LONG_WIDTH__
#define ULLONG_WIDTH __LLONG_WIDTH__
#define LLONG_WIDTH  __LLONG_WIDTH__

#define BITINT_MAXWIDTH __BITINT_MAXWIDTH__
#endif
# 84 "C:/Msys2/mingw64/lib/clang/14.0.0/include/limits.h" 3

#ifdef __CHAR_UNSIGNED__  /* -funsigned-char */
#define CHAR_MIN 0
#define CHAR_MAX UCHAR_MAX
#else
# 89 "C:/Msys2/mingw64/lib/clang/14.0.0/include/limits.h" 3
#define CHAR_MIN SCHAR_MIN
#define CHAR_MAX __SCHAR_MAX__
#endif
# 92 "C:/Msys2/mingw64/lib/clang/14.0.0/include/limits.h" 3

/* C99 5.2.4.2.1: Added long long.
   C++11 18.3.3.2: same contents as the Standard C Library header <limits.h>.
 */
#if 0 /* disabled by -frewrite-includes */
#if __STDC_VERSION__ >= 199901L || __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 97 "C:/Msys2/mingw64/lib/clang/14.0.0/include/limits.h" 3

#undef  LLONG_MIN
#undef  LLONG_MAX
#undef  ULLONG_MAX

#define LLONG_MAX  __LONG_LONG_MAX__
#define LLONG_MIN  (-__LONG_LONG_MAX__-1LL)
#define ULLONG_MAX (__LONG_LONG_MAX__*2ULL+1ULL)
#endif
# 106 "C:/Msys2/mingw64/lib/clang/14.0.0/include/limits.h" 3

/* LONG_LONG_MIN/LONG_LONG_MAX/ULONG_LONG_MAX are a GNU extension.  It's too bad
   that we don't have something like #pragma poison that could be used to
   deprecate a macro - the code should just use LLONG_MAX and friends.
 */
#if 0 /* disabled by -frewrite-includes */
#if defined(__GNU_LIBRARY__) ? defined(__USE_GNU) : !defined(__STRICT_ANSI__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 112 "C:/Msys2/mingw64/lib/clang/14.0.0/include/limits.h" 3

#undef   LONG_LONG_MIN
#undef   LONG_LONG_MAX
#undef   ULONG_LONG_MAX

#define LONG_LONG_MAX  __LONG_LONG_MAX__
#define LONG_LONG_MIN  (-__LONG_LONG_MAX__-1LL)
#define ULONG_LONG_MAX (__LONG_LONG_MAX__*2ULL+1ULL)
#endif
# 121 "C:/Msys2/mingw64/lib/clang/14.0.0/include/limits.h" 3

#endif /* __CLANG_LIMITS_H */
# 123 "C:/Msys2/mingw64/lib/clang/14.0.0/include/limits.h" 3
# 12 "C:/Msys2/mingw64/include/stdlib.h" 2 3

#if 0 /* disabled by -frewrite-includes */
#if __USE_MINGW_ANSI_STDIO && !defined (__USE_MINGW_STRTOX) && !defined(_CRTBLD)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 14 "C:/Msys2/mingw64/include/stdlib.h" 3
#define __USE_MINGW_STRTOX 1
#endif
# 16 "C:/Msys2/mingw64/include/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__LIBMSVCRT__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 18 "C:/Msys2/mingw64/include/stdlib.h" 3
/* When building mingw-w64, this should be blank.  */
#define _SECIMP
#else
# 21 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef _SECIMP
#define _SECIMP __declspec(dllimport)
#endif /* _SECIMP */
# 24 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* defined(_CRTBLD) || defined(__LIBMSVCRT__) */
# 25 "C:/Msys2/mingw64/include/stdlib.h" 3

#pragma pack(push,_CRT_PACKING)

#ifdef __cplusplus
extern "C" {
#endif
# 31 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef NULL
#ifdef __cplusplus
#ifndef _WIN64
#define NULL 0
#else
# 37 "C:/Msys2/mingw64/include/stdlib.h" 3
#define NULL 0LL
#endif  /* W64 */
# 39 "C:/Msys2/mingw64/include/stdlib.h" 3
#else
# 40 "C:/Msys2/mingw64/include/stdlib.h" 3
#define NULL ((void *)0)
#endif
# 42 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 43 "C:/Msys2/mingw64/include/stdlib.h" 3

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

#ifndef _ONEXIT_T_DEFINED
#define _ONEXIT_T_DEFINED

  typedef int (__cdecl *_onexit_t)(void);

#ifndef	NO_OLDNAMES
#define onexit_t _onexit_t
#endif
# 55 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 56 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _DIV_T_DEFINED
#define _DIV_T_DEFINED

  typedef struct _div_t {
    int quot;
    int rem;
  } div_t;

  typedef struct _ldiv_t {
    long quot;
    long rem;
  } ldiv_t;
#endif
# 70 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _CRT_DOUBLE_DEC
#define _CRT_DOUBLE_DEC

#pragma pack(4)
  typedef struct {
    unsigned char ld[10];
  } _LDOUBLE;
#pragma pack()

#define _PTR_LD(x) ((unsigned char *)(&(x)->ld))

  typedef struct {
    double x;
  } _CRT_DOUBLE;

  typedef struct {
    float f;
  } _CRT_FLOAT;

#pragma push_macro("long")
#undef long

  typedef struct {
    long double x;
  } _LONGDOUBLE;

#pragma pop_macro("long")

#pragma pack(4)
  typedef struct {
    unsigned char ld12[12];
  } _LDBL12;
#pragma pack()
#endif
# 105 "C:/Msys2/mingw64/include/stdlib.h" 3

#define RAND_MAX 0x7fff

#ifndef MB_CUR_MAX
#define MB_CUR_MAX ___mb_cur_max_func()
#ifndef __mb_cur_max
#ifdef _MSVCRT_
  extern int __mb_cur_max;
#define __mb_cur_max	__mb_cur_max
#else
# 115 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef _UCRT
  extern int * __MINGW_IMP_SYMBOL(__mb_cur_max);
#endif
# 118 "C:/Msys2/mingw64/include/stdlib.h" 3
#define __mb_cur_max	(___mb_cur_max_func())
#endif
# 120 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 121 "C:/Msys2/mingw64/include/stdlib.h" 3
_CRTIMP int __cdecl ___mb_cur_max_func(void);
#endif
# 123 "C:/Msys2/mingw64/include/stdlib.h" 3

#define __max(a,b) (((a) > (b)) ? (a) : (b))
#define __min(a,b) (((a) < (b)) ? (a) : (b))

#define _MAX_PATH 260
#define _MAX_DRIVE 3
#define _MAX_DIR 256
#define _MAX_FNAME 256
#define _MAX_EXT 256

#define _OUT_TO_DEFAULT 0
#define _OUT_TO_STDERR 1
#define _OUT_TO_MSGBOX 2
#define _REPORT_ERRMODE 3

#define _WRITE_ABORT_MSG 0x1
#define _CALL_REPORTFAULT 0x2

#define _MAX_ENV 32767

  typedef void (__cdecl *_purecall_handler)(void);

  _CRTIMP _purecall_handler __cdecl _set_purecall_handler(_purecall_handler _Handler);
  _CRTIMP _purecall_handler __cdecl _get_purecall_handler(void);

  typedef void (__cdecl *_invalid_parameter_handler)(const wchar_t *,const wchar_t *,const wchar_t *,unsigned int,uintptr_t);
  _CRTIMP _invalid_parameter_handler __cdecl _set_invalid_parameter_handler(_invalid_parameter_handler _Handler);
  _CRTIMP _invalid_parameter_handler __cdecl _get_invalid_parameter_handler(void);

#ifndef _CRT_ERRNO_DEFINED
#define _CRT_ERRNO_DEFINED
  _CRTIMP extern int *__cdecl _errno(void);
#define errno (*_errno())
  errno_t __cdecl _set_errno(int _Value);
  errno_t __cdecl _get_errno(int *_Value);
#endif
# 159 "C:/Msys2/mingw64/include/stdlib.h" 3
  _CRTIMP unsigned long *__cdecl __doserrno(void);
#define _doserrno (*__doserrno())
  errno_t __cdecl _set_doserrno(unsigned long _Value);
  errno_t __cdecl _get_doserrno(unsigned long *_Value);
#ifdef _MSVCRT_
  extern char *_sys_errlist[];
  extern int _sys_nerr;
#else
# 167 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifdef _UCRT
  _CRTIMP char **__cdecl __sys_errlist(void);
  _CRTIMP int *__cdecl __sys_nerr(void);
#define _sys_nerr (*__sys_nerr())
#define _sys_errlist (__sys_errlist())
#else
# 173 "C:/Msys2/mingw64/include/stdlib.h" 3
  extern __declspec(dllimport) char *_sys_errlist[1];
  extern __declspec(dllimport) int _sys_nerr;
#endif /* !_UCRT */
# 176 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 177 "C:/Msys2/mingw64/include/stdlib.h" 3

  /* We have a fallback definition of __p___argv and __p__fmode for
     msvcrt versions that lack it. */
  _CRTIMP char ***__cdecl __p___argv(void);
  _CRTIMP int *__cdecl __p__fmode(void);
#if 0 /* disabled by -frewrite-includes */
#if (defined(_X86_) && !defined(__x86_64)) || defined(_UCRT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 183 "C:/Msys2/mingw64/include/stdlib.h" 3
  _CRTIMP int *__cdecl __p___argc(void);
  _CRTIMP wchar_t ***__cdecl __p___wargv(void);
  _CRTIMP char ***__cdecl __p__environ(void);
  _CRTIMP wchar_t ***__cdecl __p__wenviron(void);
  _CRTIMP char **__cdecl __p__pgmptr(void);
  _CRTIMP wchar_t **__cdecl __p__wpgmptr(void);
#endif
# 190 "C:/Msys2/mingw64/include/stdlib.h" 3

  errno_t __cdecl _get_pgmptr(char **_Value);
  errno_t __cdecl _get_wpgmptr(wchar_t **_Value);
  _CRTIMP errno_t __cdecl _set_fmode(int _Mode);
  _CRTIMP errno_t __cdecl _get_fmode(int *_PMode);

#ifndef _fmode
#define _fmode (* __p__fmode())
#endif
# 199 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifdef _MSVCRT_

#ifndef __argc
  extern int __argc;
#endif
# 205 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef __argv
  extern char **__argv;
#endif
# 208 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef __wargv
  extern wchar_t **__wargv;
#endif
# 211 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _POSIX_
#ifndef _environ
  extern char **_environ;
#endif
# 216 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef _wenviron
  extern wchar_t **_wenviron;
#endif
# 219 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* !_POSIX_ */
# 220 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _pgmptr
  extern char *_pgmptr;
#endif
# 224 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _wpgmptr
  extern wchar_t *_wpgmptr;
#endif
# 228 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _osplatform
  extern unsigned int _osplatform;
#endif
# 232 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _osver
  extern unsigned int _osver;
#endif
# 236 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _winver
  extern unsigned int _winver;
#endif
# 240 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _winmajor
  extern unsigned int _winmajor;
#endif
# 244 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _winminor
  extern unsigned int _winminor;
#endif
# 248 "C:/Msys2/mingw64/include/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(_UCRT)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 250 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef __argc
#define __argc (* __p___argc())
#endif
# 254 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef __argv
#define __argv (* __p___argv())
#endif
# 257 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef __wargv
#define __wargv (* __p___wargv())
#endif
# 260 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _POSIX_
#ifndef _environ
#define _environ (* __p__environ())
#endif
# 265 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _wenviron
#define _wenviron (* __p__wenviron())
#endif
# 269 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* !_POSIX_ */
# 270 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _pgmptr
#define _pgmptr (* __p__pgmptr())
#endif
# 274 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _wpgmptr
#define _wpgmptr (* __p__wpgmptr())
#endif
# 278 "C:/Msys2/mingw64/include/stdlib.h" 3

#else /* _UCRT */
# 280 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef __argc
  extern int * __MINGW_IMP_SYMBOL(__argc);
#define __argc (* __MINGW_IMP_SYMBOL(__argc))
#endif
# 285 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef __argv
  extern char *** __MINGW_IMP_SYMBOL(__argv);
#define __argv	(* __p___argv())
#endif
# 289 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef __wargv
  extern wchar_t *** __MINGW_IMP_SYMBOL(__wargv);
#define __wargv (* __MINGW_IMP_SYMBOL(__wargv))
#endif
# 293 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _POSIX_
#if 0 /* disabled by -frewrite-includes */
#if (defined(_ARM_) || defined(__arm__) || defined(_ARM64_) || defined(__aarch64__))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 296 "C:/Msys2/mingw64/include/stdlib.h" 3
  /* The plain msvcrt.dll for arm/aarch64 (and msvcr120_app.dll for arm) lacks
   * _environ/_wenviron, but has these functions instead. */
  _CRTIMP void __cdecl _get_environ(char ***);
  _CRTIMP void __cdecl _get_wenviron(wchar_t ***);

  static __inline char **__get_environ_ptr(void) {
    char **__ptr;
    _get_environ(&__ptr);
    return __ptr;
  }

  static __inline wchar_t **__get_wenviron_ptr(void) {
    wchar_t **__ptr;
    _get_wenviron(&__ptr);
    return __ptr;
  }

#ifndef _environ
#define _environ (__get_environ_ptr())
#endif
# 316 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _wenviron
#define _wenviron (__get_wenviron_ptr())
#endif
# 320 "C:/Msys2/mingw64/include/stdlib.h" 3
#else /* ARM/ARM64 */
# 321 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef _environ
  extern char *** __MINGW_IMP_SYMBOL(_environ);
#define _environ (* __MINGW_IMP_SYMBOL(_environ))
#endif
# 325 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _wenviron
  extern wchar_t *** __MINGW_IMP_SYMBOL(_wenviron);
#define _wenviron (* __MINGW_IMP_SYMBOL(_wenviron))
#endif
# 330 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* !ARM/ARM64 */
# 331 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* !_POSIX_ */
# 332 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _pgmptr
  extern char ** __MINGW_IMP_SYMBOL(_pgmptr);
#define _pgmptr	(* __MINGW_IMP_SYMBOL(_pgmptr))
#endif
# 337 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _wpgmptr
  extern wchar_t ** __MINGW_IMP_SYMBOL(_wpgmptr);
#define _wpgmptr (* __MINGW_IMP_SYMBOL(_wpgmptr))
#endif
# 342 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _osplatform
  extern unsigned int * __MINGW_IMP_SYMBOL(_osplatform);
#define _osplatform (* __MINGW_IMP_SYMBOL(_osplatform))
#endif
# 347 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _osver
  extern unsigned int * __MINGW_IMP_SYMBOL(_osver);
#define _osver	(* __MINGW_IMP_SYMBOL(_osver))
#endif
# 352 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _winver
  extern unsigned int * __MINGW_IMP_SYMBOL(_winver);
#define _winver	(* __MINGW_IMP_SYMBOL(_winver))
#endif
# 357 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _winmajor
  extern unsigned int * __MINGW_IMP_SYMBOL(_winmajor);
#define _winmajor (* __MINGW_IMP_SYMBOL(_winmajor))
#endif
# 362 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _winminor
  extern unsigned int * __MINGW_IMP_SYMBOL(_winminor);
#define _winminor (* __MINGW_IMP_SYMBOL(_winminor))
#endif
# 367 "C:/Msys2/mingw64/include/stdlib.h" 3

#endif /* !_MSVCRT_ && !_UCRT */
# 369 "C:/Msys2/mingw64/include/stdlib.h" 3

  errno_t __cdecl _get_osplatform(unsigned int *_Value);
  errno_t __cdecl _get_osver(unsigned int *_Value);
  errno_t __cdecl _get_winver(unsigned int *_Value);
  errno_t __cdecl _get_winmajor(unsigned int *_Value);
  errno_t __cdecl _get_winminor(unsigned int *_Value);
#ifndef _countof
#ifndef __cplusplus
#define _countof(_Array) (sizeof(_Array) / sizeof(_Array[0]))
#else
# 379 "C:/Msys2/mingw64/include/stdlib.h" 3
  extern "C++" {
    template <typename _CountofType,size_t _SizeOfArray> char (*__countof_helper(UNALIGNED _CountofType (&_Array)[_SizeOfArray]))[_SizeOfArray];
#define _countof(_Array) sizeof(*__countof_helper(_Array))
  }
#endif
# 384 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 385 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _CRT_TERMINATE_DEFINED
#define _CRT_TERMINATE_DEFINED
  void __cdecl __MINGW_NOTHROW exit(int _Code) __MINGW_ATTRIB_NORETURN;
  void __cdecl __MINGW_NOTHROW _exit(int _Code) __MINGW_ATTRIB_NORETURN;
#ifdef _UCRT
  void __cdecl __MINGW_NOTHROW quick_exit(int _Code) __MINGW_ATTRIB_NORETURN;
#endif
# 393 "C:/Msys2/mingw64/include/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined __NO_ISOCEXT /* extern stub in static libmingwex.a */
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 395 "C:/Msys2/mingw64/include/stdlib.h" 3
  /* C99 function name */
  void __cdecl _Exit(int) __MINGW_ATTRIB_NORETURN;
#ifndef __CRT__NO_INLINE
  __CRT_INLINE __MINGW_ATTRIB_NORETURN void  __cdecl _Exit(int status)
  {  _exit(status); }
#endif /* !__CRT__NO_INLINE */
# 401 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* Not  __NO_ISOCEXT */
# 402 "C:/Msys2/mingw64/include/stdlib.h" 3

#pragma push_macro("abort")
#undef abort
  void __cdecl __MINGW_ATTRIB_NORETURN abort(void);
#pragma pop_macro("abort")

#endif /* _CRT_TERMINATE_DEFINED */
# 409 "C:/Msys2/mingw64/include/stdlib.h" 3

  _CRTIMP unsigned int __cdecl _set_abort_behavior(unsigned int _Flags,unsigned int _Mask);

#ifndef _CRT_ABS_DEFINED
#define _CRT_ABS_DEFINED
  int __cdecl abs(int _X);
  long __cdecl labs(long _X);
#endif
# 417 "C:/Msys2/mingw64/include/stdlib.h" 3

  __MINGW_EXTENSION __int64 __cdecl _abs64(__int64);
#ifdef __MINGW_INTRIN_INLINE
  __MINGW_INTRIN_INLINE __int64 __cdecl _abs64(__int64 x) {
    return __builtin_llabs(x);
  }
#endif
# 424 "C:/Msys2/mingw64/include/stdlib.h" 3

  int __cdecl atexit(void (__cdecl *)(void));
#ifdef _UCRT
  int __cdecl at_quick_exit(void (__cdecl *)(void));
#endif
# 429 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef _CRT_ATOF_DEFINED
#define _CRT_ATOF_DEFINED
  double __cdecl atof(const char *_String);
  double __cdecl _atof_l(const char *_String,_locale_t _Locale);
#endif
# 434 "C:/Msys2/mingw64/include/stdlib.h" 3
  int __cdecl atoi(const char *_Str);
  _CRTIMP int __cdecl _atoi_l(const char *_Str,_locale_t _Locale);
  long __cdecl atol(const char *_Str);
  _CRTIMP long __cdecl _atol_l(const char *_Str,_locale_t _Locale);
#ifndef _CRT_ALGO_DEFINED
#define _CRT_ALGO_DEFINED
  void *__cdecl bsearch(const void *_Key,const void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__cdecl *_PtFuncCompare)(const void *,const void *));
  void __cdecl qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__cdecl *_PtFuncCompare)(const void *,const void *));
#endif
# 443 "C:/Msys2/mingw64/include/stdlib.h" 3
  unsigned short __cdecl _byteswap_ushort(unsigned short _Short);
  unsigned long __cdecl _byteswap_ulong (unsigned long _Long);
  __MINGW_EXTENSION unsigned __int64 __cdecl _byteswap_uint64(unsigned __int64 _Int64);
  div_t __cdecl div(int _Numerator,int _Denominator);
  char *__cdecl getenv(const char *_VarName) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP char *__cdecl _itoa(int _Value,char *_Dest,int _Radix);
  __MINGW_EXTENSION _CRTIMP char *__cdecl _i64toa(__int64 _Val,char *_DstBuf,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  __MINGW_EXTENSION _CRTIMP char *__cdecl _ui64toa(unsigned __int64 _Val,char *_DstBuf,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _atoi64(const char *_String);
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _atoi64_l(const char *_String,_locale_t _Locale);
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _strtoi64(const char *_String,char **_EndPtr,int _Radix);
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _strtoi64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  __MINGW_EXTENSION _CRTIMP unsigned __int64 __cdecl _strtoui64(const char *_String,char **_EndPtr,int _Radix);
  __MINGW_EXTENSION _CRTIMP unsigned __int64 __cdecl _strtoui64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  ldiv_t __cdecl ldiv(long _Numerator,long _Denominator);
  _CRTIMP char *__cdecl _ltoa(long _Value,char *_Dest,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  int __cdecl mblen(const char *_Ch,size_t _MaxCount);
  _CRTIMP int __cdecl _mblen_l(const char *_Ch,size_t _MaxCount,_locale_t _Locale);
  _CRTIMP size_t __cdecl _mbstrlen(const char *_Str);
  _CRTIMP size_t __cdecl _mbstrlen_l(const char *_Str,_locale_t _Locale);
  _CRTIMP size_t __cdecl _mbstrnlen(const char *_Str,size_t _MaxCount);
  _CRTIMP size_t __cdecl _mbstrnlen_l(const char *_Str,size_t _MaxCount,_locale_t _Locale);
  int __cdecl mbtowc(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes);
  _CRTIMP int __cdecl _mbtowc_l(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale);
  size_t __cdecl mbstowcs(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount);
  _CRTIMP size_t __cdecl _mbstowcs_l(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale);
  int __cdecl mkstemp(char *template_name);
  int __cdecl rand(void);
  _CRTIMP int __cdecl _set_error_mode(int _Mode);
  void __cdecl srand(unsigned int _Seed);
#if 0 /* disabled by -frewrite-includes */
#if defined(_POSIX) || defined(_POSIX_THREAD_SAFE_FUNCTIONS)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 474 "C:/Msys2/mingw64/include/stdlib.h" 3
  #ifndef rand_r
  #define rand_r(__seed) (__seed == __seed ? rand () : rand ())
  #endif
# 477 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 478 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifdef _CRT_RAND_S
  _SECIMP errno_t __cdecl rand_s(unsigned int *randomValue);
#endif
# 481 "C:/Msys2/mingw64/include/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__USE_MINGW_STRTOX)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 483 "C:/Msys2/mingw64/include/stdlib.h" 3
__mingw_ovr
double __cdecl __MINGW_NOTHROW strtod(const char * __restrict__ _Str,char ** __restrict__ _EndPtr)
{
  double __cdecl __mingw_strtod (const char * __restrict__, char ** __restrict__);
  return __mingw_strtod( _Str, _EndPtr);
}

__mingw_ovr
float __cdecl __MINGW_NOTHROW strtof(const char * __restrict__ _Str,char ** __restrict__ _EndPtr)
{
  float __cdecl __mingw_strtof (const char * __restrict__, char ** __restrict__);
  return __mingw_strtof( _Str, _EndPtr);
}

/* strtold is already an alias to __mingw_strtold */
#else
# 499 "C:/Msys2/mingw64/include/stdlib.h" 3
  double __cdecl __MINGW_NOTHROW strtod(const char * __restrict__ _Str,char ** __restrict__ _EndPtr);
  float __cdecl __MINGW_NOTHROW strtof(const char * __restrict__ nptr, char ** __restrict__ endptr);
#endif /* defined(__USE_MINGW_STRTOX) */
# 502 "C:/Msys2/mingw64/include/stdlib.h" 3
  long double __cdecl __MINGW_NOTHROW strtold(const char * __restrict__ , char ** __restrict__ );
#if 0 /* disabled by -frewrite-includes */
#if !defined __NO_ISOCEXT
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 504 "C:/Msys2/mingw64/include/stdlib.h" 3
  /* libmingwex.a provides a c99-compliant strtod() exported as __strtod() */
  extern double __cdecl __MINGW_NOTHROW
  __strtod (const char * __restrict__ , char ** __restrict__);
/* The UCRT version of strtod is C99 compliant, so we don't need to redirect it to the mingw version. */
#if 0 /* disabled by -frewrite-includes */
#if !defined(__USE_MINGW_STRTOX) && !defined(_UCRT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 509 "C:/Msys2/mingw64/include/stdlib.h" 3
#define strtod __strtod
#endif /* !defined(__USE_MINGW_STRTOX) */
# 511 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* __NO_ISOCEXT */
# 512 "C:/Msys2/mingw64/include/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined __NO_ISOCEXT  /* in libmingwex.a */
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 514 "C:/Msys2/mingw64/include/stdlib.h" 3
  float __cdecl __mingw_strtof (const char * __restrict__, char ** __restrict__);
  double __cdecl __mingw_strtod (const char * __restrict__, char ** __restrict__);
  long double __cdecl __mingw_strtold(const char * __restrict__, char ** __restrict__);
#endif /* __NO_ISOCEXT */
# 518 "C:/Msys2/mingw64/include/stdlib.h" 3
  _CRTIMP double __cdecl _strtod_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,_locale_t _Locale);
  long __cdecl strtol(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  _CRTIMP long __cdecl _strtol_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long __cdecl strtoul(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  _CRTIMP unsigned long __cdecl _strtoul_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
#ifndef _CRT_SYSTEM_DEFINED
#define _CRT_SYSTEM_DEFINED
  int __cdecl system(const char *_Command);
#endif
# 527 "C:/Msys2/mingw64/include/stdlib.h" 3
  _CRTIMP char *__cdecl _ultoa(unsigned long _Value,char *_Dest,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  int __cdecl wctomb(char *_MbCh,wchar_t _WCh) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP int __cdecl _wctomb_l(char *_MbCh,wchar_t _WCh,_locale_t _Locale) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  size_t __cdecl wcstombs(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP size_t __cdecl _wcstombs_l(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;

#ifndef _CRT_ALLOCATION_DEFINED
#define _CRT_ALLOCATION_DEFINED
  void *__cdecl calloc(size_t _NumOfElements,size_t _SizeOfElements);
  void __cdecl free(void *_Memory);
  void *__cdecl malloc(size_t _Size);
  void *__cdecl realloc(void *_Memory,size_t _NewSize);
  _CRTIMP void *__cdecl _recalloc(void *_Memory,size_t _Count,size_t _Size);
  _CRTIMP void __cdecl _aligned_free(void *_Memory);
  _CRTIMP void *__cdecl _aligned_malloc(size_t _Size,size_t _Alignment);
  _CRTIMP void *__cdecl _aligned_offset_malloc(size_t _Size,size_t _Alignment,size_t _Offset);
  _CRTIMP void *__cdecl _aligned_realloc(void *_Memory,size_t _Size,size_t _Alignment);
  _CRTIMP void *__cdecl _aligned_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment);
  _CRTIMP void *__cdecl _aligned_offset_realloc(void *_Memory,size_t _Size,size_t _Alignment,size_t _Offset);
  _CRTIMP void *__cdecl _aligned_offset_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment,size_t _Offset);
#endif
# 548 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _WSTDLIB_DEFINED
#define _WSTDLIB_DEFINED

  _CRTIMP wchar_t *__cdecl _itow(int _Value,wchar_t *_Dest,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP wchar_t *__cdecl _ltow(long _Value,wchar_t *_Dest,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP wchar_t *__cdecl _ultow(unsigned long _Value,wchar_t *_Dest,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;

  double __cdecl __mingw_wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr);
  float __cdecl __mingw_wcstof(const wchar_t * __restrict__ nptr, wchar_t ** __restrict__ endptr);
  long double __cdecl __mingw_wcstold(const wchar_t * __restrict__, wchar_t ** __restrict__);

#if 0 /* disabled by -frewrite-includes */
#if defined(__USE_MINGW_STRTOX)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 561 "C:/Msys2/mingw64/include/stdlib.h" 3
  __mingw_ovr
  double __cdecl wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr){
    return __mingw_wcstod(_Str,_EndPtr);
  }
  __mingw_ovr
  float __cdecl wcstof(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr){
    return __mingw_wcstof(_Str,_EndPtr);
  }
  /* wcstold is already a mingw implementation */
#else
# 571 "C:/Msys2/mingw64/include/stdlib.h" 3
  double __cdecl wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr);
  float __cdecl wcstof(const wchar_t * __restrict__ nptr, wchar_t ** __restrict__ endptr);
#endif /* defined(__USE_MINGW_STRTOX) */
# 574 "C:/Msys2/mingw64/include/stdlib.h" 3
#if 0 /* disabled by -frewrite-includes */
#if !defined __NO_ISOCEXT /* in libmingwex.a */
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 575 "C:/Msys2/mingw64/include/stdlib.h" 3
  long double __cdecl wcstold(const wchar_t * __restrict__, wchar_t ** __restrict__);
#endif /* __NO_ISOCEXT */
# 577 "C:/Msys2/mingw64/include/stdlib.h" 3
  _CRTIMP double __cdecl _wcstod_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,_locale_t _Locale);
  long __cdecl wcstol(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  _CRTIMP long __cdecl _wcstol_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long __cdecl wcstoul(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  _CRTIMP unsigned long __cdecl _wcstoul_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  _CRTIMP wchar_t *__cdecl _wgetenv(const wchar_t *_VarName) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
#ifndef _CRT_WSYSTEM_DEFINED
#define _CRT_WSYSTEM_DEFINED
  _CRTIMP int __cdecl _wsystem(const wchar_t *_Command);
#endif
# 587 "C:/Msys2/mingw64/include/stdlib.h" 3
  _CRTIMP double __cdecl _wtof(const wchar_t *_Str);
  _CRTIMP double __cdecl _wtof_l(const wchar_t *_Str,_locale_t _Locale);
  _CRTIMP int __cdecl _wtoi(const wchar_t *_Str);
  _CRTIMP int __cdecl _wtoi_l(const wchar_t *_Str,_locale_t _Locale);
  _CRTIMP long __cdecl _wtol(const wchar_t *_Str);
  _CRTIMP long __cdecl _wtol_l(const wchar_t *_Str,_locale_t _Locale);

  __MINGW_EXTENSION _CRTIMP wchar_t *__cdecl _i64tow(__int64 _Val,wchar_t *_DstBuf,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  __MINGW_EXTENSION _CRTIMP wchar_t *__cdecl _ui64tow(unsigned __int64 _Val,wchar_t *_DstBuf,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _wtoi64(const wchar_t *_Str);
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _wtoi64_l(const wchar_t *_Str,_locale_t _Locale);
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _wcstoi64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _wcstoi64_l(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);
  __MINGW_EXTENSION _CRTIMP unsigned __int64 __cdecl _wcstoui64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __MINGW_EXTENSION _CRTIMP unsigned __int64 __cdecl _wcstoui64_l(const wchar_t *_Str ,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);
#endif
# 603 "C:/Msys2/mingw64/include/stdlib.h" 3

  _CRTIMP int __cdecl _putenv(const char *_EnvString);
  _CRTIMP int __cdecl _wputenv(const wchar_t *_EnvString);

#ifndef _POSIX_
#define _CVTBUFSIZE (309+40)
  _CRTIMP char *__cdecl _fullpath(char *_FullPath,const char *_Path,size_t _SizeInBytes);
  _CRTIMP char *__cdecl _ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP char *__cdecl _fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP char *__cdecl _gcvt(double _Val,int _NumOfDigits,char *_DstBuf) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP int __cdecl _atodbl(_CRT_DOUBLE *_Result,char *_Str);
  _CRTIMP int __cdecl _atoldbl(_LDOUBLE *_Result,char *_Str);
  _CRTIMP int __cdecl _atoflt(_CRT_FLOAT *_Result,char *_Str);
  _CRTIMP int __cdecl _atodbl_l(_CRT_DOUBLE *_Result,char *_Str,_locale_t _Locale);
  _CRTIMP int __cdecl _atoldbl_l(_LDOUBLE *_Result,char *_Str,_locale_t _Locale);
  _CRTIMP int __cdecl _atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale);

#if 0 /* disabled by -frewrite-includes */
#if defined(__INTRIN_H_) || \
   (defined(_X86INTRIN_H_INCLUDED) && \
     ((__MINGW_GCC_VERSION >= 40902) || defined(__LP64__) || defined(_X86_)))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 623 "C:/Msys2/mingw64/include/stdlib.h" 3

/* We already have bug-free prototypes and inline definitions for _lrotl
   and _lrotr from either intrin.h or x86intrin.h. */

#else
# 628 "C:/Msys2/mingw64/include/stdlib.h" 3

/* Remove buggy x86intrin.h definitions if present (see gcc bug 61662). */
#undef _lrotr
#undef _lrotl

/* These prototypes work for x86, x64 (native Windows), and cyginwin64. */
unsigned long __cdecl _lrotl(unsigned long,int);
unsigned long __cdecl _lrotr(unsigned long,int);

#endif /* defined(__INTRIN_H_) || \
    (defined(_X86INTRIN_H_INCLUDED) && \
       ((__MINGW_GCC_VERSION >= 40902) || defined(__LP64__))) */
# 640 "C:/Msys2/mingw64/include/stdlib.h" 3

  _CRTIMP void __cdecl _makepath(char *_Path,const char *_Drive,const char *_Dir,const char *_Filename,const char *_Ext);
  _onexit_t __cdecl _onexit(_onexit_t _Func);

#ifndef _CRT_PERROR_DEFINED
#define _CRT_PERROR_DEFINED
  void __cdecl perror(const char *_ErrMsg);
#endif
# 648 "C:/Msys2/mingw64/include/stdlib.h" 3
#pragma push_macro ("_rotr64")
#pragma push_macro ("_rotl64")
#undef _rotl64
#undef _rotr64
  __MINGW_EXTENSION unsigned __int64 __cdecl _rotl64(unsigned __int64 _Val,int _Shift);
  __MINGW_EXTENSION unsigned __int64 __cdecl _rotr64(unsigned __int64 Value,int Shift);
#pragma pop_macro ("_rotl64")
#pragma pop_macro ("_rotr64")
#pragma push_macro ("_rotr")
#pragma push_macro ("_rotl")
#undef _rotr
#undef _rotl
  unsigned int __cdecl _rotr(unsigned int _Val,int _Shift);
  unsigned int __cdecl _rotl(unsigned int _Val,int _Shift);
#pragma pop_macro ("_rotl")
#pragma pop_macro ("_rotr")
  __MINGW_EXTENSION unsigned __int64 __cdecl _rotr64(unsigned __int64 _Val,int _Shift);
  _CRTIMP void __cdecl _searchenv(const char *_Filename,const char *_EnvVar,char *_ResultPath) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP void __cdecl _splitpath(const char *_FullPath,char *_Drive,char *_Dir,char *_Filename,char *_Ext) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP void __cdecl _swab(char *_Buf1,char *_Buf2,int _SizeInBytes);

#ifndef _WSTDLIBP_DEFINED
#define _WSTDLIBP_DEFINED
  _CRTIMP wchar_t *__cdecl _wfullpath(wchar_t *_FullPath,const wchar_t *_Path,size_t _SizeInWords);
  _CRTIMP void __cdecl _wmakepath(wchar_t *_ResultPath,const wchar_t *_Drive,const wchar_t *_Dir,const wchar_t *_Filename,const wchar_t *_Ext);
#ifndef _CRT_WPERROR_DEFINED
#define _CRT_WPERROR_DEFINED
  _CRTIMP void __cdecl _wperror(const wchar_t *_ErrMsg);
#endif
# 677 "C:/Msys2/mingw64/include/stdlib.h" 3
  _CRTIMP void __cdecl _wsearchenv(const wchar_t *_Filename,const wchar_t *_EnvVar,wchar_t *_ResultPath) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP void __cdecl _wsplitpath(const wchar_t *_FullPath,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,wchar_t *_Ext) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
#endif
# 680 "C:/Msys2/mingw64/include/stdlib.h" 3

  _CRTIMP void __cdecl _beep(unsigned _Frequency,unsigned _Duration) __MINGW_ATTRIB_DEPRECATED;
  /* Not to be confused with  _set_error_mode (int).  */
  _CRTIMP void __cdecl _seterrormode(int _Mode) __MINGW_ATTRIB_DEPRECATED;
  _CRTIMP void __cdecl _sleep(unsigned long _Duration) __MINGW_ATTRIB_DEPRECATED;
#endif
# 686 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef	NO_OLDNAMES
#ifndef _POSIX_
#if 0 /* disabled by -frewrite-includes */
#if 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 690 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef __cplusplus
#ifndef NOMINMAX
#ifndef max
#define max(a,b) (((a) > (b)) ? (a) : (b))
#endif
# 695 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef min
#define min(a,b) (((a) < (b)) ? (a) : (b))
#endif
# 698 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 699 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 700 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 701 "C:/Msys2/mingw64/include/stdlib.h" 3

#define sys_errlist _sys_errlist
#define sys_nerr _sys_nerr
#define environ _environ
  char *__cdecl ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  char *__cdecl fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  char *__cdecl gcvt(double _Val,int _NumOfDigits,char *_DstBuf) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  char *__cdecl itoa(int _Val,char *_DstBuf,int _Radix) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  char *__cdecl ltoa(long _Val,char *_DstBuf,int _Radix) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  int __cdecl putenv(const char *_EnvString) __MINGW_ATTRIB_DEPRECATED_MSVC2005;

#ifndef _CRT_SWAB_DEFINED
#define _CRT_SWAB_DEFINED  /* Also in unistd.h */
  void __cdecl swab(char *_Buf1,char *_Buf2,int _SizeInBytes) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
#endif
# 716 "C:/Msys2/mingw64/include/stdlib.h" 3

  char *__cdecl ultoa(unsigned long _Val,char *_Dstbuf,int _Radix) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  onexit_t __cdecl onexit(onexit_t _Func);
#endif
# 720 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 721 "C:/Msys2/mingw64/include/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined __NO_ISOCEXT /* externs in static libmingwex.a */
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 723 "C:/Msys2/mingw64/include/stdlib.h" 3

  typedef struct { __MINGW_EXTENSION long long quot, rem; } lldiv_t;

  __MINGW_EXTENSION lldiv_t __cdecl lldiv(long long, long long);

  __MINGW_EXTENSION long long __cdecl llabs(long long);
#ifndef __CRT__NO_INLINE
  __MINGW_EXTENSION __CRT_INLINE long long __cdecl llabs(long long _j) { return (_j >= 0 ? _j : -_j); }
#endif
# 732 "C:/Msys2/mingw64/include/stdlib.h" 3

  __MINGW_EXTENSION long long  __cdecl strtoll(const char * __restrict__, char ** __restrict, int);
  __MINGW_EXTENSION unsigned long long  __cdecl strtoull(const char * __restrict__, char ** __restrict__, int);

  /* these are stubs for MS _i64 versions */
  __MINGW_EXTENSION long long  __cdecl atoll (const char *);

#ifndef __STRICT_ANSI__
  __MINGW_EXTENSION long long  __cdecl wtoll (const wchar_t *);
  __MINGW_EXTENSION char *__cdecl lltoa (long long, char *, int);
  __MINGW_EXTENSION char *__cdecl ulltoa (unsigned long long , char *, int);
  __MINGW_EXTENSION wchar_t *__cdecl lltow (long long, wchar_t *, int);
  __MINGW_EXTENSION wchar_t *__cdecl ulltow (unsigned long long, wchar_t *, int);

  /* __CRT_INLINE using non-ansi functions */
#ifndef __CRT__NO_INLINE
  __MINGW_EXTENSION __CRT_INLINE long long  __cdecl atoll (const char * _c) { return _atoi64 (_c); }
  __MINGW_EXTENSION __CRT_INLINE char *__cdecl lltoa (long long _n, char * _c, int _i) { return _i64toa (_n, _c, _i); }
  __MINGW_EXTENSION __CRT_INLINE char *__cdecl ulltoa (unsigned long long _n, char * _c, int _i) { return _ui64toa (_n, _c, _i); }
  __MINGW_EXTENSION __CRT_INLINE long long  __cdecl wtoll (const wchar_t * _w) { return _wtoi64 (_w); }
  __MINGW_EXTENSION __CRT_INLINE wchar_t *__cdecl lltow (long long _n, wchar_t * _w, int _i) { return _i64tow (_n, _w, _i); }
  __MINGW_EXTENSION __CRT_INLINE wchar_t *__cdecl ulltow (unsigned long long _n, wchar_t * _w, int _i) { return _ui64tow (_n, _w, _i); }
#endif /* !__CRT__NO_INLINE */
# 755 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* (__STRICT_ANSI__)  */
# 756 "C:/Msys2/mingw64/include/stdlib.h" 3

#endif /* !__NO_ISOCEXT */
# 758 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifdef __cplusplus
}
#endif
# 762 "C:/Msys2/mingw64/include/stdlib.h" 3

#pragma pack(pop)

#if 0 /* expanded by -frewrite-includes */
#include <sec_api/stdlib_s.h>
#endif /* expanded by -frewrite-includes */
# 765 "C:/Msys2/mingw64/include/stdlib.h" 3
# 1 "C:/Msys2/mingw64/include/sec_api/stdlib_s.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _INC_STDLIB_S
#define _INC_STDLIB_S

#if 0 /* expanded by -frewrite-includes */
#include <stdlib.h>
#endif /* expanded by -frewrite-includes */
# 9 "C:/Msys2/mingw64/include/sec_api/stdlib_s.h" 3
# 1 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 1 3
// -*- C++ -*- compatibility header.

// Copyright (C) 2002-2021 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file stdlib.h
 *  This is a Standard C++ Library header.
 */

#if 0 /* disabled by -frewrite-includes */
#if !defined __cplusplus || defined _GLIBCXX_INCLUDE_NEXT_C_HEADERS
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 30 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
#if 0 /* expanded by -frewrite-includes */
# include_next <stdlib.h>
#endif /* expanded by -frewrite-includes */
# 30 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
# 1 "C:/Msys2/mingw64/include/stdlib.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _INC_STDLIB
#define _INC_STDLIB

#if 0 /* expanded by -frewrite-includes */
#include <corecrt.h>
#endif /* expanded by -frewrite-includes */
# 9 "C:/Msys2/mingw64/include/stdlib.h" 3
# 10 "C:/Msys2/mingw64/include/stdlib.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <corecrt_wstdlib.h>
#endif /* expanded by -frewrite-includes */
# 10 "C:/Msys2/mingw64/include/stdlib.h" 3
# 11 "C:/Msys2/mingw64/include/stdlib.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <limits.h>
#endif /* expanded by -frewrite-includes */
# 11 "C:/Msys2/mingw64/include/stdlib.h" 3
# 12 "C:/Msys2/mingw64/include/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __USE_MINGW_ANSI_STDIO && !defined (__USE_MINGW_STRTOX) && !defined(_CRTBLD)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 14 "C:/Msys2/mingw64/include/stdlib.h" 3
#define __USE_MINGW_STRTOX 1
#endif
# 16 "C:/Msys2/mingw64/include/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__LIBMSVCRT__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 18 "C:/Msys2/mingw64/include/stdlib.h" 3
/* When building mingw-w64, this should be blank.  */
#define _SECIMP
#else
# 21 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef _SECIMP
#define _SECIMP __declspec(dllimport)
#endif /* _SECIMP */
# 24 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* defined(_CRTBLD) || defined(__LIBMSVCRT__) */
# 25 "C:/Msys2/mingw64/include/stdlib.h" 3

#pragma pack(push,_CRT_PACKING)

#ifdef __cplusplus
extern "C" {
#endif
# 31 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef NULL
#ifdef __cplusplus
#ifndef _WIN64
#define NULL 0
#else
# 37 "C:/Msys2/mingw64/include/stdlib.h" 3
#define NULL 0LL
#endif  /* W64 */
# 39 "C:/Msys2/mingw64/include/stdlib.h" 3
#else
# 40 "C:/Msys2/mingw64/include/stdlib.h" 3
#define NULL ((void *)0)
#endif
# 42 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 43 "C:/Msys2/mingw64/include/stdlib.h" 3

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

#ifndef _ONEXIT_T_DEFINED
#define _ONEXIT_T_DEFINED

  typedef int (__cdecl *_onexit_t)(void);

#ifndef	NO_OLDNAMES
#define onexit_t _onexit_t
#endif
# 55 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 56 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _DIV_T_DEFINED
#define _DIV_T_DEFINED

  typedef struct _div_t {
    int quot;
    int rem;
  } div_t;

  typedef struct _ldiv_t {
    long quot;
    long rem;
  } ldiv_t;
#endif
# 70 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _CRT_DOUBLE_DEC
#define _CRT_DOUBLE_DEC

#pragma pack(4)
  typedef struct {
    unsigned char ld[10];
  } _LDOUBLE;
#pragma pack()

#define _PTR_LD(x) ((unsigned char *)(&(x)->ld))

  typedef struct {
    double x;
  } _CRT_DOUBLE;

  typedef struct {
    float f;
  } _CRT_FLOAT;

#pragma push_macro("long")
#undef long

  typedef struct {
    long double x;
  } _LONGDOUBLE;

#pragma pop_macro("long")

#pragma pack(4)
  typedef struct {
    unsigned char ld12[12];
  } _LDBL12;
#pragma pack()
#endif
# 105 "C:/Msys2/mingw64/include/stdlib.h" 3

#define RAND_MAX 0x7fff

#ifndef MB_CUR_MAX
#define MB_CUR_MAX ___mb_cur_max_func()
#ifndef __mb_cur_max
#ifdef _MSVCRT_
  extern int __mb_cur_max;
#define __mb_cur_max	__mb_cur_max
#else
# 115 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef _UCRT
  extern int * __MINGW_IMP_SYMBOL(__mb_cur_max);
#endif
# 118 "C:/Msys2/mingw64/include/stdlib.h" 3
#define __mb_cur_max	(___mb_cur_max_func())
#endif
# 120 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 121 "C:/Msys2/mingw64/include/stdlib.h" 3
_CRTIMP int __cdecl ___mb_cur_max_func(void);
#endif
# 123 "C:/Msys2/mingw64/include/stdlib.h" 3

#define __max(a,b) (((a) > (b)) ? (a) : (b))
#define __min(a,b) (((a) < (b)) ? (a) : (b))

#define _MAX_PATH 260
#define _MAX_DRIVE 3
#define _MAX_DIR 256
#define _MAX_FNAME 256
#define _MAX_EXT 256

#define _OUT_TO_DEFAULT 0
#define _OUT_TO_STDERR 1
#define _OUT_TO_MSGBOX 2
#define _REPORT_ERRMODE 3

#define _WRITE_ABORT_MSG 0x1
#define _CALL_REPORTFAULT 0x2

#define _MAX_ENV 32767

  typedef void (__cdecl *_purecall_handler)(void);

  _CRTIMP _purecall_handler __cdecl _set_purecall_handler(_purecall_handler _Handler);
  _CRTIMP _purecall_handler __cdecl _get_purecall_handler(void);

  typedef void (__cdecl *_invalid_parameter_handler)(const wchar_t *,const wchar_t *,const wchar_t *,unsigned int,uintptr_t);
  _CRTIMP _invalid_parameter_handler __cdecl _set_invalid_parameter_handler(_invalid_parameter_handler _Handler);
  _CRTIMP _invalid_parameter_handler __cdecl _get_invalid_parameter_handler(void);

#ifndef _CRT_ERRNO_DEFINED
#define _CRT_ERRNO_DEFINED
  _CRTIMP extern int *__cdecl _errno(void);
#define errno (*_errno())
  errno_t __cdecl _set_errno(int _Value);
  errno_t __cdecl _get_errno(int *_Value);
#endif
# 159 "C:/Msys2/mingw64/include/stdlib.h" 3
  _CRTIMP unsigned long *__cdecl __doserrno(void);
#define _doserrno (*__doserrno())
  errno_t __cdecl _set_doserrno(unsigned long _Value);
  errno_t __cdecl _get_doserrno(unsigned long *_Value);
#ifdef _MSVCRT_
  extern char *_sys_errlist[];
  extern int _sys_nerr;
#else
# 167 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifdef _UCRT
  _CRTIMP char **__cdecl __sys_errlist(void);
  _CRTIMP int *__cdecl __sys_nerr(void);
#define _sys_nerr (*__sys_nerr())
#define _sys_errlist (__sys_errlist())
#else
# 173 "C:/Msys2/mingw64/include/stdlib.h" 3
  extern __declspec(dllimport) char *_sys_errlist[1];
  extern __declspec(dllimport) int _sys_nerr;
#endif /* !_UCRT */
# 176 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 177 "C:/Msys2/mingw64/include/stdlib.h" 3

  /* We have a fallback definition of __p___argv and __p__fmode for
     msvcrt versions that lack it. */
  _CRTIMP char ***__cdecl __p___argv(void);
  _CRTIMP int *__cdecl __p__fmode(void);
#if 0 /* disabled by -frewrite-includes */
#if (defined(_X86_) && !defined(__x86_64)) || defined(_UCRT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 183 "C:/Msys2/mingw64/include/stdlib.h" 3
  _CRTIMP int *__cdecl __p___argc(void);
  _CRTIMP wchar_t ***__cdecl __p___wargv(void);
  _CRTIMP char ***__cdecl __p__environ(void);
  _CRTIMP wchar_t ***__cdecl __p__wenviron(void);
  _CRTIMP char **__cdecl __p__pgmptr(void);
  _CRTIMP wchar_t **__cdecl __p__wpgmptr(void);
#endif
# 190 "C:/Msys2/mingw64/include/stdlib.h" 3

  errno_t __cdecl _get_pgmptr(char **_Value);
  errno_t __cdecl _get_wpgmptr(wchar_t **_Value);
  _CRTIMP errno_t __cdecl _set_fmode(int _Mode);
  _CRTIMP errno_t __cdecl _get_fmode(int *_PMode);

#ifndef _fmode
#define _fmode (* __p__fmode())
#endif
# 199 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifdef _MSVCRT_

#ifndef __argc
  extern int __argc;
#endif
# 205 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef __argv
  extern char **__argv;
#endif
# 208 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef __wargv
  extern wchar_t **__wargv;
#endif
# 211 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _POSIX_
#ifndef _environ
  extern char **_environ;
#endif
# 216 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef _wenviron
  extern wchar_t **_wenviron;
#endif
# 219 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* !_POSIX_ */
# 220 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _pgmptr
  extern char *_pgmptr;
#endif
# 224 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _wpgmptr
  extern wchar_t *_wpgmptr;
#endif
# 228 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _osplatform
  extern unsigned int _osplatform;
#endif
# 232 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _osver
  extern unsigned int _osver;
#endif
# 236 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _winver
  extern unsigned int _winver;
#endif
# 240 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _winmajor
  extern unsigned int _winmajor;
#endif
# 244 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _winminor
  extern unsigned int _winminor;
#endif
# 248 "C:/Msys2/mingw64/include/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(_UCRT)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 250 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef __argc
#define __argc (* __p___argc())
#endif
# 254 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef __argv
#define __argv (* __p___argv())
#endif
# 257 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef __wargv
#define __wargv (* __p___wargv())
#endif
# 260 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _POSIX_
#ifndef _environ
#define _environ (* __p__environ())
#endif
# 265 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _wenviron
#define _wenviron (* __p__wenviron())
#endif
# 269 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* !_POSIX_ */
# 270 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _pgmptr
#define _pgmptr (* __p__pgmptr())
#endif
# 274 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _wpgmptr
#define _wpgmptr (* __p__wpgmptr())
#endif
# 278 "C:/Msys2/mingw64/include/stdlib.h" 3

#else /* _UCRT */
# 280 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef __argc
  extern int * __MINGW_IMP_SYMBOL(__argc);
#define __argc (* __MINGW_IMP_SYMBOL(__argc))
#endif
# 285 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef __argv
  extern char *** __MINGW_IMP_SYMBOL(__argv);
#define __argv	(* __p___argv())
#endif
# 289 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef __wargv
  extern wchar_t *** __MINGW_IMP_SYMBOL(__wargv);
#define __wargv (* __MINGW_IMP_SYMBOL(__wargv))
#endif
# 293 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _POSIX_
#if 0 /* disabled by -frewrite-includes */
#if (defined(_ARM_) || defined(__arm__) || defined(_ARM64_) || defined(__aarch64__))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 296 "C:/Msys2/mingw64/include/stdlib.h" 3
  /* The plain msvcrt.dll for arm/aarch64 (and msvcr120_app.dll for arm) lacks
   * _environ/_wenviron, but has these functions instead. */
  _CRTIMP void __cdecl _get_environ(char ***);
  _CRTIMP void __cdecl _get_wenviron(wchar_t ***);

  static __inline char **__get_environ_ptr(void) {
    char **__ptr;
    _get_environ(&__ptr);
    return __ptr;
  }

  static __inline wchar_t **__get_wenviron_ptr(void) {
    wchar_t **__ptr;
    _get_wenviron(&__ptr);
    return __ptr;
  }

#ifndef _environ
#define _environ (__get_environ_ptr())
#endif
# 316 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _wenviron
#define _wenviron (__get_wenviron_ptr())
#endif
# 320 "C:/Msys2/mingw64/include/stdlib.h" 3
#else /* ARM/ARM64 */
# 321 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef _environ
  extern char *** __MINGW_IMP_SYMBOL(_environ);
#define _environ (* __MINGW_IMP_SYMBOL(_environ))
#endif
# 325 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _wenviron
  extern wchar_t *** __MINGW_IMP_SYMBOL(_wenviron);
#define _wenviron (* __MINGW_IMP_SYMBOL(_wenviron))
#endif
# 330 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* !ARM/ARM64 */
# 331 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* !_POSIX_ */
# 332 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _pgmptr
  extern char ** __MINGW_IMP_SYMBOL(_pgmptr);
#define _pgmptr	(* __MINGW_IMP_SYMBOL(_pgmptr))
#endif
# 337 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _wpgmptr
  extern wchar_t ** __MINGW_IMP_SYMBOL(_wpgmptr);
#define _wpgmptr (* __MINGW_IMP_SYMBOL(_wpgmptr))
#endif
# 342 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _osplatform
  extern unsigned int * __MINGW_IMP_SYMBOL(_osplatform);
#define _osplatform (* __MINGW_IMP_SYMBOL(_osplatform))
#endif
# 347 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _osver
  extern unsigned int * __MINGW_IMP_SYMBOL(_osver);
#define _osver	(* __MINGW_IMP_SYMBOL(_osver))
#endif
# 352 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _winver
  extern unsigned int * __MINGW_IMP_SYMBOL(_winver);
#define _winver	(* __MINGW_IMP_SYMBOL(_winver))
#endif
# 357 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _winmajor
  extern unsigned int * __MINGW_IMP_SYMBOL(_winmajor);
#define _winmajor (* __MINGW_IMP_SYMBOL(_winmajor))
#endif
# 362 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _winminor
  extern unsigned int * __MINGW_IMP_SYMBOL(_winminor);
#define _winminor (* __MINGW_IMP_SYMBOL(_winminor))
#endif
# 367 "C:/Msys2/mingw64/include/stdlib.h" 3

#endif /* !_MSVCRT_ && !_UCRT */
# 369 "C:/Msys2/mingw64/include/stdlib.h" 3

  errno_t __cdecl _get_osplatform(unsigned int *_Value);
  errno_t __cdecl _get_osver(unsigned int *_Value);
  errno_t __cdecl _get_winver(unsigned int *_Value);
  errno_t __cdecl _get_winmajor(unsigned int *_Value);
  errno_t __cdecl _get_winminor(unsigned int *_Value);
#ifndef _countof
#ifndef __cplusplus
#define _countof(_Array) (sizeof(_Array) / sizeof(_Array[0]))
#else
# 379 "C:/Msys2/mingw64/include/stdlib.h" 3
  extern "C++" {
    template <typename _CountofType,size_t _SizeOfArray> char (*__countof_helper(UNALIGNED _CountofType (&_Array)[_SizeOfArray]))[_SizeOfArray];
#define _countof(_Array) sizeof(*__countof_helper(_Array))
  }
#endif
# 384 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 385 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _CRT_TERMINATE_DEFINED
#define _CRT_TERMINATE_DEFINED
  void __cdecl __MINGW_NOTHROW exit(int _Code) __MINGW_ATTRIB_NORETURN;
  void __cdecl __MINGW_NOTHROW _exit(int _Code) __MINGW_ATTRIB_NORETURN;
#ifdef _UCRT
  void __cdecl __MINGW_NOTHROW quick_exit(int _Code) __MINGW_ATTRIB_NORETURN;
#endif
# 393 "C:/Msys2/mingw64/include/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined __NO_ISOCEXT /* extern stub in static libmingwex.a */
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 395 "C:/Msys2/mingw64/include/stdlib.h" 3
  /* C99 function name */
  void __cdecl _Exit(int) __MINGW_ATTRIB_NORETURN;
#ifndef __CRT__NO_INLINE
  __CRT_INLINE __MINGW_ATTRIB_NORETURN void  __cdecl _Exit(int status)
  {  _exit(status); }
#endif /* !__CRT__NO_INLINE */
# 401 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* Not  __NO_ISOCEXT */
# 402 "C:/Msys2/mingw64/include/stdlib.h" 3

#pragma push_macro("abort")
#undef abort
  void __cdecl __MINGW_ATTRIB_NORETURN abort(void);
#pragma pop_macro("abort")

#endif /* _CRT_TERMINATE_DEFINED */
# 409 "C:/Msys2/mingw64/include/stdlib.h" 3

  _CRTIMP unsigned int __cdecl _set_abort_behavior(unsigned int _Flags,unsigned int _Mask);

#ifndef _CRT_ABS_DEFINED
#define _CRT_ABS_DEFINED
  int __cdecl abs(int _X);
  long __cdecl labs(long _X);
#endif
# 417 "C:/Msys2/mingw64/include/stdlib.h" 3

  __MINGW_EXTENSION __int64 __cdecl _abs64(__int64);
#ifdef __MINGW_INTRIN_INLINE
  __MINGW_INTRIN_INLINE __int64 __cdecl _abs64(__int64 x) {
    return __builtin_llabs(x);
  }
#endif
# 424 "C:/Msys2/mingw64/include/stdlib.h" 3

  int __cdecl atexit(void (__cdecl *)(void));
#ifdef _UCRT
  int __cdecl at_quick_exit(void (__cdecl *)(void));
#endif
# 429 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef _CRT_ATOF_DEFINED
#define _CRT_ATOF_DEFINED
  double __cdecl atof(const char *_String);
  double __cdecl _atof_l(const char *_String,_locale_t _Locale);
#endif
# 434 "C:/Msys2/mingw64/include/stdlib.h" 3
  int __cdecl atoi(const char *_Str);
  _CRTIMP int __cdecl _atoi_l(const char *_Str,_locale_t _Locale);
  long __cdecl atol(const char *_Str);
  _CRTIMP long __cdecl _atol_l(const char *_Str,_locale_t _Locale);
#ifndef _CRT_ALGO_DEFINED
#define _CRT_ALGO_DEFINED
  void *__cdecl bsearch(const void *_Key,const void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__cdecl *_PtFuncCompare)(const void *,const void *));
  void __cdecl qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__cdecl *_PtFuncCompare)(const void *,const void *));
#endif
# 443 "C:/Msys2/mingw64/include/stdlib.h" 3
  unsigned short __cdecl _byteswap_ushort(unsigned short _Short);
  unsigned long __cdecl _byteswap_ulong (unsigned long _Long);
  __MINGW_EXTENSION unsigned __int64 __cdecl _byteswap_uint64(unsigned __int64 _Int64);
  div_t __cdecl div(int _Numerator,int _Denominator);
  char *__cdecl getenv(const char *_VarName) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP char *__cdecl _itoa(int _Value,char *_Dest,int _Radix);
  __MINGW_EXTENSION _CRTIMP char *__cdecl _i64toa(__int64 _Val,char *_DstBuf,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  __MINGW_EXTENSION _CRTIMP char *__cdecl _ui64toa(unsigned __int64 _Val,char *_DstBuf,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _atoi64(const char *_String);
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _atoi64_l(const char *_String,_locale_t _Locale);
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _strtoi64(const char *_String,char **_EndPtr,int _Radix);
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _strtoi64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  __MINGW_EXTENSION _CRTIMP unsigned __int64 __cdecl _strtoui64(const char *_String,char **_EndPtr,int _Radix);
  __MINGW_EXTENSION _CRTIMP unsigned __int64 __cdecl _strtoui64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  ldiv_t __cdecl ldiv(long _Numerator,long _Denominator);
  _CRTIMP char *__cdecl _ltoa(long _Value,char *_Dest,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  int __cdecl mblen(const char *_Ch,size_t _MaxCount);
  _CRTIMP int __cdecl _mblen_l(const char *_Ch,size_t _MaxCount,_locale_t _Locale);
  _CRTIMP size_t __cdecl _mbstrlen(const char *_Str);
  _CRTIMP size_t __cdecl _mbstrlen_l(const char *_Str,_locale_t _Locale);
  _CRTIMP size_t __cdecl _mbstrnlen(const char *_Str,size_t _MaxCount);
  _CRTIMP size_t __cdecl _mbstrnlen_l(const char *_Str,size_t _MaxCount,_locale_t _Locale);
  int __cdecl mbtowc(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes);
  _CRTIMP int __cdecl _mbtowc_l(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale);
  size_t __cdecl mbstowcs(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount);
  _CRTIMP size_t __cdecl _mbstowcs_l(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale);
  int __cdecl mkstemp(char *template_name);
  int __cdecl rand(void);
  _CRTIMP int __cdecl _set_error_mode(int _Mode);
  void __cdecl srand(unsigned int _Seed);
#if 0 /* disabled by -frewrite-includes */
#if defined(_POSIX) || defined(_POSIX_THREAD_SAFE_FUNCTIONS)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 474 "C:/Msys2/mingw64/include/stdlib.h" 3
  #ifndef rand_r
  #define rand_r(__seed) (__seed == __seed ? rand () : rand ())
  #endif
# 477 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 478 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifdef _CRT_RAND_S
  _SECIMP errno_t __cdecl rand_s(unsigned int *randomValue);
#endif
# 481 "C:/Msys2/mingw64/include/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__USE_MINGW_STRTOX)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 483 "C:/Msys2/mingw64/include/stdlib.h" 3
__mingw_ovr
double __cdecl __MINGW_NOTHROW strtod(const char * __restrict__ _Str,char ** __restrict__ _EndPtr)
{
  double __cdecl __mingw_strtod (const char * __restrict__, char ** __restrict__);
  return __mingw_strtod( _Str, _EndPtr);
}

__mingw_ovr
float __cdecl __MINGW_NOTHROW strtof(const char * __restrict__ _Str,char ** __restrict__ _EndPtr)
{
  float __cdecl __mingw_strtof (const char * __restrict__, char ** __restrict__);
  return __mingw_strtof( _Str, _EndPtr);
}

/* strtold is already an alias to __mingw_strtold */
#else
# 499 "C:/Msys2/mingw64/include/stdlib.h" 3
  double __cdecl __MINGW_NOTHROW strtod(const char * __restrict__ _Str,char ** __restrict__ _EndPtr);
  float __cdecl __MINGW_NOTHROW strtof(const char * __restrict__ nptr, char ** __restrict__ endptr);
#endif /* defined(__USE_MINGW_STRTOX) */
# 502 "C:/Msys2/mingw64/include/stdlib.h" 3
  long double __cdecl __MINGW_NOTHROW strtold(const char * __restrict__ , char ** __restrict__ );
#if 0 /* disabled by -frewrite-includes */
#if !defined __NO_ISOCEXT
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 504 "C:/Msys2/mingw64/include/stdlib.h" 3
  /* libmingwex.a provides a c99-compliant strtod() exported as __strtod() */
  extern double __cdecl __MINGW_NOTHROW
  __strtod (const char * __restrict__ , char ** __restrict__);
/* The UCRT version of strtod is C99 compliant, so we don't need to redirect it to the mingw version. */
#if 0 /* disabled by -frewrite-includes */
#if !defined(__USE_MINGW_STRTOX) && !defined(_UCRT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 509 "C:/Msys2/mingw64/include/stdlib.h" 3
#define strtod __strtod
#endif /* !defined(__USE_MINGW_STRTOX) */
# 511 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* __NO_ISOCEXT */
# 512 "C:/Msys2/mingw64/include/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined __NO_ISOCEXT  /* in libmingwex.a */
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 514 "C:/Msys2/mingw64/include/stdlib.h" 3
  float __cdecl __mingw_strtof (const char * __restrict__, char ** __restrict__);
  double __cdecl __mingw_strtod (const char * __restrict__, char ** __restrict__);
  long double __cdecl __mingw_strtold(const char * __restrict__, char ** __restrict__);
#endif /* __NO_ISOCEXT */
# 518 "C:/Msys2/mingw64/include/stdlib.h" 3
  _CRTIMP double __cdecl _strtod_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,_locale_t _Locale);
  long __cdecl strtol(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  _CRTIMP long __cdecl _strtol_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long __cdecl strtoul(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  _CRTIMP unsigned long __cdecl _strtoul_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
#ifndef _CRT_SYSTEM_DEFINED
#define _CRT_SYSTEM_DEFINED
  int __cdecl system(const char *_Command);
#endif
# 527 "C:/Msys2/mingw64/include/stdlib.h" 3
  _CRTIMP char *__cdecl _ultoa(unsigned long _Value,char *_Dest,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  int __cdecl wctomb(char *_MbCh,wchar_t _WCh) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP int __cdecl _wctomb_l(char *_MbCh,wchar_t _WCh,_locale_t _Locale) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  size_t __cdecl wcstombs(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP size_t __cdecl _wcstombs_l(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;

#ifndef _CRT_ALLOCATION_DEFINED
#define _CRT_ALLOCATION_DEFINED
  void *__cdecl calloc(size_t _NumOfElements,size_t _SizeOfElements);
  void __cdecl free(void *_Memory);
  void *__cdecl malloc(size_t _Size);
  void *__cdecl realloc(void *_Memory,size_t _NewSize);
  _CRTIMP void *__cdecl _recalloc(void *_Memory,size_t _Count,size_t _Size);
  _CRTIMP void __cdecl _aligned_free(void *_Memory);
  _CRTIMP void *__cdecl _aligned_malloc(size_t _Size,size_t _Alignment);
  _CRTIMP void *__cdecl _aligned_offset_malloc(size_t _Size,size_t _Alignment,size_t _Offset);
  _CRTIMP void *__cdecl _aligned_realloc(void *_Memory,size_t _Size,size_t _Alignment);
  _CRTIMP void *__cdecl _aligned_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment);
  _CRTIMP void *__cdecl _aligned_offset_realloc(void *_Memory,size_t _Size,size_t _Alignment,size_t _Offset);
  _CRTIMP void *__cdecl _aligned_offset_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment,size_t _Offset);
#endif
# 548 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _WSTDLIB_DEFINED
#define _WSTDLIB_DEFINED

  _CRTIMP wchar_t *__cdecl _itow(int _Value,wchar_t *_Dest,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP wchar_t *__cdecl _ltow(long _Value,wchar_t *_Dest,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP wchar_t *__cdecl _ultow(unsigned long _Value,wchar_t *_Dest,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;

  double __cdecl __mingw_wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr);
  float __cdecl __mingw_wcstof(const wchar_t * __restrict__ nptr, wchar_t ** __restrict__ endptr);
  long double __cdecl __mingw_wcstold(const wchar_t * __restrict__, wchar_t ** __restrict__);

#if 0 /* disabled by -frewrite-includes */
#if defined(__USE_MINGW_STRTOX)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 561 "C:/Msys2/mingw64/include/stdlib.h" 3
  __mingw_ovr
  double __cdecl wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr){
    return __mingw_wcstod(_Str,_EndPtr);
  }
  __mingw_ovr
  float __cdecl wcstof(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr){
    return __mingw_wcstof(_Str,_EndPtr);
  }
  /* wcstold is already a mingw implementation */
#else
# 571 "C:/Msys2/mingw64/include/stdlib.h" 3
  double __cdecl wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr);
  float __cdecl wcstof(const wchar_t * __restrict__ nptr, wchar_t ** __restrict__ endptr);
#endif /* defined(__USE_MINGW_STRTOX) */
# 574 "C:/Msys2/mingw64/include/stdlib.h" 3
#if 0 /* disabled by -frewrite-includes */
#if !defined __NO_ISOCEXT /* in libmingwex.a */
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 575 "C:/Msys2/mingw64/include/stdlib.h" 3
  long double __cdecl wcstold(const wchar_t * __restrict__, wchar_t ** __restrict__);
#endif /* __NO_ISOCEXT */
# 577 "C:/Msys2/mingw64/include/stdlib.h" 3
  _CRTIMP double __cdecl _wcstod_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,_locale_t _Locale);
  long __cdecl wcstol(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  _CRTIMP long __cdecl _wcstol_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long __cdecl wcstoul(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  _CRTIMP unsigned long __cdecl _wcstoul_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  _CRTIMP wchar_t *__cdecl _wgetenv(const wchar_t *_VarName) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
#ifndef _CRT_WSYSTEM_DEFINED
#define _CRT_WSYSTEM_DEFINED
  _CRTIMP int __cdecl _wsystem(const wchar_t *_Command);
#endif
# 587 "C:/Msys2/mingw64/include/stdlib.h" 3
  _CRTIMP double __cdecl _wtof(const wchar_t *_Str);
  _CRTIMP double __cdecl _wtof_l(const wchar_t *_Str,_locale_t _Locale);
  _CRTIMP int __cdecl _wtoi(const wchar_t *_Str);
  _CRTIMP int __cdecl _wtoi_l(const wchar_t *_Str,_locale_t _Locale);
  _CRTIMP long __cdecl _wtol(const wchar_t *_Str);
  _CRTIMP long __cdecl _wtol_l(const wchar_t *_Str,_locale_t _Locale);

  __MINGW_EXTENSION _CRTIMP wchar_t *__cdecl _i64tow(__int64 _Val,wchar_t *_DstBuf,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  __MINGW_EXTENSION _CRTIMP wchar_t *__cdecl _ui64tow(unsigned __int64 _Val,wchar_t *_DstBuf,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _wtoi64(const wchar_t *_Str);
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _wtoi64_l(const wchar_t *_Str,_locale_t _Locale);
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _wcstoi64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _wcstoi64_l(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);
  __MINGW_EXTENSION _CRTIMP unsigned __int64 __cdecl _wcstoui64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __MINGW_EXTENSION _CRTIMP unsigned __int64 __cdecl _wcstoui64_l(const wchar_t *_Str ,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);
#endif
# 603 "C:/Msys2/mingw64/include/stdlib.h" 3

  _CRTIMP int __cdecl _putenv(const char *_EnvString);
  _CRTIMP int __cdecl _wputenv(const wchar_t *_EnvString);

#ifndef _POSIX_
#define _CVTBUFSIZE (309+40)
  _CRTIMP char *__cdecl _fullpath(char *_FullPath,const char *_Path,size_t _SizeInBytes);
  _CRTIMP char *__cdecl _ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP char *__cdecl _fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP char *__cdecl _gcvt(double _Val,int _NumOfDigits,char *_DstBuf) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP int __cdecl _atodbl(_CRT_DOUBLE *_Result,char *_Str);
  _CRTIMP int __cdecl _atoldbl(_LDOUBLE *_Result,char *_Str);
  _CRTIMP int __cdecl _atoflt(_CRT_FLOAT *_Result,char *_Str);
  _CRTIMP int __cdecl _atodbl_l(_CRT_DOUBLE *_Result,char *_Str,_locale_t _Locale);
  _CRTIMP int __cdecl _atoldbl_l(_LDOUBLE *_Result,char *_Str,_locale_t _Locale);
  _CRTIMP int __cdecl _atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale);

#if 0 /* disabled by -frewrite-includes */
#if defined(__INTRIN_H_) || \
   (defined(_X86INTRIN_H_INCLUDED) && \
     ((__MINGW_GCC_VERSION >= 40902) || defined(__LP64__) || defined(_X86_)))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 623 "C:/Msys2/mingw64/include/stdlib.h" 3

/* We already have bug-free prototypes and inline definitions for _lrotl
   and _lrotr from either intrin.h or x86intrin.h. */

#else
# 628 "C:/Msys2/mingw64/include/stdlib.h" 3

/* Remove buggy x86intrin.h definitions if present (see gcc bug 61662). */
#undef _lrotr
#undef _lrotl

/* These prototypes work for x86, x64 (native Windows), and cyginwin64. */
unsigned long __cdecl _lrotl(unsigned long,int);
unsigned long __cdecl _lrotr(unsigned long,int);

#endif /* defined(__INTRIN_H_) || \
    (defined(_X86INTRIN_H_INCLUDED) && \
       ((__MINGW_GCC_VERSION >= 40902) || defined(__LP64__))) */
# 640 "C:/Msys2/mingw64/include/stdlib.h" 3

  _CRTIMP void __cdecl _makepath(char *_Path,const char *_Drive,const char *_Dir,const char *_Filename,const char *_Ext);
  _onexit_t __cdecl _onexit(_onexit_t _Func);

#ifndef _CRT_PERROR_DEFINED
#define _CRT_PERROR_DEFINED
  void __cdecl perror(const char *_ErrMsg);
#endif
# 648 "C:/Msys2/mingw64/include/stdlib.h" 3
#pragma push_macro ("_rotr64")
#pragma push_macro ("_rotl64")
#undef _rotl64
#undef _rotr64
  __MINGW_EXTENSION unsigned __int64 __cdecl _rotl64(unsigned __int64 _Val,int _Shift);
  __MINGW_EXTENSION unsigned __int64 __cdecl _rotr64(unsigned __int64 Value,int Shift);
#pragma pop_macro ("_rotl64")
#pragma pop_macro ("_rotr64")
#pragma push_macro ("_rotr")
#pragma push_macro ("_rotl")
#undef _rotr
#undef _rotl
  unsigned int __cdecl _rotr(unsigned int _Val,int _Shift);
  unsigned int __cdecl _rotl(unsigned int _Val,int _Shift);
#pragma pop_macro ("_rotl")
#pragma pop_macro ("_rotr")
  __MINGW_EXTENSION unsigned __int64 __cdecl _rotr64(unsigned __int64 _Val,int _Shift);
  _CRTIMP void __cdecl _searchenv(const char *_Filename,const char *_EnvVar,char *_ResultPath) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP void __cdecl _splitpath(const char *_FullPath,char *_Drive,char *_Dir,char *_Filename,char *_Ext) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP void __cdecl _swab(char *_Buf1,char *_Buf2,int _SizeInBytes);

#ifndef _WSTDLIBP_DEFINED
#define _WSTDLIBP_DEFINED
  _CRTIMP wchar_t *__cdecl _wfullpath(wchar_t *_FullPath,const wchar_t *_Path,size_t _SizeInWords);
  _CRTIMP void __cdecl _wmakepath(wchar_t *_ResultPath,const wchar_t *_Drive,const wchar_t *_Dir,const wchar_t *_Filename,const wchar_t *_Ext);
#ifndef _CRT_WPERROR_DEFINED
#define _CRT_WPERROR_DEFINED
  _CRTIMP void __cdecl _wperror(const wchar_t *_ErrMsg);
#endif
# 677 "C:/Msys2/mingw64/include/stdlib.h" 3
  _CRTIMP void __cdecl _wsearchenv(const wchar_t *_Filename,const wchar_t *_EnvVar,wchar_t *_ResultPath) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP void __cdecl _wsplitpath(const wchar_t *_FullPath,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,wchar_t *_Ext) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
#endif
# 680 "C:/Msys2/mingw64/include/stdlib.h" 3

  _CRTIMP void __cdecl _beep(unsigned _Frequency,unsigned _Duration) __MINGW_ATTRIB_DEPRECATED;
  /* Not to be confused with  _set_error_mode (int).  */
  _CRTIMP void __cdecl _seterrormode(int _Mode) __MINGW_ATTRIB_DEPRECATED;
  _CRTIMP void __cdecl _sleep(unsigned long _Duration) __MINGW_ATTRIB_DEPRECATED;
#endif
# 686 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef	NO_OLDNAMES
#ifndef _POSIX_
#if 0 /* disabled by -frewrite-includes */
#if 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 690 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef __cplusplus
#ifndef NOMINMAX
#ifndef max
#define max(a,b) (((a) > (b)) ? (a) : (b))
#endif
# 695 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef min
#define min(a,b) (((a) < (b)) ? (a) : (b))
#endif
# 698 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 699 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 700 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 701 "C:/Msys2/mingw64/include/stdlib.h" 3

#define sys_errlist _sys_errlist
#define sys_nerr _sys_nerr
#define environ _environ
  char *__cdecl ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  char *__cdecl fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  char *__cdecl gcvt(double _Val,int _NumOfDigits,char *_DstBuf) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  char *__cdecl itoa(int _Val,char *_DstBuf,int _Radix) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  char *__cdecl ltoa(long _Val,char *_DstBuf,int _Radix) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  int __cdecl putenv(const char *_EnvString) __MINGW_ATTRIB_DEPRECATED_MSVC2005;

#ifndef _CRT_SWAB_DEFINED
#define _CRT_SWAB_DEFINED  /* Also in unistd.h */
  void __cdecl swab(char *_Buf1,char *_Buf2,int _SizeInBytes) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
#endif
# 716 "C:/Msys2/mingw64/include/stdlib.h" 3

  char *__cdecl ultoa(unsigned long _Val,char *_Dstbuf,int _Radix) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  onexit_t __cdecl onexit(onexit_t _Func);
#endif
# 720 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 721 "C:/Msys2/mingw64/include/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined __NO_ISOCEXT /* externs in static libmingwex.a */
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 723 "C:/Msys2/mingw64/include/stdlib.h" 3

  typedef struct { __MINGW_EXTENSION long long quot, rem; } lldiv_t;

  __MINGW_EXTENSION lldiv_t __cdecl lldiv(long long, long long);

  __MINGW_EXTENSION long long __cdecl llabs(long long);
#ifndef __CRT__NO_INLINE
  __MINGW_EXTENSION __CRT_INLINE long long __cdecl llabs(long long _j) { return (_j >= 0 ? _j : -_j); }
#endif
# 732 "C:/Msys2/mingw64/include/stdlib.h" 3

  __MINGW_EXTENSION long long  __cdecl strtoll(const char * __restrict__, char ** __restrict, int);
  __MINGW_EXTENSION unsigned long long  __cdecl strtoull(const char * __restrict__, char ** __restrict__, int);

  /* these are stubs for MS _i64 versions */
  __MINGW_EXTENSION long long  __cdecl atoll (const char *);

#ifndef __STRICT_ANSI__
  __MINGW_EXTENSION long long  __cdecl wtoll (const wchar_t *);
  __MINGW_EXTENSION char *__cdecl lltoa (long long, char *, int);
  __MINGW_EXTENSION char *__cdecl ulltoa (unsigned long long , char *, int);
  __MINGW_EXTENSION wchar_t *__cdecl lltow (long long, wchar_t *, int);
  __MINGW_EXTENSION wchar_t *__cdecl ulltow (unsigned long long, wchar_t *, int);

  /* __CRT_INLINE using non-ansi functions */
#ifndef __CRT__NO_INLINE
  __MINGW_EXTENSION __CRT_INLINE long long  __cdecl atoll (const char * _c) { return _atoi64 (_c); }
  __MINGW_EXTENSION __CRT_INLINE char *__cdecl lltoa (long long _n, char * _c, int _i) { return _i64toa (_n, _c, _i); }
  __MINGW_EXTENSION __CRT_INLINE char *__cdecl ulltoa (unsigned long long _n, char * _c, int _i) { return _ui64toa (_n, _c, _i); }
  __MINGW_EXTENSION __CRT_INLINE long long  __cdecl wtoll (const wchar_t * _w) { return _wtoi64 (_w); }
  __MINGW_EXTENSION __CRT_INLINE wchar_t *__cdecl lltow (long long _n, wchar_t * _w, int _i) { return _i64tow (_n, _w, _i); }
  __MINGW_EXTENSION __CRT_INLINE wchar_t *__cdecl ulltow (unsigned long long _n, wchar_t * _w, int _i) { return _ui64tow (_n, _w, _i); }
#endif /* !__CRT__NO_INLINE */
# 755 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* (__STRICT_ANSI__)  */
# 756 "C:/Msys2/mingw64/include/stdlib.h" 3

#endif /* !__NO_ISOCEXT */
# 758 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifdef __cplusplus
}
#endif
# 762 "C:/Msys2/mingw64/include/stdlib.h" 3

#pragma pack(pop)

#if 0 /* expanded by -frewrite-includes */
#include <sec_api/stdlib_s.h>
#endif /* expanded by -frewrite-includes */
# 765 "C:/Msys2/mingw64/include/stdlib.h" 3
# 766 "C:/Msys2/mingw64/include/stdlib.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <malloc.h>
#endif /* expanded by -frewrite-includes */
# 766 "C:/Msys2/mingw64/include/stdlib.h" 3
# 767 "C:/Msys2/mingw64/include/stdlib.h" 3

#endif
# 769 "C:/Msys2/mingw64/include/stdlib.h" 3
# 31 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 2 3
#else
# 32 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3

#ifndef _GLIBCXX_STDLIB_H
#define _GLIBCXX_STDLIB_H 1

#if 0 /* expanded by -frewrite-includes */
# include <cstdlib>
#endif /* expanded by -frewrite-includes */
# 36 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
# 37 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3

using std::abort;
using std::atexit;
using std::exit;
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 42 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
# ifdef _GLIBCXX_HAVE_AT_QUICK_EXIT
  using std::at_quick_exit;
# endif
# 45 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
# ifdef _GLIBCXX_HAVE_QUICK_EXIT
  using std::quick_exit;
# endif
# 48 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
#endif
# 49 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_HOSTED
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 51 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
using std::div_t;
using std::ldiv_t;

using std::abs;
using std::atof;
using std::atoi;
using std::atol;
using std::bsearch;
using std::calloc;
using std::div;
using std::free;
using std::getenv;
using std::labs;
using std::ldiv;
using std::malloc;
#ifdef _GLIBCXX_HAVE_MBSTATE_T
using std::mblen;
using std::mbstowcs;
using std::mbtowc;
#endif // _GLIBCXX_HAVE_MBSTATE_T
# 71 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
using std::qsort;
using std::rand;
using std::realloc;
using std::srand;
using std::strtod;
using std::strtol;
using std::strtoul;
using std::system;
#ifdef _GLIBCXX_USE_WCHAR_T
using std::wcstombs;
using std::wctomb;
#endif // _GLIBCXX_USE_WCHAR_T
# 83 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
#endif
# 84 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3

#endif // _GLIBCXX_STDLIB_H
# 86 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
#endif // __cplusplus
# 87 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
# 10 "C:/Msys2/mingw64/include/sec_api/stdlib_s.h" 2 3

#ifdef __cplusplus
extern "C" {
#endif
# 14 "C:/Msys2/mingw64/include/sec_api/stdlib_s.h" 3

  _CRTIMP void * __cdecl bsearch_s(const void *_Key,const void *_Base,rsize_t _NumOfElements,rsize_t _SizeOfElements,int (__cdecl * _PtFuncCompare)(void *, const void *, const void *), void *_Context);
  _CRTIMP errno_t __cdecl _dupenv_s(char **_PBuffer,size_t *_PBufferSizeInBytes,const char *_VarName);
  _CRTIMP errno_t __cdecl getenv_s(size_t *_ReturnSize,char *_DstBuf,rsize_t _DstSize,const char *_VarName);
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t, getenv_s, size_t *, _ReturnSize, char, _Dest, const char *, _VarName)
  _CRTIMP errno_t __cdecl _itoa_s(int _Value,char *_DstBuf,size_t _Size,int _Radix);
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t, _itoa_s, int, _Value, char, _Dest, int, _Radix)
  _CRTIMP errno_t __cdecl _i64toa_s(__int64 _Val,char *_DstBuf,size_t _Size,int _Radix);
  _CRTIMP errno_t __cdecl _ui64toa_s(unsigned __int64 _Val,char *_DstBuf,size_t _Size,int _Radix);
  _CRTIMP errno_t __cdecl _ltoa_s(long _Val,char *_DstBuf,size_t _Size,int _Radix);
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t, _ltoa_s, long, _Value, char, _Dest, int, _Radix)
  _CRTIMP errno_t __cdecl mbstowcs_s(size_t *_PtNumOfCharConverted,wchar_t *_DstBuf,size_t _SizeInWords,const char *_SrcBuf,size_t _MaxCount);
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(errno_t, mbstowcs_s, size_t *, _PtNumOfCharConverted, wchar_t, _Dest, const char *, _Source, size_t, _MaxCount)
  _CRTIMP errno_t __cdecl _mbstowcs_s_l(size_t *_PtNumOfCharConverted,wchar_t *_DstBuf,size_t _SizeInWords,const char *_SrcBuf,size_t _MaxCount,_locale_t _Locale);
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(errno_t, _mbstowcs_s_l, size_t *, _PtNumOfCharConverted, wchar_t, _Dest, const char *, _Source, size_t, _MaxCount, _locale_t, _Locale)
  _CRTIMP errno_t __cdecl _ultoa_s(unsigned long _Val,char *_DstBuf,size_t _Size,int _Radix);
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t, _ultoa_s, unsigned long, _Value, char, _Dest, int, _Radix)
  _CRTIMP errno_t __cdecl wctomb_s(int *_SizeConverted,char *_MbCh,rsize_t _SizeInBytes,wchar_t _WCh);
  _CRTIMP errno_t __cdecl _wctomb_s_l(int *_SizeConverted,char *_MbCh,size_t _SizeInBytes,wchar_t _WCh,_locale_t _Locale);
  _CRTIMP errno_t __cdecl wcstombs_s(size_t *_PtNumOfCharConverted,char *_Dst,size_t _DstSizeInBytes,const wchar_t *_Src,size_t _MaxCountInBytes);
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(errno_t, wcstombs_s, size_t*, _PtNumOfCharConverted, char, _Dst, const wchar_t*, _Src, size_t, _MaxCountInBytes)
  _CRTIMP errno_t __cdecl _wcstombs_s_l(size_t *_PtNumOfCharConverted,char *_Dst,size_t _DstSizeInBytes,const wchar_t *_Src,size_t _MaxCountInBytes,_locale_t _Locale);
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(errno_t, _wcstombs_s_l, size_t*, _PtNumOfCharConverted, char, _Dst, const wchar_t*, _Src, size_t, _MaxCountInBytes, _locale_t, _Locale)

#ifndef _POSIX_
  _CRTIMP errno_t __cdecl _ecvt_s(char *_DstBuf,size_t _Size,double _Val,int _NumOfDights,int *_PtDec,int *_PtSign);
  _CRTIMP errno_t __cdecl _fcvt_s(char *_DstBuf,size_t _Size,double _Val,int _NumOfDec,int *_PtDec,int *_PtSign);
  _CRTIMP errno_t __cdecl _gcvt_s(char *_DstBuf,size_t _Size,double _Val,int _NumOfDigits);
  _CRTIMP errno_t __cdecl _makepath_s(char *_PathResult,size_t _Size,const char *_Drive,const char *_Dir,const char *_Filename,const char *_Ext);
  _CRTIMP errno_t __cdecl _putenv_s(const char *_Name,const char *_Value);
  _CRTIMP errno_t __cdecl _searchenv_s(const char *_Filename,const char *_EnvVar,char *_ResultPath,size_t _SizeInBytes);

  _CRTIMP errno_t __cdecl _splitpath_s(const char *_FullPath,char *_Drive,size_t _DriveSize,char *_Dir,size_t _DirSize,char *_Filename,size_t _FilenameSize,char *_Ext,size_t _ExtSize);
  __DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(errno_t,_splitpath_s,char,_Dest)

#ifndef _QSORT_S_DEFINED
#define _QSORT_S_DEFINED
  _CRTIMP void __cdecl qsort_s(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__cdecl *_PtFuncCompare)(void *,const void *,const void *),void *_Context);
#endif
# 53 "C:/Msys2/mingw64/include/sec_api/stdlib_s.h" 3

#endif
# 55 "C:/Msys2/mingw64/include/sec_api/stdlib_s.h" 3

#ifdef __cplusplus
}
#endif
# 59 "C:/Msys2/mingw64/include/sec_api/stdlib_s.h" 3

#endif
# 61 "C:/Msys2/mingw64/include/sec_api/stdlib_s.h" 3
# 766 "C:/Msys2/mingw64/include/stdlib.h" 2 3
#if 0 /* expanded by -frewrite-includes */
#include <malloc.h>
#endif /* expanded by -frewrite-includes */
# 766 "C:/Msys2/mingw64/include/stdlib.h" 3
# 1 "C:/Msys2/mingw64/include/malloc.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _MALLOC_H_
#define _MALLOC_H_

#if 0 /* expanded by -frewrite-includes */
#include <crtdefs.h>
#endif /* expanded by -frewrite-includes */
# 9 "C:/Msys2/mingw64/include/malloc.h" 3
# 10 "C:/Msys2/mingw64/include/malloc.h" 3

#pragma pack(push,_CRT_PACKING)

#ifdef __cplusplus
extern "C" {
#endif
# 16 "C:/Msys2/mingw64/include/malloc.h" 3

#ifdef _WIN64
#define _HEAP_MAXREQ 0xFFFFFFFFFFFFFFE0
#else
# 20 "C:/Msys2/mingw64/include/malloc.h" 3
#define _HEAP_MAXREQ 0xFFFFFFE0
#endif
# 22 "C:/Msys2/mingw64/include/malloc.h" 3

#ifndef _STATIC_ASSERT
#if 0 /* disabled by -frewrite-includes */
#if defined(_MSC_VER)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 25 "C:/Msys2/mingw64/include/malloc.h" 3
#define _STATIC_ASSERT(expr) typedef char __static_assert_t[(expr)]
#else
# 27 "C:/Msys2/mingw64/include/malloc.h" 3
#define _STATIC_ASSERT(expr) extern void __static_assert_t(int [(expr)?1:-1])
#endif
# 29 "C:/Msys2/mingw64/include/malloc.h" 3
#endif
# 30 "C:/Msys2/mingw64/include/malloc.h" 3

/* Return codes for _heapwalk()  */
#define _HEAPEMPTY (-1)
#define _HEAPOK (-2)
#define _HEAPBADBEGIN (-3)
#define _HEAPBADNODE (-4)
#define _HEAPEND (-5)
#define _HEAPBADPTR (-6)

/* Values for _heapinfo.useflag */
#define _FREEENTRY 0
#define _USEDENTRY 1

#ifndef _HEAPINFO_DEFINED
#define _HEAPINFO_DEFINED
 /* The structure used to walk through the heap with _heapwalk.  */
  typedef struct _heapinfo {
    int *_pentry;
    size_t _size;
    int _useflag;
  } _HEAPINFO;
#endif
# 52 "C:/Msys2/mingw64/include/malloc.h" 3

  extern unsigned int _amblksiz;

#ifndef _CRT_ALLOCATION_DEFINED
#define _CRT_ALLOCATION_DEFINED
  void *__cdecl calloc(size_t _NumOfElements,size_t _SizeOfElements);
  void __cdecl free(void *_Memory);
  void *__cdecl malloc(size_t _Size);
  void *__cdecl realloc(void *_Memory,size_t _NewSize);
  _CRTIMP void *__cdecl _recalloc(void *_Memory,size_t _Count,size_t _Size);

  _CRTIMP void __cdecl _aligned_free(void *_Memory);
  _CRTIMP void *__cdecl _aligned_malloc(size_t _Size,size_t _Alignment);

  _CRTIMP void *__cdecl _aligned_offset_malloc(size_t _Size,size_t _Alignment,size_t _Offset);
  _CRTIMP void *__cdecl _aligned_realloc(void *_Memory,size_t _Size,size_t _Alignment);
  _CRTIMP void *__cdecl _aligned_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment);
  _CRTIMP void *__cdecl _aligned_offset_realloc(void *_Memory,size_t _Size,size_t _Alignment,size_t _Offset);
  _CRTIMP void *__cdecl _aligned_offset_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment,size_t _Offset);
#endif
# 72 "C:/Msys2/mingw64/include/malloc.h" 3

/* Users should really use MS provided versions */
void * __mingw_aligned_malloc (size_t _Size, size_t _Alignment);
void __mingw_aligned_free (void *_Memory);
void * __mingw_aligned_offset_realloc (void *_Memory, size_t _Size, size_t _Alignment, size_t _Offset);
void * __mingw_aligned_realloc (void *_Memory, size_t _Size, size_t _Offset);

/* Get the compiler's definition of _mm_malloc and _mm_free. */
#if 0 /* expanded by -frewrite-includes */
#include <mm_malloc.h>
#endif /* expanded by -frewrite-includes */
# 80 "C:/Msys2/mingw64/include/malloc.h" 3
# 1 "C:/Msys2/mingw64/lib/clang/14.0.0/include/mm_malloc.h" 1 3
/*===---- mm_malloc.h - Allocating and Freeing Aligned Memory Blocks -------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __MM_MALLOC_H
#define __MM_MALLOC_H

#if 0 /* expanded by -frewrite-includes */
#include <stdlib.h>
#endif /* expanded by -frewrite-includes */
# 13 "C:/Msys2/mingw64/lib/clang/14.0.0/include/mm_malloc.h" 3
# 1 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 1 3
// -*- C++ -*- compatibility header.

// Copyright (C) 2002-2021 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file stdlib.h
 *  This is a Standard C++ Library header.
 */

#if 0 /* disabled by -frewrite-includes */
#if !defined __cplusplus || defined _GLIBCXX_INCLUDE_NEXT_C_HEADERS
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 30 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
#if 0 /* expanded by -frewrite-includes */
# include_next <stdlib.h>
#endif /* expanded by -frewrite-includes */
# 30 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
# 1 "C:/Msys2/mingw64/include/stdlib.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _INC_STDLIB
#define _INC_STDLIB

#if 0 /* expanded by -frewrite-includes */
#include <corecrt.h>
#endif /* expanded by -frewrite-includes */
# 9 "C:/Msys2/mingw64/include/stdlib.h" 3
# 10 "C:/Msys2/mingw64/include/stdlib.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <corecrt_wstdlib.h>
#endif /* expanded by -frewrite-includes */
# 10 "C:/Msys2/mingw64/include/stdlib.h" 3
# 11 "C:/Msys2/mingw64/include/stdlib.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <limits.h>
#endif /* expanded by -frewrite-includes */
# 11 "C:/Msys2/mingw64/include/stdlib.h" 3
# 12 "C:/Msys2/mingw64/include/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if __USE_MINGW_ANSI_STDIO && !defined (__USE_MINGW_STRTOX) && !defined(_CRTBLD)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 14 "C:/Msys2/mingw64/include/stdlib.h" 3
#define __USE_MINGW_STRTOX 1
#endif
# 16 "C:/Msys2/mingw64/include/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__LIBMSVCRT__)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 18 "C:/Msys2/mingw64/include/stdlib.h" 3
/* When building mingw-w64, this should be blank.  */
#define _SECIMP
#else
# 21 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef _SECIMP
#define _SECIMP __declspec(dllimport)
#endif /* _SECIMP */
# 24 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* defined(_CRTBLD) || defined(__LIBMSVCRT__) */
# 25 "C:/Msys2/mingw64/include/stdlib.h" 3

#pragma pack(push,_CRT_PACKING)

#ifdef __cplusplus
extern "C" {
#endif
# 31 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef NULL
#ifdef __cplusplus
#ifndef _WIN64
#define NULL 0
#else
# 37 "C:/Msys2/mingw64/include/stdlib.h" 3
#define NULL 0LL
#endif  /* W64 */
# 39 "C:/Msys2/mingw64/include/stdlib.h" 3
#else
# 40 "C:/Msys2/mingw64/include/stdlib.h" 3
#define NULL ((void *)0)
#endif
# 42 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 43 "C:/Msys2/mingw64/include/stdlib.h" 3

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

#ifndef _ONEXIT_T_DEFINED
#define _ONEXIT_T_DEFINED

  typedef int (__cdecl *_onexit_t)(void);

#ifndef	NO_OLDNAMES
#define onexit_t _onexit_t
#endif
# 55 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 56 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _DIV_T_DEFINED
#define _DIV_T_DEFINED

  typedef struct _div_t {
    int quot;
    int rem;
  } div_t;

  typedef struct _ldiv_t {
    long quot;
    long rem;
  } ldiv_t;
#endif
# 70 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _CRT_DOUBLE_DEC
#define _CRT_DOUBLE_DEC

#pragma pack(4)
  typedef struct {
    unsigned char ld[10];
  } _LDOUBLE;
#pragma pack()

#define _PTR_LD(x) ((unsigned char *)(&(x)->ld))

  typedef struct {
    double x;
  } _CRT_DOUBLE;

  typedef struct {
    float f;
  } _CRT_FLOAT;

#pragma push_macro("long")
#undef long

  typedef struct {
    long double x;
  } _LONGDOUBLE;

#pragma pop_macro("long")

#pragma pack(4)
  typedef struct {
    unsigned char ld12[12];
  } _LDBL12;
#pragma pack()
#endif
# 105 "C:/Msys2/mingw64/include/stdlib.h" 3

#define RAND_MAX 0x7fff

#ifndef MB_CUR_MAX
#define MB_CUR_MAX ___mb_cur_max_func()
#ifndef __mb_cur_max
#ifdef _MSVCRT_
  extern int __mb_cur_max;
#define __mb_cur_max	__mb_cur_max
#else
# 115 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef _UCRT
  extern int * __MINGW_IMP_SYMBOL(__mb_cur_max);
#endif
# 118 "C:/Msys2/mingw64/include/stdlib.h" 3
#define __mb_cur_max	(___mb_cur_max_func())
#endif
# 120 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 121 "C:/Msys2/mingw64/include/stdlib.h" 3
_CRTIMP int __cdecl ___mb_cur_max_func(void);
#endif
# 123 "C:/Msys2/mingw64/include/stdlib.h" 3

#define __max(a,b) (((a) > (b)) ? (a) : (b))
#define __min(a,b) (((a) < (b)) ? (a) : (b))

#define _MAX_PATH 260
#define _MAX_DRIVE 3
#define _MAX_DIR 256
#define _MAX_FNAME 256
#define _MAX_EXT 256

#define _OUT_TO_DEFAULT 0
#define _OUT_TO_STDERR 1
#define _OUT_TO_MSGBOX 2
#define _REPORT_ERRMODE 3

#define _WRITE_ABORT_MSG 0x1
#define _CALL_REPORTFAULT 0x2

#define _MAX_ENV 32767

  typedef void (__cdecl *_purecall_handler)(void);

  _CRTIMP _purecall_handler __cdecl _set_purecall_handler(_purecall_handler _Handler);
  _CRTIMP _purecall_handler __cdecl _get_purecall_handler(void);

  typedef void (__cdecl *_invalid_parameter_handler)(const wchar_t *,const wchar_t *,const wchar_t *,unsigned int,uintptr_t);
  _CRTIMP _invalid_parameter_handler __cdecl _set_invalid_parameter_handler(_invalid_parameter_handler _Handler);
  _CRTIMP _invalid_parameter_handler __cdecl _get_invalid_parameter_handler(void);

#ifndef _CRT_ERRNO_DEFINED
#define _CRT_ERRNO_DEFINED
  _CRTIMP extern int *__cdecl _errno(void);
#define errno (*_errno())
  errno_t __cdecl _set_errno(int _Value);
  errno_t __cdecl _get_errno(int *_Value);
#endif
# 159 "C:/Msys2/mingw64/include/stdlib.h" 3
  _CRTIMP unsigned long *__cdecl __doserrno(void);
#define _doserrno (*__doserrno())
  errno_t __cdecl _set_doserrno(unsigned long _Value);
  errno_t __cdecl _get_doserrno(unsigned long *_Value);
#ifdef _MSVCRT_
  extern char *_sys_errlist[];
  extern int _sys_nerr;
#else
# 167 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifdef _UCRT
  _CRTIMP char **__cdecl __sys_errlist(void);
  _CRTIMP int *__cdecl __sys_nerr(void);
#define _sys_nerr (*__sys_nerr())
#define _sys_errlist (__sys_errlist())
#else
# 173 "C:/Msys2/mingw64/include/stdlib.h" 3
  extern __declspec(dllimport) char *_sys_errlist[1];
  extern __declspec(dllimport) int _sys_nerr;
#endif /* !_UCRT */
# 176 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 177 "C:/Msys2/mingw64/include/stdlib.h" 3

  /* We have a fallback definition of __p___argv and __p__fmode for
     msvcrt versions that lack it. */
  _CRTIMP char ***__cdecl __p___argv(void);
  _CRTIMP int *__cdecl __p__fmode(void);
#if 0 /* disabled by -frewrite-includes */
#if (defined(_X86_) && !defined(__x86_64)) || defined(_UCRT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 183 "C:/Msys2/mingw64/include/stdlib.h" 3
  _CRTIMP int *__cdecl __p___argc(void);
  _CRTIMP wchar_t ***__cdecl __p___wargv(void);
  _CRTIMP char ***__cdecl __p__environ(void);
  _CRTIMP wchar_t ***__cdecl __p__wenviron(void);
  _CRTIMP char **__cdecl __p__pgmptr(void);
  _CRTIMP wchar_t **__cdecl __p__wpgmptr(void);
#endif
# 190 "C:/Msys2/mingw64/include/stdlib.h" 3

  errno_t __cdecl _get_pgmptr(char **_Value);
  errno_t __cdecl _get_wpgmptr(wchar_t **_Value);
  _CRTIMP errno_t __cdecl _set_fmode(int _Mode);
  _CRTIMP errno_t __cdecl _get_fmode(int *_PMode);

#ifndef _fmode
#define _fmode (* __p__fmode())
#endif
# 199 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifdef _MSVCRT_

#ifndef __argc
  extern int __argc;
#endif
# 205 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef __argv
  extern char **__argv;
#endif
# 208 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef __wargv
  extern wchar_t **__wargv;
#endif
# 211 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _POSIX_
#ifndef _environ
  extern char **_environ;
#endif
# 216 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef _wenviron
  extern wchar_t **_wenviron;
#endif
# 219 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* !_POSIX_ */
# 220 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _pgmptr
  extern char *_pgmptr;
#endif
# 224 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _wpgmptr
  extern wchar_t *_wpgmptr;
#endif
# 228 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _osplatform
  extern unsigned int _osplatform;
#endif
# 232 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _osver
  extern unsigned int _osver;
#endif
# 236 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _winver
  extern unsigned int _winver;
#endif
# 240 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _winmajor
  extern unsigned int _winmajor;
#endif
# 244 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _winminor
  extern unsigned int _winminor;
#endif
# 248 "C:/Msys2/mingw64/include/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(_UCRT)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 250 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef __argc
#define __argc (* __p___argc())
#endif
# 254 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef __argv
#define __argv (* __p___argv())
#endif
# 257 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef __wargv
#define __wargv (* __p___wargv())
#endif
# 260 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _POSIX_
#ifndef _environ
#define _environ (* __p__environ())
#endif
# 265 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _wenviron
#define _wenviron (* __p__wenviron())
#endif
# 269 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* !_POSIX_ */
# 270 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _pgmptr
#define _pgmptr (* __p__pgmptr())
#endif
# 274 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _wpgmptr
#define _wpgmptr (* __p__wpgmptr())
#endif
# 278 "C:/Msys2/mingw64/include/stdlib.h" 3

#else /* _UCRT */
# 280 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef __argc
  extern int * __MINGW_IMP_SYMBOL(__argc);
#define __argc (* __MINGW_IMP_SYMBOL(__argc))
#endif
# 285 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef __argv
  extern char *** __MINGW_IMP_SYMBOL(__argv);
#define __argv	(* __p___argv())
#endif
# 289 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef __wargv
  extern wchar_t *** __MINGW_IMP_SYMBOL(__wargv);
#define __wargv (* __MINGW_IMP_SYMBOL(__wargv))
#endif
# 293 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _POSIX_
#if 0 /* disabled by -frewrite-includes */
#if (defined(_ARM_) || defined(__arm__) || defined(_ARM64_) || defined(__aarch64__))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 296 "C:/Msys2/mingw64/include/stdlib.h" 3
  /* The plain msvcrt.dll for arm/aarch64 (and msvcr120_app.dll for arm) lacks
   * _environ/_wenviron, but has these functions instead. */
  _CRTIMP void __cdecl _get_environ(char ***);
  _CRTIMP void __cdecl _get_wenviron(wchar_t ***);

  static __inline char **__get_environ_ptr(void) {
    char **__ptr;
    _get_environ(&__ptr);
    return __ptr;
  }

  static __inline wchar_t **__get_wenviron_ptr(void) {
    wchar_t **__ptr;
    _get_wenviron(&__ptr);
    return __ptr;
  }

#ifndef _environ
#define _environ (__get_environ_ptr())
#endif
# 316 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _wenviron
#define _wenviron (__get_wenviron_ptr())
#endif
# 320 "C:/Msys2/mingw64/include/stdlib.h" 3
#else /* ARM/ARM64 */
# 321 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef _environ
  extern char *** __MINGW_IMP_SYMBOL(_environ);
#define _environ (* __MINGW_IMP_SYMBOL(_environ))
#endif
# 325 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _wenviron
  extern wchar_t *** __MINGW_IMP_SYMBOL(_wenviron);
#define _wenviron (* __MINGW_IMP_SYMBOL(_wenviron))
#endif
# 330 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* !ARM/ARM64 */
# 331 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* !_POSIX_ */
# 332 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _pgmptr
  extern char ** __MINGW_IMP_SYMBOL(_pgmptr);
#define _pgmptr	(* __MINGW_IMP_SYMBOL(_pgmptr))
#endif
# 337 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _wpgmptr
  extern wchar_t ** __MINGW_IMP_SYMBOL(_wpgmptr);
#define _wpgmptr (* __MINGW_IMP_SYMBOL(_wpgmptr))
#endif
# 342 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _osplatform
  extern unsigned int * __MINGW_IMP_SYMBOL(_osplatform);
#define _osplatform (* __MINGW_IMP_SYMBOL(_osplatform))
#endif
# 347 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _osver
  extern unsigned int * __MINGW_IMP_SYMBOL(_osver);
#define _osver	(* __MINGW_IMP_SYMBOL(_osver))
#endif
# 352 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _winver
  extern unsigned int * __MINGW_IMP_SYMBOL(_winver);
#define _winver	(* __MINGW_IMP_SYMBOL(_winver))
#endif
# 357 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _winmajor
  extern unsigned int * __MINGW_IMP_SYMBOL(_winmajor);
#define _winmajor (* __MINGW_IMP_SYMBOL(_winmajor))
#endif
# 362 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _winminor
  extern unsigned int * __MINGW_IMP_SYMBOL(_winminor);
#define _winminor (* __MINGW_IMP_SYMBOL(_winminor))
#endif
# 367 "C:/Msys2/mingw64/include/stdlib.h" 3

#endif /* !_MSVCRT_ && !_UCRT */
# 369 "C:/Msys2/mingw64/include/stdlib.h" 3

  errno_t __cdecl _get_osplatform(unsigned int *_Value);
  errno_t __cdecl _get_osver(unsigned int *_Value);
  errno_t __cdecl _get_winver(unsigned int *_Value);
  errno_t __cdecl _get_winmajor(unsigned int *_Value);
  errno_t __cdecl _get_winminor(unsigned int *_Value);
#ifndef _countof
#ifndef __cplusplus
#define _countof(_Array) (sizeof(_Array) / sizeof(_Array[0]))
#else
# 379 "C:/Msys2/mingw64/include/stdlib.h" 3
  extern "C++" {
    template <typename _CountofType,size_t _SizeOfArray> char (*__countof_helper(UNALIGNED _CountofType (&_Array)[_SizeOfArray]))[_SizeOfArray];
#define _countof(_Array) sizeof(*__countof_helper(_Array))
  }
#endif
# 384 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 385 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _CRT_TERMINATE_DEFINED
#define _CRT_TERMINATE_DEFINED
  void __cdecl __MINGW_NOTHROW exit(int _Code) __MINGW_ATTRIB_NORETURN;
  void __cdecl __MINGW_NOTHROW _exit(int _Code) __MINGW_ATTRIB_NORETURN;
#ifdef _UCRT
  void __cdecl __MINGW_NOTHROW quick_exit(int _Code) __MINGW_ATTRIB_NORETURN;
#endif
# 393 "C:/Msys2/mingw64/include/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined __NO_ISOCEXT /* extern stub in static libmingwex.a */
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 395 "C:/Msys2/mingw64/include/stdlib.h" 3
  /* C99 function name */
  void __cdecl _Exit(int) __MINGW_ATTRIB_NORETURN;
#ifndef __CRT__NO_INLINE
  __CRT_INLINE __MINGW_ATTRIB_NORETURN void  __cdecl _Exit(int status)
  {  _exit(status); }
#endif /* !__CRT__NO_INLINE */
# 401 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* Not  __NO_ISOCEXT */
# 402 "C:/Msys2/mingw64/include/stdlib.h" 3

#pragma push_macro("abort")
#undef abort
  void __cdecl __MINGW_ATTRIB_NORETURN abort(void);
#pragma pop_macro("abort")

#endif /* _CRT_TERMINATE_DEFINED */
# 409 "C:/Msys2/mingw64/include/stdlib.h" 3

  _CRTIMP unsigned int __cdecl _set_abort_behavior(unsigned int _Flags,unsigned int _Mask);

#ifndef _CRT_ABS_DEFINED
#define _CRT_ABS_DEFINED
  int __cdecl abs(int _X);
  long __cdecl labs(long _X);
#endif
# 417 "C:/Msys2/mingw64/include/stdlib.h" 3

  __MINGW_EXTENSION __int64 __cdecl _abs64(__int64);
#ifdef __MINGW_INTRIN_INLINE
  __MINGW_INTRIN_INLINE __int64 __cdecl _abs64(__int64 x) {
    return __builtin_llabs(x);
  }
#endif
# 424 "C:/Msys2/mingw64/include/stdlib.h" 3

  int __cdecl atexit(void (__cdecl *)(void));
#ifdef _UCRT
  int __cdecl at_quick_exit(void (__cdecl *)(void));
#endif
# 429 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef _CRT_ATOF_DEFINED
#define _CRT_ATOF_DEFINED
  double __cdecl atof(const char *_String);
  double __cdecl _atof_l(const char *_String,_locale_t _Locale);
#endif
# 434 "C:/Msys2/mingw64/include/stdlib.h" 3
  int __cdecl atoi(const char *_Str);
  _CRTIMP int __cdecl _atoi_l(const char *_Str,_locale_t _Locale);
  long __cdecl atol(const char *_Str);
  _CRTIMP long __cdecl _atol_l(const char *_Str,_locale_t _Locale);
#ifndef _CRT_ALGO_DEFINED
#define _CRT_ALGO_DEFINED
  void *__cdecl bsearch(const void *_Key,const void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__cdecl *_PtFuncCompare)(const void *,const void *));
  void __cdecl qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int (__cdecl *_PtFuncCompare)(const void *,const void *));
#endif
# 443 "C:/Msys2/mingw64/include/stdlib.h" 3
  unsigned short __cdecl _byteswap_ushort(unsigned short _Short);
  unsigned long __cdecl _byteswap_ulong (unsigned long _Long);
  __MINGW_EXTENSION unsigned __int64 __cdecl _byteswap_uint64(unsigned __int64 _Int64);
  div_t __cdecl div(int _Numerator,int _Denominator);
  char *__cdecl getenv(const char *_VarName) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP char *__cdecl _itoa(int _Value,char *_Dest,int _Radix);
  __MINGW_EXTENSION _CRTIMP char *__cdecl _i64toa(__int64 _Val,char *_DstBuf,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  __MINGW_EXTENSION _CRTIMP char *__cdecl _ui64toa(unsigned __int64 _Val,char *_DstBuf,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _atoi64(const char *_String);
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _atoi64_l(const char *_String,_locale_t _Locale);
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _strtoi64(const char *_String,char **_EndPtr,int _Radix);
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _strtoi64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  __MINGW_EXTENSION _CRTIMP unsigned __int64 __cdecl _strtoui64(const char *_String,char **_EndPtr,int _Radix);
  __MINGW_EXTENSION _CRTIMP unsigned __int64 __cdecl _strtoui64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  ldiv_t __cdecl ldiv(long _Numerator,long _Denominator);
  _CRTIMP char *__cdecl _ltoa(long _Value,char *_Dest,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  int __cdecl mblen(const char *_Ch,size_t _MaxCount);
  _CRTIMP int __cdecl _mblen_l(const char *_Ch,size_t _MaxCount,_locale_t _Locale);
  _CRTIMP size_t __cdecl _mbstrlen(const char *_Str);
  _CRTIMP size_t __cdecl _mbstrlen_l(const char *_Str,_locale_t _Locale);
  _CRTIMP size_t __cdecl _mbstrnlen(const char *_Str,size_t _MaxCount);
  _CRTIMP size_t __cdecl _mbstrnlen_l(const char *_Str,size_t _MaxCount,_locale_t _Locale);
  int __cdecl mbtowc(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes);
  _CRTIMP int __cdecl _mbtowc_l(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale);
  size_t __cdecl mbstowcs(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount);
  _CRTIMP size_t __cdecl _mbstowcs_l(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale);
  int __cdecl mkstemp(char *template_name);
  int __cdecl rand(void);
  _CRTIMP int __cdecl _set_error_mode(int _Mode);
  void __cdecl srand(unsigned int _Seed);
#if 0 /* disabled by -frewrite-includes */
#if defined(_POSIX) || defined(_POSIX_THREAD_SAFE_FUNCTIONS)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 474 "C:/Msys2/mingw64/include/stdlib.h" 3
  #ifndef rand_r
  #define rand_r(__seed) (__seed == __seed ? rand () : rand ())
  #endif
# 477 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 478 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifdef _CRT_RAND_S
  _SECIMP errno_t __cdecl rand_s(unsigned int *randomValue);
#endif
# 481 "C:/Msys2/mingw64/include/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__USE_MINGW_STRTOX)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 483 "C:/Msys2/mingw64/include/stdlib.h" 3
__mingw_ovr
double __cdecl __MINGW_NOTHROW strtod(const char * __restrict__ _Str,char ** __restrict__ _EndPtr)
{
  double __cdecl __mingw_strtod (const char * __restrict__, char ** __restrict__);
  return __mingw_strtod( _Str, _EndPtr);
}

__mingw_ovr
float __cdecl __MINGW_NOTHROW strtof(const char * __restrict__ _Str,char ** __restrict__ _EndPtr)
{
  float __cdecl __mingw_strtof (const char * __restrict__, char ** __restrict__);
  return __mingw_strtof( _Str, _EndPtr);
}

/* strtold is already an alias to __mingw_strtold */
#else
# 499 "C:/Msys2/mingw64/include/stdlib.h" 3
  double __cdecl __MINGW_NOTHROW strtod(const char * __restrict__ _Str,char ** __restrict__ _EndPtr);
  float __cdecl __MINGW_NOTHROW strtof(const char * __restrict__ nptr, char ** __restrict__ endptr);
#endif /* defined(__USE_MINGW_STRTOX) */
# 502 "C:/Msys2/mingw64/include/stdlib.h" 3
  long double __cdecl __MINGW_NOTHROW strtold(const char * __restrict__ , char ** __restrict__ );
#if 0 /* disabled by -frewrite-includes */
#if !defined __NO_ISOCEXT
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 504 "C:/Msys2/mingw64/include/stdlib.h" 3
  /* libmingwex.a provides a c99-compliant strtod() exported as __strtod() */
  extern double __cdecl __MINGW_NOTHROW
  __strtod (const char * __restrict__ , char ** __restrict__);
/* The UCRT version of strtod is C99 compliant, so we don't need to redirect it to the mingw version. */
#if 0 /* disabled by -frewrite-includes */
#if !defined(__USE_MINGW_STRTOX) && !defined(_UCRT)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 509 "C:/Msys2/mingw64/include/stdlib.h" 3
#define strtod __strtod
#endif /* !defined(__USE_MINGW_STRTOX) */
# 511 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* __NO_ISOCEXT */
# 512 "C:/Msys2/mingw64/include/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined __NO_ISOCEXT  /* in libmingwex.a */
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 514 "C:/Msys2/mingw64/include/stdlib.h" 3
  float __cdecl __mingw_strtof (const char * __restrict__, char ** __restrict__);
  double __cdecl __mingw_strtod (const char * __restrict__, char ** __restrict__);
  long double __cdecl __mingw_strtold(const char * __restrict__, char ** __restrict__);
#endif /* __NO_ISOCEXT */
# 518 "C:/Msys2/mingw64/include/stdlib.h" 3
  _CRTIMP double __cdecl _strtod_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,_locale_t _Locale);
  long __cdecl strtol(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  _CRTIMP long __cdecl _strtol_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long __cdecl strtoul(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  _CRTIMP unsigned long __cdecl _strtoul_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
#ifndef _CRT_SYSTEM_DEFINED
#define _CRT_SYSTEM_DEFINED
  int __cdecl system(const char *_Command);
#endif
# 527 "C:/Msys2/mingw64/include/stdlib.h" 3
  _CRTIMP char *__cdecl _ultoa(unsigned long _Value,char *_Dest,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  int __cdecl wctomb(char *_MbCh,wchar_t _WCh) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP int __cdecl _wctomb_l(char *_MbCh,wchar_t _WCh,_locale_t _Locale) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  size_t __cdecl wcstombs(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP size_t __cdecl _wcstombs_l(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;

#ifndef _CRT_ALLOCATION_DEFINED
#define _CRT_ALLOCATION_DEFINED
  void *__cdecl calloc(size_t _NumOfElements,size_t _SizeOfElements);
  void __cdecl free(void *_Memory);
  void *__cdecl malloc(size_t _Size);
  void *__cdecl realloc(void *_Memory,size_t _NewSize);
  _CRTIMP void *__cdecl _recalloc(void *_Memory,size_t _Count,size_t _Size);
  _CRTIMP void __cdecl _aligned_free(void *_Memory);
  _CRTIMP void *__cdecl _aligned_malloc(size_t _Size,size_t _Alignment);
  _CRTIMP void *__cdecl _aligned_offset_malloc(size_t _Size,size_t _Alignment,size_t _Offset);
  _CRTIMP void *__cdecl _aligned_realloc(void *_Memory,size_t _Size,size_t _Alignment);
  _CRTIMP void *__cdecl _aligned_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment);
  _CRTIMP void *__cdecl _aligned_offset_realloc(void *_Memory,size_t _Size,size_t _Alignment,size_t _Offset);
  _CRTIMP void *__cdecl _aligned_offset_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment,size_t _Offset);
#endif
# 548 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef _WSTDLIB_DEFINED
#define _WSTDLIB_DEFINED

  _CRTIMP wchar_t *__cdecl _itow(int _Value,wchar_t *_Dest,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP wchar_t *__cdecl _ltow(long _Value,wchar_t *_Dest,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP wchar_t *__cdecl _ultow(unsigned long _Value,wchar_t *_Dest,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;

  double __cdecl __mingw_wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr);
  float __cdecl __mingw_wcstof(const wchar_t * __restrict__ nptr, wchar_t ** __restrict__ endptr);
  long double __cdecl __mingw_wcstold(const wchar_t * __restrict__, wchar_t ** __restrict__);

#if 0 /* disabled by -frewrite-includes */
#if defined(__USE_MINGW_STRTOX)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 561 "C:/Msys2/mingw64/include/stdlib.h" 3
  __mingw_ovr
  double __cdecl wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr){
    return __mingw_wcstod(_Str,_EndPtr);
  }
  __mingw_ovr
  float __cdecl wcstof(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr){
    return __mingw_wcstof(_Str,_EndPtr);
  }
  /* wcstold is already a mingw implementation */
#else
# 571 "C:/Msys2/mingw64/include/stdlib.h" 3
  double __cdecl wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr);
  float __cdecl wcstof(const wchar_t * __restrict__ nptr, wchar_t ** __restrict__ endptr);
#endif /* defined(__USE_MINGW_STRTOX) */
# 574 "C:/Msys2/mingw64/include/stdlib.h" 3
#if 0 /* disabled by -frewrite-includes */
#if !defined __NO_ISOCEXT /* in libmingwex.a */
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 575 "C:/Msys2/mingw64/include/stdlib.h" 3
  long double __cdecl wcstold(const wchar_t * __restrict__, wchar_t ** __restrict__);
#endif /* __NO_ISOCEXT */
# 577 "C:/Msys2/mingw64/include/stdlib.h" 3
  _CRTIMP double __cdecl _wcstod_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,_locale_t _Locale);
  long __cdecl wcstol(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  _CRTIMP long __cdecl _wcstol_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long __cdecl wcstoul(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  _CRTIMP unsigned long __cdecl _wcstoul_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  _CRTIMP wchar_t *__cdecl _wgetenv(const wchar_t *_VarName) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
#ifndef _CRT_WSYSTEM_DEFINED
#define _CRT_WSYSTEM_DEFINED
  _CRTIMP int __cdecl _wsystem(const wchar_t *_Command);
#endif
# 587 "C:/Msys2/mingw64/include/stdlib.h" 3
  _CRTIMP double __cdecl _wtof(const wchar_t *_Str);
  _CRTIMP double __cdecl _wtof_l(const wchar_t *_Str,_locale_t _Locale);
  _CRTIMP int __cdecl _wtoi(const wchar_t *_Str);
  _CRTIMP int __cdecl _wtoi_l(const wchar_t *_Str,_locale_t _Locale);
  _CRTIMP long __cdecl _wtol(const wchar_t *_Str);
  _CRTIMP long __cdecl _wtol_l(const wchar_t *_Str,_locale_t _Locale);

  __MINGW_EXTENSION _CRTIMP wchar_t *__cdecl _i64tow(__int64 _Val,wchar_t *_DstBuf,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  __MINGW_EXTENSION _CRTIMP wchar_t *__cdecl _ui64tow(unsigned __int64 _Val,wchar_t *_DstBuf,int _Radix) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _wtoi64(const wchar_t *_Str);
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _wtoi64_l(const wchar_t *_Str,_locale_t _Locale);
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _wcstoi64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __MINGW_EXTENSION _CRTIMP __int64 __cdecl _wcstoi64_l(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);
  __MINGW_EXTENSION _CRTIMP unsigned __int64 __cdecl _wcstoui64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __MINGW_EXTENSION _CRTIMP unsigned __int64 __cdecl _wcstoui64_l(const wchar_t *_Str ,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);
#endif
# 603 "C:/Msys2/mingw64/include/stdlib.h" 3

  _CRTIMP int __cdecl _putenv(const char *_EnvString);
  _CRTIMP int __cdecl _wputenv(const wchar_t *_EnvString);

#ifndef _POSIX_
#define _CVTBUFSIZE (309+40)
  _CRTIMP char *__cdecl _fullpath(char *_FullPath,const char *_Path,size_t _SizeInBytes);
  _CRTIMP char *__cdecl _ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP char *__cdecl _fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP char *__cdecl _gcvt(double _Val,int _NumOfDigits,char *_DstBuf) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP int __cdecl _atodbl(_CRT_DOUBLE *_Result,char *_Str);
  _CRTIMP int __cdecl _atoldbl(_LDOUBLE *_Result,char *_Str);
  _CRTIMP int __cdecl _atoflt(_CRT_FLOAT *_Result,char *_Str);
  _CRTIMP int __cdecl _atodbl_l(_CRT_DOUBLE *_Result,char *_Str,_locale_t _Locale);
  _CRTIMP int __cdecl _atoldbl_l(_LDOUBLE *_Result,char *_Str,_locale_t _Locale);
  _CRTIMP int __cdecl _atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale);

#if 0 /* disabled by -frewrite-includes */
#if defined(__INTRIN_H_) || \
   (defined(_X86INTRIN_H_INCLUDED) && \
     ((__MINGW_GCC_VERSION >= 40902) || defined(__LP64__) || defined(_X86_)))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 623 "C:/Msys2/mingw64/include/stdlib.h" 3

/* We already have bug-free prototypes and inline definitions for _lrotl
   and _lrotr from either intrin.h or x86intrin.h. */

#else
# 628 "C:/Msys2/mingw64/include/stdlib.h" 3

/* Remove buggy x86intrin.h definitions if present (see gcc bug 61662). */
#undef _lrotr
#undef _lrotl

/* These prototypes work for x86, x64 (native Windows), and cyginwin64. */
unsigned long __cdecl _lrotl(unsigned long,int);
unsigned long __cdecl _lrotr(unsigned long,int);

#endif /* defined(__INTRIN_H_) || \
    (defined(_X86INTRIN_H_INCLUDED) && \
       ((__MINGW_GCC_VERSION >= 40902) || defined(__LP64__))) */
# 640 "C:/Msys2/mingw64/include/stdlib.h" 3

  _CRTIMP void __cdecl _makepath(char *_Path,const char *_Drive,const char *_Dir,const char *_Filename,const char *_Ext);
  _onexit_t __cdecl _onexit(_onexit_t _Func);

#ifndef _CRT_PERROR_DEFINED
#define _CRT_PERROR_DEFINED
  void __cdecl perror(const char *_ErrMsg);
#endif
# 648 "C:/Msys2/mingw64/include/stdlib.h" 3
#pragma push_macro ("_rotr64")
#pragma push_macro ("_rotl64")
#undef _rotl64
#undef _rotr64
  __MINGW_EXTENSION unsigned __int64 __cdecl _rotl64(unsigned __int64 _Val,int _Shift);
  __MINGW_EXTENSION unsigned __int64 __cdecl _rotr64(unsigned __int64 Value,int Shift);
#pragma pop_macro ("_rotl64")
#pragma pop_macro ("_rotr64")
#pragma push_macro ("_rotr")
#pragma push_macro ("_rotl")
#undef _rotr
#undef _rotl
  unsigned int __cdecl _rotr(unsigned int _Val,int _Shift);
  unsigned int __cdecl _rotl(unsigned int _Val,int _Shift);
#pragma pop_macro ("_rotl")
#pragma pop_macro ("_rotr")
  __MINGW_EXTENSION unsigned __int64 __cdecl _rotr64(unsigned __int64 _Val,int _Shift);
  _CRTIMP void __cdecl _searchenv(const char *_Filename,const char *_EnvVar,char *_ResultPath) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP void __cdecl _splitpath(const char *_FullPath,char *_Drive,char *_Dir,char *_Filename,char *_Ext) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP void __cdecl _swab(char *_Buf1,char *_Buf2,int _SizeInBytes);

#ifndef _WSTDLIBP_DEFINED
#define _WSTDLIBP_DEFINED
  _CRTIMP wchar_t *__cdecl _wfullpath(wchar_t *_FullPath,const wchar_t *_Path,size_t _SizeInWords);
  _CRTIMP void __cdecl _wmakepath(wchar_t *_ResultPath,const wchar_t *_Drive,const wchar_t *_Dir,const wchar_t *_Filename,const wchar_t *_Ext);
#ifndef _CRT_WPERROR_DEFINED
#define _CRT_WPERROR_DEFINED
  _CRTIMP void __cdecl _wperror(const wchar_t *_ErrMsg);
#endif
# 677 "C:/Msys2/mingw64/include/stdlib.h" 3
  _CRTIMP void __cdecl _wsearchenv(const wchar_t *_Filename,const wchar_t *_EnvVar,wchar_t *_ResultPath) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
  _CRTIMP void __cdecl _wsplitpath(const wchar_t *_FullPath,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,wchar_t *_Ext) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
#endif
# 680 "C:/Msys2/mingw64/include/stdlib.h" 3

  _CRTIMP void __cdecl _beep(unsigned _Frequency,unsigned _Duration) __MINGW_ATTRIB_DEPRECATED;
  /* Not to be confused with  _set_error_mode (int).  */
  _CRTIMP void __cdecl _seterrormode(int _Mode) __MINGW_ATTRIB_DEPRECATED;
  _CRTIMP void __cdecl _sleep(unsigned long _Duration) __MINGW_ATTRIB_DEPRECATED;
#endif
# 686 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifndef	NO_OLDNAMES
#ifndef _POSIX_
#if 0 /* disabled by -frewrite-includes */
#if 0
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 690 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef __cplusplus
#ifndef NOMINMAX
#ifndef max
#define max(a,b) (((a) > (b)) ? (a) : (b))
#endif
# 695 "C:/Msys2/mingw64/include/stdlib.h" 3
#ifndef min
#define min(a,b) (((a) < (b)) ? (a) : (b))
#endif
# 698 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 699 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 700 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 701 "C:/Msys2/mingw64/include/stdlib.h" 3

#define sys_errlist _sys_errlist
#define sys_nerr _sys_nerr
#define environ _environ
  char *__cdecl ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  char *__cdecl fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  char *__cdecl gcvt(double _Val,int _NumOfDigits,char *_DstBuf) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  char *__cdecl itoa(int _Val,char *_DstBuf,int _Radix) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  char *__cdecl ltoa(long _Val,char *_DstBuf,int _Radix) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  int __cdecl putenv(const char *_EnvString) __MINGW_ATTRIB_DEPRECATED_MSVC2005;

#ifndef _CRT_SWAB_DEFINED
#define _CRT_SWAB_DEFINED  /* Also in unistd.h */
  void __cdecl swab(char *_Buf1,char *_Buf2,int _SizeInBytes) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
#endif
# 716 "C:/Msys2/mingw64/include/stdlib.h" 3

  char *__cdecl ultoa(unsigned long _Val,char *_Dstbuf,int _Radix) __MINGW_ATTRIB_DEPRECATED_MSVC2005;
  onexit_t __cdecl onexit(onexit_t _Func);
#endif
# 720 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif
# 721 "C:/Msys2/mingw64/include/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined __NO_ISOCEXT /* externs in static libmingwex.a */
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 723 "C:/Msys2/mingw64/include/stdlib.h" 3

  typedef struct { __MINGW_EXTENSION long long quot, rem; } lldiv_t;

  __MINGW_EXTENSION lldiv_t __cdecl lldiv(long long, long long);

  __MINGW_EXTENSION long long __cdecl llabs(long long);
#ifndef __CRT__NO_INLINE
  __MINGW_EXTENSION __CRT_INLINE long long __cdecl llabs(long long _j) { return (_j >= 0 ? _j : -_j); }
#endif
# 732 "C:/Msys2/mingw64/include/stdlib.h" 3

  __MINGW_EXTENSION long long  __cdecl strtoll(const char * __restrict__, char ** __restrict, int);
  __MINGW_EXTENSION unsigned long long  __cdecl strtoull(const char * __restrict__, char ** __restrict__, int);

  /* these are stubs for MS _i64 versions */
  __MINGW_EXTENSION long long  __cdecl atoll (const char *);

#ifndef __STRICT_ANSI__
  __MINGW_EXTENSION long long  __cdecl wtoll (const wchar_t *);
  __MINGW_EXTENSION char *__cdecl lltoa (long long, char *, int);
  __MINGW_EXTENSION char *__cdecl ulltoa (unsigned long long , char *, int);
  __MINGW_EXTENSION wchar_t *__cdecl lltow (long long, wchar_t *, int);
  __MINGW_EXTENSION wchar_t *__cdecl ulltow (unsigned long long, wchar_t *, int);

  /* __CRT_INLINE using non-ansi functions */
#ifndef __CRT__NO_INLINE
  __MINGW_EXTENSION __CRT_INLINE long long  __cdecl atoll (const char * _c) { return _atoi64 (_c); }
  __MINGW_EXTENSION __CRT_INLINE char *__cdecl lltoa (long long _n, char * _c, int _i) { return _i64toa (_n, _c, _i); }
  __MINGW_EXTENSION __CRT_INLINE char *__cdecl ulltoa (unsigned long long _n, char * _c, int _i) { return _ui64toa (_n, _c, _i); }
  __MINGW_EXTENSION __CRT_INLINE long long  __cdecl wtoll (const wchar_t * _w) { return _wtoi64 (_w); }
  __MINGW_EXTENSION __CRT_INLINE wchar_t *__cdecl lltow (long long _n, wchar_t * _w, int _i) { return _i64tow (_n, _w, _i); }
  __MINGW_EXTENSION __CRT_INLINE wchar_t *__cdecl ulltow (unsigned long long _n, wchar_t * _w, int _i) { return _ui64tow (_n, _w, _i); }
#endif /* !__CRT__NO_INLINE */
# 755 "C:/Msys2/mingw64/include/stdlib.h" 3
#endif /* (__STRICT_ANSI__)  */
# 756 "C:/Msys2/mingw64/include/stdlib.h" 3

#endif /* !__NO_ISOCEXT */
# 758 "C:/Msys2/mingw64/include/stdlib.h" 3

#ifdef __cplusplus
}
#endif
# 762 "C:/Msys2/mingw64/include/stdlib.h" 3

#pragma pack(pop)

#if 0 /* expanded by -frewrite-includes */
#include <sec_api/stdlib_s.h>
#endif /* expanded by -frewrite-includes */
# 765 "C:/Msys2/mingw64/include/stdlib.h" 3
# 766 "C:/Msys2/mingw64/include/stdlib.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <malloc.h>
#endif /* expanded by -frewrite-includes */
# 766 "C:/Msys2/mingw64/include/stdlib.h" 3
# 767 "C:/Msys2/mingw64/include/stdlib.h" 3

#endif
# 769 "C:/Msys2/mingw64/include/stdlib.h" 3
# 31 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 2 3
#else
# 32 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3

#ifndef _GLIBCXX_STDLIB_H
#define _GLIBCXX_STDLIB_H 1

#if 0 /* expanded by -frewrite-includes */
# include <cstdlib>
#endif /* expanded by -frewrite-includes */
# 36 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
# 37 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3

using std::abort;
using std::atexit;
using std::exit;
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 42 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
# ifdef _GLIBCXX_HAVE_AT_QUICK_EXIT
  using std::at_quick_exit;
# endif
# 45 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
# ifdef _GLIBCXX_HAVE_QUICK_EXIT
  using std::quick_exit;
# endif
# 48 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
#endif
# 49 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3

#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_HOSTED
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 51 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
using std::div_t;
using std::ldiv_t;

using std::abs;
using std::atof;
using std::atoi;
using std::atol;
using std::bsearch;
using std::calloc;
using std::div;
using std::free;
using std::getenv;
using std::labs;
using std::ldiv;
using std::malloc;
#ifdef _GLIBCXX_HAVE_MBSTATE_T
using std::mblen;
using std::mbstowcs;
using std::mbtowc;
#endif // _GLIBCXX_HAVE_MBSTATE_T
# 71 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
using std::qsort;
using std::rand;
using std::realloc;
using std::srand;
using std::strtod;
using std::strtol;
using std::strtoul;
using std::system;
#ifdef _GLIBCXX_USE_WCHAR_T
using std::wcstombs;
using std::wctomb;
#endif // _GLIBCXX_USE_WCHAR_T
# 83 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
#endif
# 84 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3

#endif // _GLIBCXX_STDLIB_H
# 86 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
#endif // __cplusplus
# 87 "C:/Msys2/mingw64/include/c++/11.2.0/stdlib.h" 3
# 14 "C:/Msys2/mingw64/lib/clang/14.0.0/include/mm_malloc.h" 2 3

#ifdef _WIN32
#if 0 /* expanded by -frewrite-includes */
#include <malloc.h>
#endif /* expanded by -frewrite-includes */
# 16 "C:/Msys2/mingw64/lib/clang/14.0.0/include/mm_malloc.h" 3
# 1 "C:/Msys2/mingw64/include/malloc.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _MALLOC_H_
#define _MALLOC_H_

#if 0 /* expanded by -frewrite-includes */
#include <crtdefs.h>
#endif /* expanded by -frewrite-includes */
# 9 "C:/Msys2/mingw64/include/malloc.h" 3
# 10 "C:/Msys2/mingw64/include/malloc.h" 3

#pragma pack(push,_CRT_PACKING)

#ifdef __cplusplus
extern "C" {
#endif
# 16 "C:/Msys2/mingw64/include/malloc.h" 3

#ifdef _WIN64
#define _HEAP_MAXREQ 0xFFFFFFFFFFFFFFE0
#else
# 20 "C:/Msys2/mingw64/include/malloc.h" 3
#define _HEAP_MAXREQ 0xFFFFFFE0
#endif
# 22 "C:/Msys2/mingw64/include/malloc.h" 3

#ifndef _STATIC_ASSERT
#if 0 /* disabled by -frewrite-includes */
#if defined(_MSC_VER)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 25 "C:/Msys2/mingw64/include/malloc.h" 3
#define _STATIC_ASSERT(expr) typedef char __static_assert_t[(expr)]
#else
# 27 "C:/Msys2/mingw64/include/malloc.h" 3
#define _STATIC_ASSERT(expr) extern void __static_assert_t(int [(expr)?1:-1])
#endif
# 29 "C:/Msys2/mingw64/include/malloc.h" 3
#endif
# 30 "C:/Msys2/mingw64/include/malloc.h" 3

/* Return codes for _heapwalk()  */
#define _HEAPEMPTY (-1)
#define _HEAPOK (-2)
#define _HEAPBADBEGIN (-3)
#define _HEAPBADNODE (-4)
#define _HEAPEND (-5)
#define _HEAPBADPTR (-6)

/* Values for _heapinfo.useflag */
#define _FREEENTRY 0
#define _USEDENTRY 1

#ifndef _HEAPINFO_DEFINED
#define _HEAPINFO_DEFINED
 /* The structure used to walk through the heap with _heapwalk.  */
  typedef struct _heapinfo {
    int *_pentry;
    size_t _size;
    int _useflag;
  } _HEAPINFO;
#endif
# 52 "C:/Msys2/mingw64/include/malloc.h" 3

  extern unsigned int _amblksiz;

#ifndef _CRT_ALLOCATION_DEFINED
#define _CRT_ALLOCATION_DEFINED
  void *__cdecl calloc(size_t _NumOfElements,size_t _SizeOfElements);
  void __cdecl free(void *_Memory);
  void *__cdecl malloc(size_t _Size);
  void *__cdecl realloc(void *_Memory,size_t _NewSize);
  _CRTIMP void *__cdecl _recalloc(void *_Memory,size_t _Count,size_t _Size);

  _CRTIMP void __cdecl _aligned_free(void *_Memory);
  _CRTIMP void *__cdecl _aligned_malloc(size_t _Size,size_t _Alignment);

  _CRTIMP void *__cdecl _aligned_offset_malloc(size_t _Size,size_t _Alignment,size_t _Offset);
  _CRTIMP void *__cdecl _aligned_realloc(void *_Memory,size_t _Size,size_t _Alignment);
  _CRTIMP void *__cdecl _aligned_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment);
  _CRTIMP void *__cdecl _aligned_offset_realloc(void *_Memory,size_t _Size,size_t _Alignment,size_t _Offset);
  _CRTIMP void *__cdecl _aligned_offset_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment,size_t _Offset);
#endif
# 72 "C:/Msys2/mingw64/include/malloc.h" 3

/* Users should really use MS provided versions */
void * __mingw_aligned_malloc (size_t _Size, size_t _Alignment);
void __mingw_aligned_free (void *_Memory);
void * __mingw_aligned_offset_realloc (void *_Memory, size_t _Size, size_t _Alignment, size_t _Offset);
void * __mingw_aligned_realloc (void *_Memory, size_t _Size, size_t _Offset);

/* Get the compiler's definition of _mm_malloc and _mm_free. */
#if 0 /* expanded by -frewrite-includes */
#include <mm_malloc.h>
#endif /* expanded by -frewrite-includes */
# 80 "C:/Msys2/mingw64/include/malloc.h" 3
# 81 "C:/Msys2/mingw64/include/malloc.h" 3

#define _MAX_WAIT_MALLOC_CRT 60000

#ifdef _CRT_USE_WINAPI_FAMILY_DESKTOP_APP
  _CRTIMP int __cdecl _resetstkoflw (void);
#endif /* _CRT_USE_WINAPI_FAMILY_DESKTOP_APP */
# 87 "C:/Msys2/mingw64/include/malloc.h" 3
  _CRTIMP unsigned long __cdecl _set_malloc_crt_max_wait(unsigned long _NewValue);

  _CRTIMP void *__cdecl _expand(void *_Memory,size_t _NewSize);
  _CRTIMP size_t __cdecl _msize(void *_Memory);
#ifdef __GNUC__
#undef _alloca
#define _alloca(x) __builtin_alloca((x))
#else
# 95 "C:/Msys2/mingw64/include/malloc.h" 3
  void *__cdecl _alloca(size_t _Size) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
#endif
# 97 "C:/Msys2/mingw64/include/malloc.h" 3
  _CRTIMP size_t __cdecl _get_sbh_threshold(void);
  _CRTIMP int __cdecl _set_sbh_threshold(size_t _NewValue);
  _CRTIMP errno_t __cdecl _set_amblksiz(size_t _Value);
  _CRTIMP errno_t __cdecl _get_amblksiz(size_t *_Value);
  _CRTIMP int __cdecl _heapadd(void *_Memory,size_t _Size);
  _CRTIMP int __cdecl _heapchk(void);
  _CRTIMP int __cdecl _heapmin(void);
  _CRTIMP int __cdecl _heapset(unsigned int _Fill);
  _CRTIMP int __cdecl _heapwalk(_HEAPINFO *_EntryInfo);
  _CRTIMP size_t __cdecl _heapused(size_t *_Used,size_t *_Commit);
  _CRTIMP intptr_t __cdecl _get_heap_handle(void);

#define _ALLOCA_S_THRESHOLD 1024
#define _ALLOCA_S_STACK_MARKER 0xCCCC
#define _ALLOCA_S_HEAP_MARKER 0xDDDD

#if 0 /* disabled by -frewrite-includes */
#if defined(_ARM_) || (defined(_X86_) && !defined(__x86_64))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 114 "C:/Msys2/mingw64/include/malloc.h" 3
#define _ALLOCA_S_MARKER_SIZE 8
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(__ia64__) || defined(__x86_64) || defined(__aarch64__)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 116 "C:/Msys2/mingw64/include/malloc.h" 3
#define _ALLOCA_S_MARKER_SIZE 16
#endif
# 118 "C:/Msys2/mingw64/include/malloc.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined(RC_INVOKED)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 120 "C:/Msys2/mingw64/include/malloc.h" 3
  static __inline void *_MarkAllocaS(void *_Ptr,unsigned int _Marker) {
    if(_Ptr) {
      *((unsigned int*)_Ptr) = _Marker;
      _Ptr = (char*)_Ptr + _ALLOCA_S_MARKER_SIZE;
    }
    return _Ptr;
  }
#endif
# 128 "C:/Msys2/mingw64/include/malloc.h" 3

#undef _malloca
#define _malloca(size) \
  ((((size) + _ALLOCA_S_MARKER_SIZE) <= _ALLOCA_S_THRESHOLD) ? \
    _MarkAllocaS(_alloca((size) + _ALLOCA_S_MARKER_SIZE),_ALLOCA_S_STACK_MARKER) : \
    _MarkAllocaS(malloc((size) + _ALLOCA_S_MARKER_SIZE),_ALLOCA_S_HEAP_MARKER))
#undef _FREEA_INLINE
#define _FREEA_INLINE

#ifndef RC_INVOKED
#undef _freea
  static __inline void __cdecl _freea(void *_Memory) {
    unsigned int _Marker;
    if(_Memory) {
      _Memory = (char*)_Memory - _ALLOCA_S_MARKER_SIZE;
      _Marker = *(unsigned int *)_Memory;
      if(_Marker==_ALLOCA_S_HEAP_MARKER) {
	free(_Memory);
      }
#ifdef _ASSERTE
      else if(_Marker!=_ALLOCA_S_STACK_MARKER) {
	_ASSERTE(("Corrupted pointer passed to _freea",0));
      }
#endif
# 152 "C:/Msys2/mingw64/include/malloc.h" 3
    }
  }
#endif /* RC_INVOKED */
# 155 "C:/Msys2/mingw64/include/malloc.h" 3

#ifndef	NO_OLDNAMES
#undef alloca
#ifdef __GNUC__
#define alloca(x) __builtin_alloca((x))
#else
# 161 "C:/Msys2/mingw64/include/malloc.h" 3
#define alloca _alloca
#endif
# 163 "C:/Msys2/mingw64/include/malloc.h" 3
#endif
# 164 "C:/Msys2/mingw64/include/malloc.h" 3

#ifdef HEAPHOOK
#ifndef _HEAPHOOK_DEFINED
#define _HEAPHOOK_DEFINED
  typedef int (__cdecl *_HEAPHOOK)(int,size_t,void *,void **);
#endif
# 170 "C:/Msys2/mingw64/include/malloc.h" 3

  _CRTIMP _HEAPHOOK __cdecl _setheaphook(_HEAPHOOK _NewHook);

#define _HEAP_MALLOC 1
#define _HEAP_CALLOC 2
#define _HEAP_FREE 3
#define _HEAP_REALLOC 4
#define _HEAP_MSIZE 5
#define _HEAP_EXPAND 6
#endif
# 180 "C:/Msys2/mingw64/include/malloc.h" 3

#ifdef __cplusplus
}
#endif
# 184 "C:/Msys2/mingw64/include/malloc.h" 3

#pragma pack(pop)

#endif /* _MALLOC_H_ */
# 188 "C:/Msys2/mingw64/include/malloc.h" 3
# 17 "C:/Msys2/mingw64/lib/clang/14.0.0/include/mm_malloc.h" 2 3
#else
# 18 "C:/Msys2/mingw64/lib/clang/14.0.0/include/mm_malloc.h" 3
#ifndef __cplusplus
extern int posix_memalign(void **__memptr, size_t __alignment, size_t __size);
#else
# 21 "C:/Msys2/mingw64/lib/clang/14.0.0/include/mm_malloc.h" 3
// Some systems (e.g. those with GNU libc) declare posix_memalign with an
// exception specifier. Via an "egregious workaround" in
// Sema::CheckEquivalentExceptionSpec, Clang accepts the following as a valid
// redeclaration of glibc's declaration.
extern "C" int posix_memalign(void **__memptr, size_t __alignment, size_t __size);
#endif
# 27 "C:/Msys2/mingw64/lib/clang/14.0.0/include/mm_malloc.h" 3
#endif
# 28 "C:/Msys2/mingw64/lib/clang/14.0.0/include/mm_malloc.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !(defined(_WIN32) && defined(_mm_malloc))
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 30 "C:/Msys2/mingw64/lib/clang/14.0.0/include/mm_malloc.h" 3
static __inline__ void *__attribute__((__always_inline__, __nodebug__,
                                       __malloc__))
_mm_malloc(size_t __size, size_t __align)
{
  if (__align == 1) {
    return malloc(__size);
  }

  if (!(__align & (__align - 1)) && __align < sizeof(void *))
    __align = sizeof(void *);

  void *__mallocedMemory;
#if 0 /* disabled by -frewrite-includes */
#if defined(__MINGW32__)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 43 "C:/Msys2/mingw64/lib/clang/14.0.0/include/mm_malloc.h" 3
  __mallocedMemory = __mingw_aligned_malloc(__size, __align);
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(_WIN32)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 45 "C:/Msys2/mingw64/lib/clang/14.0.0/include/mm_malloc.h" 3
  __mallocedMemory = _aligned_malloc(__size, __align);
#else
# 47 "C:/Msys2/mingw64/lib/clang/14.0.0/include/mm_malloc.h" 3
  if (posix_memalign(&__mallocedMemory, __align, __size))
    return 0;
#endif
# 50 "C:/Msys2/mingw64/lib/clang/14.0.0/include/mm_malloc.h" 3

  return __mallocedMemory;
}

static __inline__ void __attribute__((__always_inline__, __nodebug__))
_mm_free(void *__p)
{
#if 0 /* disabled by -frewrite-includes */
#if defined(__MINGW32__)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 58 "C:/Msys2/mingw64/lib/clang/14.0.0/include/mm_malloc.h" 3
  __mingw_aligned_free(__p);
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(_WIN32)
#endif
#endif /* disabled by -frewrite-includes */
#elif 0 /* evaluated by -frewrite-includes */
# 60 "C:/Msys2/mingw64/lib/clang/14.0.0/include/mm_malloc.h" 3
  _aligned_free(__p);
#else
# 62 "C:/Msys2/mingw64/lib/clang/14.0.0/include/mm_malloc.h" 3
  free(__p);
#endif
# 64 "C:/Msys2/mingw64/lib/clang/14.0.0/include/mm_malloc.h" 3
}
#endif
# 66 "C:/Msys2/mingw64/lib/clang/14.0.0/include/mm_malloc.h" 3

#endif /* __MM_MALLOC_H */
# 68 "C:/Msys2/mingw64/lib/clang/14.0.0/include/mm_malloc.h" 3
# 81 "C:/Msys2/mingw64/include/malloc.h" 2 3

#define _MAX_WAIT_MALLOC_CRT 60000

#ifdef _CRT_USE_WINAPI_FAMILY_DESKTOP_APP
  _CRTIMP int __cdecl _resetstkoflw (void);
#endif /* _CRT_USE_WINAPI_FAMILY_DESKTOP_APP */
# 87 "C:/Msys2/mingw64/include/malloc.h" 3
  _CRTIMP unsigned long __cdecl _set_malloc_crt_max_wait(unsigned long _NewValue);

  _CRTIMP void *__cdecl _expand(void *_Memory,size_t _NewSize);
  _CRTIMP size_t __cdecl _msize(void *_Memory);
#ifdef __GNUC__
#undef _alloca
#define _alloca(x) __builtin_alloca((x))
#else
# 95 "C:/Msys2/mingw64/include/malloc.h" 3
  void *__cdecl _alloca(size_t _Size) __MINGW_ATTRIB_DEPRECATED_SEC_WARN;
#endif
# 97 "C:/Msys2/mingw64/include/malloc.h" 3
  _CRTIMP size_t __cdecl _get_sbh_threshold(void);
  _CRTIMP int __cdecl _set_sbh_threshold(size_t _NewValue);
  _CRTIMP errno_t __cdecl _set_amblksiz(size_t _Value);
  _CRTIMP errno_t __cdecl _get_amblksiz(size_t *_Value);
  _CRTIMP int __cdecl _heapadd(void *_Memory,size_t _Size);
  _CRTIMP int __cdecl _heapchk(void);
  _CRTIMP int __cdecl _heapmin(void);
  _CRTIMP int __cdecl _heapset(unsigned int _Fill);
  _CRTIMP int __cdecl _heapwalk(_HEAPINFO *_EntryInfo);
  _CRTIMP size_t __cdecl _heapused(size_t *_Used,size_t *_Commit);
  _CRTIMP intptr_t __cdecl _get_heap_handle(void);

#define _ALLOCA_S_THRESHOLD 1024
#define _ALLOCA_S_STACK_MARKER 0xCCCC
#define _ALLOCA_S_HEAP_MARKER 0xDDDD

#if 0 /* disabled by -frewrite-includes */
#if defined(_ARM_) || (defined(_X86_) && !defined(__x86_64))
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 114 "C:/Msys2/mingw64/include/malloc.h" 3
#define _ALLOCA_S_MARKER_SIZE 8
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif defined(__ia64__) || defined(__x86_64) || defined(__aarch64__)
#endif
#endif /* disabled by -frewrite-includes */
#elif 1 /* evaluated by -frewrite-includes */
# 116 "C:/Msys2/mingw64/include/malloc.h" 3
#define _ALLOCA_S_MARKER_SIZE 16
#endif
# 118 "C:/Msys2/mingw64/include/malloc.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined(RC_INVOKED)
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 120 "C:/Msys2/mingw64/include/malloc.h" 3
  static __inline void *_MarkAllocaS(void *_Ptr,unsigned int _Marker) {
    if(_Ptr) {
      *((unsigned int*)_Ptr) = _Marker;
      _Ptr = (char*)_Ptr + _ALLOCA_S_MARKER_SIZE;
    }
    return _Ptr;
  }
#endif
# 128 "C:/Msys2/mingw64/include/malloc.h" 3

#undef _malloca
#define _malloca(size) \
  ((((size) + _ALLOCA_S_MARKER_SIZE) <= _ALLOCA_S_THRESHOLD) ? \
    _MarkAllocaS(_alloca((size) + _ALLOCA_S_MARKER_SIZE),_ALLOCA_S_STACK_MARKER) : \
    _MarkAllocaS(malloc((size) + _ALLOCA_S_MARKER_SIZE),_ALLOCA_S_HEAP_MARKER))
#undef _FREEA_INLINE
#define _FREEA_INLINE

#ifndef RC_INVOKED
#undef _freea
  static __inline void __cdecl _freea(void *_Memory) {
    unsigned int _Marker;
    if(_Memory) {
      _Memory = (char*)_Memory - _ALLOCA_S_MARKER_SIZE;
      _Marker = *(unsigned int *)_Memory;
      if(_Marker==_ALLOCA_S_HEAP_MARKER) {
	free(_Memory);
      }
#ifdef _ASSERTE
      else if(_Marker!=_ALLOCA_S_STACK_MARKER) {
	_ASSERTE(("Corrupted pointer passed to _freea",0));
      }
#endif
# 152 "C:/Msys2/mingw64/include/malloc.h" 3
    }
  }
#endif /* RC_INVOKED */
# 155 "C:/Msys2/mingw64/include/malloc.h" 3

#ifndef	NO_OLDNAMES
#undef alloca
#ifdef __GNUC__
#define alloca(x) __builtin_alloca((x))
#else
# 161 "C:/Msys2/mingw64/include/malloc.h" 3
#define alloca _alloca
#endif
# 163 "C:/Msys2/mingw64/include/malloc.h" 3
#endif
# 164 "C:/Msys2/mingw64/include/malloc.h" 3

#ifdef HEAPHOOK
#ifndef _HEAPHOOK_DEFINED
#define _HEAPHOOK_DEFINED
  typedef int (__cdecl *_HEAPHOOK)(int,size_t,void *,void **);
#endif
# 170 "C:/Msys2/mingw64/include/malloc.h" 3

  _CRTIMP _HEAPHOOK __cdecl _setheaphook(_HEAPHOOK _NewHook);

#define _HEAP_MALLOC 1
#define _HEAP_CALLOC 2
#define _HEAP_FREE 3
#define _HEAP_REALLOC 4
#define _HEAP_MSIZE 5
#define _HEAP_EXPAND 6
#endif
# 180 "C:/Msys2/mingw64/include/malloc.h" 3

#ifdef __cplusplus
}
#endif
# 184 "C:/Msys2/mingw64/include/malloc.h" 3

#pragma pack(pop)

#endif /* _MALLOC_H_ */
# 188 "C:/Msys2/mingw64/include/malloc.h" 3
# 767 "C:/Msys2/mingw64/include/stdlib.h" 2 3

#endif
# 769 "C:/Msys2/mingw64/include/stdlib.h" 3
# 76 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 2 3
#undef _GLIBCXX_INCLUDE_NEXT_C_HEADERS
#if 0 /* expanded by -frewrite-includes */
#include <bits/std_abs.h>
#endif /* expanded by -frewrite-includes */
# 77 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
# 1 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 1 3
// -*- C++ -*- C library enhancements header.

// Copyright (C) 2016-2021 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file include/bits/std_abs.h
 *  This is an internal header file, included by other library headers.
 *  Do not attempt to use it directly. @headername{cmath, cstdlib}
 */

#ifndef _GLIBCXX_BITS_STD_ABS_H
#define _GLIBCXX_BITS_STD_ABS_H

#if 0 /* expanded by -frewrite-includes */
#pragma GCC system_header
#endif /* expanded by -frewrite-includes */
# 34 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3

#if 0 /* expanded by -frewrite-includes */
#include <bits/c++config.h>
#endif /* expanded by -frewrite-includes */
# 35 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3
# 36 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3

#define _GLIBCXX_INCLUDE_NEXT_C_HEADERS
#if 0 /* expanded by -frewrite-includes */
#include_next <stdlib.h>
#endif /* expanded by -frewrite-includes */
# 38 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3
# 39 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3
#ifdef __CORRECT_ISO_CPP_MATH_H_PROTO
#if 0 /* expanded by -frewrite-includes */
# include_next <math.h>
#endif /* expanded by -frewrite-includes */
# 40 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3
# 41 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3
#endif
# 42 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3
#undef _GLIBCXX_INCLUDE_NEXT_C_HEADERS

#undef abs

extern "C++"
{
namespace std _GLIBCXX_VISIBILITY(default)
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION

  using ::abs;

#ifndef __CORRECT_ISO_CPP_STDLIB_H_PROTO
  inline long
  abs(long __i) { return __builtin_labs(__i); }
#endif
# 58 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3

#ifdef _GLIBCXX_USE_LONG_LONG
  inline long long
  abs(long long __x) { return __builtin_llabs (__x); }
#endif
# 63 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3

// _GLIBCXX_RESOLVE_LIB_DEFECTS
// 2192. Validity and return type of std::abs(0u) is unclear
// 2294. <cstdlib> should declare abs(double)
// 2735. std::abs(short), std::abs(signed char) and others should return int

#ifndef __CORRECT_ISO_CPP_MATH_H_PROTO
  inline _GLIBCXX_CONSTEXPR double
  abs(double __x)
  { return __builtin_fabs(__x); }

  inline _GLIBCXX_CONSTEXPR float
  abs(float __x)
  { return __builtin_fabsf(__x); }

  inline _GLIBCXX_CONSTEXPR long double
  abs(long double __x)
  { return __builtin_fabsl(__x); }
#endif
# 82 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3

#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_0)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 84 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3
  inline _GLIBCXX_CONSTEXPR __GLIBCXX_TYPE_INT_N_0
  abs(__GLIBCXX_TYPE_INT_N_0 __x) { return __x >= 0 ? __x : -__x; }
#endif
# 87 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_1)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 88 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3
  inline _GLIBCXX_CONSTEXPR __GLIBCXX_TYPE_INT_N_1
  abs(__GLIBCXX_TYPE_INT_N_1 __x) { return __x >= 0 ? __x : -__x; }
#endif
# 91 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_2)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 92 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3
  inline _GLIBCXX_CONSTEXPR __GLIBCXX_TYPE_INT_N_2
  abs(__GLIBCXX_TYPE_INT_N_2 __x) { return __x >= 0 ? __x : -__x; }
#endif
# 95 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3
#if 0 /* disabled by -frewrite-includes */
#if defined(__GLIBCXX_TYPE_INT_N_3)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 96 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3
  inline _GLIBCXX_CONSTEXPR __GLIBCXX_TYPE_INT_N_3
  abs(__GLIBCXX_TYPE_INT_N_3 __x) { return __x >= 0 ? __x : -__x; }
#endif
# 99 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3

#if 0 /* disabled by -frewrite-includes */
#if !defined(__STRICT_ANSI__) && defined(_GLIBCXX_USE_FLOAT128)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 101 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3
  inline _GLIBCXX_CONSTEXPR
  __float128
  abs(__float128 __x)
  { return __x < 0 ? -__x : __x; }
#endif
# 106 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3

_GLIBCXX_END_NAMESPACE_VERSION
} // namespace
} // extern "C"++"

#endif // _GLIBCXX_BITS_STD_ABS_H
# 112 "C:/Msys2/mingw64/include/c++/11.2.0/bits/std_abs.h" 3
# 78 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 2 3

// Get rid of those macros defined in <stdlib.h> in lieu of real functions.
#undef abort
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201703L && defined(_GLIBCXX_HAVE_ALIGNED_ALLOC)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 82 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
# undef aligned_alloc
#endif
# 84 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
#undef atexit
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 86 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
# ifdef _GLIBCXX_HAVE_AT_QUICK_EXIT
#  undef at_quick_exit
# endif
# 89 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
#endif
# 90 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
#undef atof
#undef atoi
#undef atol
#undef bsearch
#undef calloc
#undef div
#undef exit
#undef free
#undef getenv
#undef labs
#undef ldiv
#undef malloc
#undef mblen
#undef mbstowcs
#undef mbtowc
#undef qsort
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 107 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
# ifdef _GLIBCXX_HAVE_QUICK_EXIT
#  undef quick_exit
# endif
# 110 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
#endif
# 111 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
#undef rand
#undef realloc
#undef srand
#undef strtod
#undef strtol
#undef strtoul
#undef system
#undef wcstombs
#undef wctomb

extern "C++"
{
namespace std _GLIBCXX_VISIBILITY(default)
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION

  using ::div_t;
  using ::ldiv_t;

  using ::abort;
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201703L && defined(_GLIBCXX_HAVE_ALIGNED_ALLOC)
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 132 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
  using ::aligned_alloc;
#endif
# 134 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
  using ::atexit;
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 136 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
# ifdef _GLIBCXX_HAVE_AT_QUICK_EXIT
  using ::at_quick_exit;
# endif
# 139 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
#endif
# 140 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
  using ::atof;
  using ::atoi;
  using ::atol;
  using ::bsearch;
  using ::calloc;
  using ::div;
  using ::exit;
  using ::free;
  using ::getenv;
  using ::labs;
  using ::ldiv;
  using ::malloc;
#ifdef _GLIBCXX_HAVE_MBSTATE_T
  using ::mblen;
  using ::mbstowcs;
  using ::mbtowc;
#endif // _GLIBCXX_HAVE_MBSTATE_T
# 157 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
  using ::qsort;
#if 0 /* disabled by -frewrite-includes */
#if __cplusplus >= 201103L
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 159 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
# ifdef _GLIBCXX_HAVE_QUICK_EXIT
  using ::quick_exit;
# endif
# 162 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
#endif
# 163 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
  using ::rand;
  using ::realloc;
  using ::srand;
  using ::strtod;
  using ::strtol;
  using ::strtoul;
  using ::system;
#ifdef _GLIBCXX_USE_WCHAR_T
  using ::wcstombs;
  using ::wctomb;
#endif // _GLIBCXX_USE_WCHAR_T
# 174 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3

#ifndef __CORRECT_ISO_CPP_STDLIB_H_PROTO
  inline ldiv_t
  div(long __i, long __j) { return ldiv(__i, __j); }
#endif
# 179 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3


_GLIBCXX_END_NAMESPACE_VERSION
} // namespace

#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_USE_C99_STDLIB
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 185 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3

#undef _Exit
#undef llabs
#undef lldiv
#undef atoll
#undef strtoll
#undef strtoull
#undef strtof
#undef strtold

namespace __gnu_cxx _GLIBCXX_VISIBILITY(default)
{
_GLIBCXX_BEGIN_NAMESPACE_VERSION

#if 0 /* disabled by -frewrite-includes */
#if !_GLIBCXX_USE_C99_LONG_LONG_DYNAMIC
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 200 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
  using ::lldiv_t;
#endif
# 202 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_USE_C99_CHECK || _GLIBCXX_USE_C99_DYNAMIC
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 203 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
  extern "C" void (_Exit)(int) throw () _GLIBCXX_NORETURN;
#endif
# 205 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
#if 0 /* disabled by -frewrite-includes */
#if !_GLIBCXX_USE_C99_DYNAMIC
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 206 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
  using ::_Exit;
#endif
# 208 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3

#if 0 /* disabled by -frewrite-includes */
#if !_GLIBCXX_USE_C99_LONG_LONG_DYNAMIC
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 210 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
  using ::llabs;

  inline lldiv_t
  div(long long __n, long long __d)
  { lldiv_t __q; __q.quot = __n / __d; __q.rem = __n % __d; return __q; }

  using ::lldiv;
#endif
# 218 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3

#if 0 /* disabled by -frewrite-includes */
#if _GLIBCXX_USE_C99_LONG_LONG_CHECK || _GLIBCXX_USE_C99_LONG_LONG_DYNAMIC
#endif
#endif /* disabled by -frewrite-includes */
#if 0 /* evaluated by -frewrite-includes */
# 220 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
  extern "C" long long int (atoll)(const char *) throw ();
  extern "C" long long int
    (strtoll)(const char * __restrict, char ** __restrict, int) throw ();
  extern "C" unsigned long long int
    (strtoull)(const char * __restrict, char ** __restrict, int) throw ();
#endif
# 226 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
#if 0 /* disabled by -frewrite-includes */
#if !_GLIBCXX_USE_C99_LONG_LONG_DYNAMIC
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 227 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
  using ::atoll;
  using ::strtoll;
  using ::strtoull;
#endif
# 231 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
  using ::strtof;
  using ::strtold;

_GLIBCXX_END_NAMESPACE_VERSION
} // namespace __gnu_cxx

namespace std
{
#if 0 /* disabled by -frewrite-includes */
#if !_GLIBCXX_USE_C99_LONG_LONG_DYNAMIC
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 240 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
  using ::__gnu_cxx::lldiv_t;
#endif
# 242 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
  using ::__gnu_cxx::_Exit;
#if 0 /* disabled by -frewrite-includes */
#if !_GLIBCXX_USE_C99_LONG_LONG_DYNAMIC
#endif
#endif /* disabled by -frewrite-includes */
#if 1 /* evaluated by -frewrite-includes */
# 244 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
  using ::__gnu_cxx::llabs;
  using ::__gnu_cxx::div;
  using ::__gnu_cxx::lldiv;
#endif
# 248 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
  using ::__gnu_cxx::atoll;
  using ::__gnu_cxx::strtof;
  using ::__gnu_cxx::strtoll;
  using ::__gnu_cxx::strtoull;
  using ::__gnu_cxx::strtold;
} // namespace std

#endif // _GLIBCXX_USE_C99_STDLIB
# 256 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3

} // extern "C++"

#endif // !_GLIBCXX_HOSTED
# 260 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3

#endif
# 262 "C:/Msys2/mingw64/include/c++/11.2.0/cstdlib" 3
# 459 "multi-return.cpp" 2
#if 0 /* expanded by -frewrite-includes */
#include <csignal>
#endif /* expanded by -frewrite-includes */
# 459 "multi-return.cpp"
# 1 "C:/Msys2/mingw64/include/c++/11.2.0/csignal" 1 3
// -*- C++ -*- forwarding header.

// Copyright (C) 1997-2021 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file csignal
 *  This is a Standard C++ Library file.  You should @c \#include this file
 *  in your programs, rather than any of the @a *.h implementation files.
 *
 *  This is the C++ version of the Standard C Library header @c signal.h,
 *  and its contents are (mostly) the same as that header, but are all
 *  contained in the namespace @c std (except for names which are defined
 *  as macros in C).
 */

//
// ISO C++ 14882: 20.4.6  C library
//

#if 0 /* expanded by -frewrite-includes */
#pragma GCC system_header
#endif /* expanded by -frewrite-includes */
# 40 "C:/Msys2/mingw64/include/c++/11.2.0/csignal" 3

#if 0 /* expanded by -frewrite-includes */
#include <bits/c++config.h>
#endif /* expanded by -frewrite-includes */
# 41 "C:/Msys2/mingw64/include/c++/11.2.0/csignal" 3
# 42 "C:/Msys2/mingw64/include/c++/11.2.0/csignal" 3
#if 0 /* expanded by -frewrite-includes */
#include <signal.h>
#endif /* expanded by -frewrite-includes */
# 42 "C:/Msys2/mingw64/include/c++/11.2.0/csignal" 3
# 1 "C:/Msys2/mingw64/include/signal.h" 1 3
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the mingw-w64 runtime package.
 * No warranty is given; refer to the file DISCLAIMER.PD within this package.
 */
#ifndef _INC_SIGNAL
#define _INC_SIGNAL

#if 0 /* expanded by -frewrite-includes */
#include <crtdefs.h>
#endif /* expanded by -frewrite-includes */
# 9 "C:/Msys2/mingw64/include/signal.h" 3
# 10 "C:/Msys2/mingw64/include/signal.h" 3
#if 0 /* expanded by -frewrite-includes */
#include <pthread_signal.h>
#endif /* expanded by -frewrite-includes */
# 10 "C:/Msys2/mingw64/include/signal.h" 3
# 1 "C:/Msys2/mingw64/include/pthread_signal.h" 1 3
/*
   Copyright (c) 2013-2016  mingw-w64 project

   Permission is hereby granted, free of charge, to any person obtaining a
   copy of this software and associated documentation files (the "Software"),
   to deal in the Software without restriction, including without limitation
   the rights to use, copy, modify, merge, publish, distribute, sublicense,
   and/or sell copies of the Software, and to permit persons to whom the
   Software is furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included in
   all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
   FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
   DEALINGS IN THE SOFTWARE.
*/

#ifndef WIN_PTHREADS_SIGNAL_H
#define WIN_PTHREADS_SIGNAL_H

/* Windows has rudimentary signals support.  */
#define pthread_sigmask(H, S1, S2) 0

#endif /* WIN_PTHREADS_SIGNAL_H */
# 30 "C:/Msys2/mingw64/include/pthread_signal.h" 3
# 11 "C:/Msys2/mingw64/include/signal.h" 2 3

#ifdef __cplusplus
extern "C" {
#endif
# 15 "C:/Msys2/mingw64/include/signal.h" 3

#ifndef _SIG_ATOMIC_T_DEFINED
#define _SIG_ATOMIC_T_DEFINED
  typedef int sig_atomic_t;
#endif
# 20 "C:/Msys2/mingw64/include/signal.h" 3

#define NSIG 23

#define SIGINT 2
#define SIGILL 4
#define SIGABRT_COMPAT 6
#define SIGFPE 8
#define SIGSEGV 11
#define SIGTERM 15
#define SIGBREAK 21
#define SIGABRT 22       /* used by abort, replace SIGIOT in the future */
#define SIGABRT2 22

#ifdef _POSIX
#define	SIGHUP	1	/* hangup */
#define	SIGQUIT	3	/* quit */
#define	SIGTRAP	5	/* trace trap (not reset when caught) */
#define SIGIOT  6       /* IOT instruction */
#define	SIGEMT	7	/* EMT instruction */
#define	SIGKILL	9	/* kill (cannot be caught or ignored) */
#define	SIGBUS	10	/* bus error */
#define	SIGSYS	12	/* bad argument to system call */
#define	SIGPIPE	13	/* write on a pipe with no one to read it */
#ifdef __USE_MINGW_ALARM
#define	SIGALRM	14	/* alarm clock */
#endif
# 46 "C:/Msys2/mingw64/include/signal.h" 3
#endif
# 47 "C:/Msys2/mingw64/include/signal.h" 3

  typedef	void (*__p_sig_fn_t)(int);

#define SIG_DFL (__p_sig_fn_t)0
#define SIG_IGN (__p_sig_fn_t)1
#define SIG_GET (__p_sig_fn_t)2
#define SIG_SGE (__p_sig_fn_t)3
#define SIG_ACK (__p_sig_fn_t)4
#define SIG_ERR (__p_sig_fn_t)-1

  extern void **__cdecl __pxcptinfoptrs(void);
#define _pxcptinfoptrs (*__pxcptinfoptrs())

  __p_sig_fn_t __cdecl signal(int _SigNum,__p_sig_fn_t _Func);
  int __cdecl raise(int _SigNum);

#ifdef __cplusplus
}
#endif
# 66 "C:/Msys2/mingw64/include/signal.h" 3
#endif
# 67 "C:/Msys2/mingw64/include/signal.h" 3
# 43 "C:/Msys2/mingw64/include/c++/11.2.0/csignal" 2 3

#ifndef _GLIBCXX_CSIGNAL
#define _GLIBCXX_CSIGNAL 1

// Get rid of those macros defined in <signal.h> in lieu of real functions.
#undef raise

namespace std
{
  using ::sig_atomic_t;
  using ::signal;
  using ::raise;
} // namespace std

#endif
# 58 "C:/Msys2/mingw64/include/c++/11.2.0/csignal" 3
# 460 "multi-return.cpp" 2

int main(int, char*[]) /* noexcept */ {
  std::signal(SIGSEGV, +[](int const) { std::puts("segfault"), std::exit(EXIT_FAILURE); });
  std::puts("[begin]");

  constexpr static auto a1 = ($,  1); static_cast<void>(a1);
  constexpr static auto a2 = (a1, 2); static_cast<void>(a2);
  constexpr static auto a3 = (a2, 3); static_cast<void>(a3);

  constexpr static auto b1 = ($,  4); static_cast<void>(b1);
  constexpr static auto b2 = (b1, 5); static_cast<void>(b2);
  constexpr static auto b3 = (b2, 6); static_cast<void>(b3);

  constexpr static auto c = ($, $); static_cast<void>(c);
  #ifdef __circle_lang__
    constexpr        auto d = (($, 1),       ($, 2));
    constexpr        auto e = (($, 1, 2, 3), ($, 4, 5, 6));
    constexpr        auto f = (a1,           b1);
    constexpr        auto g = (a3,           b3);
  
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif (defined(__clang__) || defined(_MSC_VER) || (defined(__GNUC__) && false == (defined(__CUDACC_VER_BUILD__) || defined(__CUDACC_VER_MAJOR__) || defined(__CUDACC_VER_MINOR__) || defined(__ICC) || defined(__INTEL_COMPILER) || defined(__INTEL_LLVM_COMPILER) || defined(__NVCC__) || defined(__NVCOMPILER))))
#endif
#endif /* disabled by -frewrite-includes */
#elif 1 /* evaluated by -frewrite-includes */
# 480 "multi-return.cpp"
    constexpr static auto d = (($, 1),       ($, 2));
    constexpr static auto e = (($, 1, 2, 3), ($, 4, 5, 6));
    constexpr static auto f = (a1,           b1);
    constexpr static auto g = (a3,           b3);
  #else
# 485 "multi-return.cpp"
    const            auto d = (($, 1),       ($, 2));
    const            auto e = (($, 1, 2, 3), ($, 4, 5, 6));
    const            auto f = (a1,           b1);
    const            auto g = (a3,           b3);
  #endif
# 490 "multi-return.cpp"
  static_cast<void>(d), static_cast<void>(e), static_cast<void>(f), static_cast<void>(g);

  #ifdef __circle_lang__
    constexpr        auto h = ($, 1) + 1;
    constexpr        auto i = 1 + ($, 1);
    constexpr        auto j = ($, 1, 2, 3) + 1;
    constexpr        auto k = 1 + ($, 1, 2, 3);
  
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif (defined(__clang__) || defined(_MSC_VER) || (defined(__GNUC__) && false == (defined(__CUDACC_VER_BUILD__) || defined(__CUDACC_VER_MAJOR__) || defined(__CUDACC_VER_MINOR__) || defined(__ICC) || defined(__INTEL_COMPILER) || defined(__INTEL_LLVM_COMPILER) || defined(__NVCC__) || defined(__NVCOMPILER))))
#endif
#endif /* disabled by -frewrite-includes */
#elif 1 /* evaluated by -frewrite-includes */
# 498 "multi-return.cpp"
    constexpr static auto h = ($, 1) + 1;
    constexpr static auto i = 1 + ($, 1);
    constexpr static auto j = ($, 1, 2, 3) + 1;
    constexpr static auto k = 1 + ($, 1, 2, 3);
  #else
# 503 "multi-return.cpp"
    const     static auto h = ($, 1) + 1;
    const     static auto i = 1 + ($, 1);
    const     static auto j = ($, 1, 2, 3) + 1;
    const     static auto k = 1 + ($, 1, 2, 3);
  #endif
# 508 "multi-return.cpp"
  static_cast<void>(h), static_cast<void>(i), static_cast<void>(j), static_cast<void>(k);

  #ifdef __circle_lang__
    constexpr        auto w = ($, 1)       + ($, 2);
    constexpr        auto x = ($, 1, 2, 3) + ($, 4, 5, 6);
    constexpr        auto y = a1           + b1;
    constexpr        auto z = a3           + b3;
  
#if 0 /* disabled by -frewrite-includes */
#if 0
#elif (defined(__clang__) || defined(_MSC_VER) || (defined(__GNUC__) && false == (defined(__CUDACC_VER_BUILD__) || defined(__CUDACC_VER_MAJOR__) || defined(__CUDACC_VER_MINOR__) || defined(__ICC) || defined(__INTEL_COMPILER) || defined(__INTEL_LLVM_COMPILER) || defined(__NVCC__) || defined(__NVCOMPILER))))
#endif
#endif /* disabled by -frewrite-includes */
#elif 1 /* evaluated by -frewrite-includes */
# 516 "multi-return.cpp"
    constexpr static auto w = ($, 1)       + ($, 2);
    constexpr static auto x = ($, 1, 2, 3) + ($, 4, 5, 6);
    constexpr static auto y = a1           + b1;
    constexpr static auto z = a3           + b3;
  #else
# 521 "multi-return.cpp"
    const     static auto w = ($, 1)       + ($, 2);
    const     static auto x = ($, 1, 2, 3) + ($, 4, 5, 6);
    const     static auto y = a1           + b1;
    const     static auto z = a3           + b3;
  #endif
# 526 "multi-return.cpp"
  static_cast<void>(w), static_cast<void>(x), static_cast<void>(y), static_cast<void>(z);

  std::puts("[end]");
}
