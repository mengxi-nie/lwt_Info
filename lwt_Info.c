typedef enum 
{
	LWT_INFO_NTHD_ZOMBIES = ?????;
	LWT_INFO_NTHD_BLOCKED = __list_h_blocked.size();
	LWT_INFO_NTHD_RUNNABLE = __list_h_runnable.size();
	LWT_INFO_NCHAN = ref_cnt - __list_h_chan_recycle.size();
	LWT_INFO_NSNDING = snd_cnt;
	LWT_INFO_NRCVING = __list_h_blocked.size() - snd_cnt;
}lwt_info_t;


inline int
lwt_info(lwt_info_t t)
{
	return __lwt_cnt(t);
}