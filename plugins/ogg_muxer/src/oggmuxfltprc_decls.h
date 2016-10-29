/**
 * Copyright (C) 2011-2016 Aratelia Limited - Juan A. Rubio
 *
 * This file is part of Tizonia
 *
 * Tizonia is free software: you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Tizonia is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Tizonia.  If not, see <http://www.gnu.org/licenses/>.
 */
/**
 * @file   oggmuxfltprc_decls.h
 * @author Juan A. Rubio <juan.rubio@aratelia.com>
 *
 * @brief  Tizonia - Ogg muxer filter processor declarations
 *
 *
 */

#ifndef OGGDMUXFLTPRC_DECLS_H
#define OGGDMUXFLTPRC_DECLS_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

#include <oggz/oggz.h>

#include <OMX_Core.h>

#include <tizplatform.h>

#include <tizfilterprc.h>
#include <tizfilterprc_decls.h>

typedef struct oggmuxflt_prc oggmuxflt_prc_t;
struct oggmuxflt_prc
{
  /* Object */
  const tiz_filter_prc_t _;
  FILE *p_file_;
  OGGZ *p_oggz_;
  long oggz_serialno_;
  tiz_buffer_t * p_store_;
  OMX_PARAM_CONTENTURITYPE * p_uri_;
  bool audio_auto_detect_on_;
  OMX_S32 audio_coding_type_;
  bool video_auto_detect_on_;
  OMX_S32 video_coding_type_;
};

typedef struct oggmuxflt_prc_class oggmuxflt_prc_class_t;
struct oggmuxflt_prc_class
{
  /* Class */
  const tiz_filter_prc_class_t _;
  /* NOTE: Class methods might be added in the future */
};

#ifdef __cplusplus
}
#endif

#endif /* OGGDMUXFLTPRC_DECLS_H */