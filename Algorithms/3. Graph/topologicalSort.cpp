void dfs(int here) { 
	visited[here]=true; 
	for(int i=0; i<graph[here].size(); i++){ 
		int there = graph[here][i]; 
		if(visited[there]==false) dfs(there); 
	} 
	ans.push_back(here); 
}

void bfs() { 
	queue<int> q; 
	for(int i=1; i<=n; i++){ 
		if(in[i]==0){ 
			q.push(i); 
			ans.push_back(i);
 		} 
 	} 
 
 	while(!q.empty()){ 
 		int here=q.front(); 
 		q.pop(); 
 		for(int i=0; i<graph[here].size(); i++){ 
 			int there = graph[here][i]; 
 			in[there]--; 
  			if(in[there]==0){ 
  				q.push(there); 
  				ans.push_back(there); 
  			}
   		} 
	}
}
