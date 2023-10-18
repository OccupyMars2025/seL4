/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * SPDX-License-Identifier: GPL-2.0-only
 */

#pragma once

#include <config.h>

#ifdef CONFIG_IOMMU

void invalidate_iotlb(void);
void vtd_handle_fault(void);
bool_t vtd_create_irte_ioapic(word_t vector, word_t level, cpu_id_t delivery_cpu, word_t *entry_ret);
/* calculate the number of IOPTs needed to map the rmrr regions */
word_t vtd_get_n_paging(acpi_rmrr_list_t *rmrr_list);
/* initialise the number of IOPTs */
bool_t vtd_init_num_iopts(uint32_t num_drhu);
bool_t vtd_init(cpu_id_t  cpu_id, acpi_rmrr_list_t *rmrr_list);

#endif /* CONFIG_IOMMU */
