/*
 * This file is part of libFirm.
 * Copyright (C) 2012 University of Karlsruhe.
 */

/**
 * @file
 * @brief   declaration for the transform function (code selection)
 */
#ifndef FIRM_BE_BPF_BPF_TRANSFORM_H
#define FIRM_BE_BPF_BPF_TRANSFORM_H

#include "firm_types.h"

void bpf_init_transform(void);

void bpf_transform_graph(ir_graph *irg);

#endif
