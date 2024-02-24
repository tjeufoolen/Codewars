from dateutil.relativedelta import relativedelta

def format_duration(s):
    if s == 0:
        return 'now'
    
    # convert days 
    attrs = ['days', 'hours', 'minutes', 'seconds']
    human_readable = lambda delta: ['%d %s' % (getattr(delta, attr), getattr(delta, attr) > 1 and attr or attr[:-1]) 
        for attr in attrs if getattr(delta, attr)]
    components=human_readable(relativedelta(seconds=s))
    
    # handle years (dirty)
    if 'days' in components[0]:
        days = int(components[0].replace(" days", ""))
        
        if (days > 365):
            years= days // 365
            days = days % 365
            
            components[0] = f'{days} day'
            if days > 1:
                 components[0] += 's'
                
            components.insert(0, f'{years} year')
            if years > 1:
                 components[0] += 's'
    
    str=""
    for i, component in enumerate(components):
        if i == 0:
            str += component
        elif i == len(components)-1:
            str += f' and {component}'
        else:
            str += f', {component}'
            
    return str