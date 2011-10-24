/*
 * sfs/super.c
 *
 * Copyrite (C) 2011
 * Zhou Peng (ailvpeng25@gmail.com)
 */

#include <linux/fs.h>
#include <linux/module.h>

static struct dentry *sfs_mount(struct file_system_type *fs_type,
					int flags, const char *dev_name, void *data);
static void sfs_kill_sb(struct super_block *sb);

static struct file_system_type sfs_type = {
	.name = "sfs",
	.owner = THIS_MODULE,
	.mount = sfs_mount,
	.kill_sb = sfs_kill_sb,
};
