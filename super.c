/*
 * sfs/super.c
 *
 * Copyrite (C) 2011
 * Zhou Peng (ailvpeng25@gmail.com)
 */

#include <linux/fs.h>
#include <linux/module.h>
#include <linux/kernel.h>

static struct dentry *sfs_mount(struct file_system_type *fs_type,
					int flags, const char *dev_name, void *data);
static void sfs_kill_sb(struct super_block *sb);

static struct file_system_type sfs_type = {
	.name = "sfs",
	.owner = THIS_MODULE,
	.mount = sfs_mount,
	.kill_sb = sfs_kill_sb,
};

static __init init_sfs(void)
{
	printk(KERN_INFO "init sfs ...\n");
	return 0;
}

static void __exit exit_sfs(void)
{
	printk(KERN_ALERT "exit sfs!\n");
}

MODULE_AUTHOR("Zhou Peng");
MODULE_DESCRIPTION("A Sample File System");
MODULE_LICENSE("GPL");
module_init(init_sfs);
module_exit(exit_sfs);
